/******************
CSC 478/578 Project 2
Cody Adams
Mark Turnpaugh
SEQUENTIAL VERSION
******************/

/**********************************************************************
	Project Outline
***********************************************************************
	1.	Read old file
	2.	Put pixels into array
	3.	Make new array with new size
	4.	Place known pixels in new array
	5.	Calculate RGB values for unknown pixels
	6.	Write new pixels to array
	7.	Write new array to new BMP
**********************************************************************/

#include <iostream>
#include <windows.h>
#include <time.h>
#include <sstream>

#using <mscorlib.dll>

using namespace std;
using namespace System;

struct NEWBMPHEAD
{
     char id[2];
     long filesize;
     int reserved[2];
     long headersize;
     long infoSize;
     long width;
     long depth;
     short biPlanes;
     short bits;
     long biCompression;
     long biSizeImage;
     long biXPelsPerMeter;
     long biYPelsPerMeter;
     long biClrUsed;
     long biClrImportant;
};	
struct CoordRGB //x and y coordinate and RGB value for each pixel, double to avoid typecasting
{
	int x;
	int y;
	double R;
	double G;
	double B;
};

struct Pixels //Each pixel has four references points where it draws its color
{
	//Start Mark's notes 
	/*
	topleft[5] = <x,y,R,G,B>;
	topright[5] = <x,y,R,G,B>;
	bottomleft[5] = <x,y,R,G,B>;
	bottomright[5] = <x,y,R,G,B>;
	*/
	//End Mark's Notes

	CoordRGB topleft;
	CoordRGB topright;
	CoordRGB bottomleft;
	CoordRGB bottonright;
	};

/**************************
	Function Prototypes
**************************/
void Spawner(int, int);
void OldPixelsToNew(int, int, Pixels);
void SaveBitmapToFile(BYTE*, LONG, LONG, WORD);

BITMAPFILEHEADER oldbfh;				// source BMP file header
BITMAPINFOHEADER oldbih;				// source BMP image header
BITMAPFILEHEADER newbfh;				// destinaton BMP file header
BITMAPINFOHEADER newbih;				// destinaton BMP image header
RGBTRIPLE *oldimage;					// array of structures containing source file Pixel info, RGB
RGBTRIPLE *newimage;					// array of structures containing destinaton file Pixel info, RGB
DWORD written;							// size of data placed into array
HANDLE oldfile;							// file handle for source image 
HANDLE newfile;							// file handle for destinaton image

void main()
{
	/*************************************************
	//Declaration of variable and other items needed//
	*************************************************/

	//int spawn = numcores/(scaler*scaler - 1)// int numcores = ??; not using unless needed;
	
	// Create the necessary bitmap file and info headers
	// from : http://msdn.microsoft.com/en-us/library/aa446563.aspx
	// BITMAPINFOHEADER infoHdr = new BITMAPINFOHEADER(bpp, width, height);
	// BITMAPFILEHEADER fileHdr = new BITMAPFILEHEADER(infoHdr);

	long oldWidth;
	long oldHeight;
	long oldimagesize;
	int scaler;								// read from cmd line or input
	long newWidth;
	long newHeight;
	long newImgSize;

	/*************************************************
	//    IMAGE INFO PROCESS                        //
	*************************************************/
	cout << "scaler ?? : ";
	cin >> scaler;
	// Open a channel to source file
	oldfile = CreateFile("source.bmp",GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,NULL,NULL);
	// Read header
	ReadFile(oldfile,&oldbfh,sizeof(oldbfh),&written,NULL);
	ReadFile(oldfile,&oldbih,sizeof(oldbih),&written,NULL);
	// Read image
	oldimagesize = oldbih.biSizeImage;
	oldimage = new RGBTRIPLE[oldimagesize];
	ReadFile(oldfile,oldimage,oldimagesize*sizeof(RGBTRIPLE),&written,NULL);	//sizeof(RGBTRIPLE)=3
	// Close source file
	CloseHandle(oldfile);
	oldWidth = oldbih.biWidth;
	oldHeight = oldbih.biHeight;
	
	newWidth = oldWidth * scaler;
	newHeight = oldHeight * scaler;
	newImgSize = newWidth * newHeight;
	
	/*************************************************
	//    New Bitmap Creation Stuff                 //
	*************************************************/

	newimage = new RGBTRIPLE[newImgSize];
	NEWBMPHEAD bh;
	memset ((char *)&bh,0,sizeof(bh));			// sets everything to 0
	memcpy (bh.id,"BM",2);
	// bh.filesize  =	;						// calculated size of your file (see below)
	// bh.reserved  = two zero bytes
	bh.headersize  = 54L;						// (for 24 bit images)
	bh.infoSize = 0x28L;						// (for 24 bit images)
	bh.width = newWidth;						// width in pixels of your image
	bh.depth = newHeight;						// depth in pixels of your image
	bh.biPlanes = 1;							// (for 24 bit images)
	bh.bits = 24;								// (for 24 bit images)
	bh.biCompression = 0L;						// (no compression)

	long bytesPerLine;

	bytesPerLine = bh.width * 3;				// (for 24 bit images)
												// round up to a dword boundary
	if (bytesPerLine & 0x0003) 
	{
	   bytesPerLine |= 0x0003;
	   ++bytesPerLine;
	}

	const long RGBextended = oldimagesize*3;
	BYTE* IMAGE= new BYTE [RGBextended*scaler];

	newfile = CreateFile( "new.txt",GENERIC_WRITE, 0,NULL,CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL,NULL);

	//Place Known Pixels
	for (long Y = 0; Y < oldHeight; Y++)
	{
		for (long X = 0; X < int(oldWidth); X++)
		{
			if (X < 2)	//is in column 0 or 1 and must be handled specially
				newimage[(scaler * X)] = oldimage[X];
			else
				newimage[(scaler * X) - (scaler)] = oldimage[X];
		}
		if (Y < 2)	//is in row 0 or 1 and must be handled specially
			newimage[(scaler * Y)] = oldimage[Y];
		else
			newimage[(scaler * Y) - (scaler)] = oldimage[Y];
	}

	//Calculate unknown pixels

	int blue, green, red;
	
	for (int stuff = 0; stuff < oldimagesize/3; stuff++)
	{
		// IMAGE[stuff] = oldimage[stuff].rgbtBlue;
		// IMAGE[stuff+1] = oldimage[stuff].rgbtRed;
		// IMAGE[stuff+2] = oldimage[stuff].rgbtGreen;
		
		// cout << int(oldimage[stuff].rgbtBlue) << "\n";
		// cout << int(oldimage[stuff].rgbtRed) << "\n";
		// cout << int(oldimage[stuff].rgbtGreen) << "\n";

		red = int(newimage[stuff].rgbtRed);
		blue = int(newimage[stuff].rgbtBlue);
		green = int(newimage[stuff].rgbtGreen);

		cout << stuff << " " << red << " " << blue << " " << green << "\n";

		WriteFile( newfile, &blue, sizeof(blue), &written , NULL );
		WriteFile( newfile, &green, sizeof(green), &written , NULL );
		WriteFile( newfile, &red, sizeof(red), &written , NULL );

		if (stuff == oldHeight)
			system("PAUSE");
	}
	
	// Close the file handle
    CloseHandle( newfile );

	/******************************************
	//feed pixels from OldImage into NewImage//
	******************************************/
	SaveBitmapToFile( IMAGE, oldWidth, oldHeight, 24);
	
	cout << "All done !! ";
	system("PAUSE");
}

/* Bitmap storage information 
   ———————-
   | BITMAP FILE HEADER |
   |———————
   | BITMAP INFO HEADER |
   |———————
   | RGBQUAD ARRAY      |
   |———————
   | COLOR INDEX ARRAY  |
   ———————-

The above said is the normal format of a bitmap.

To save a bitmap, we should have the following information to write a file.

1. Create a bitmap file header
2. Create Bitmap information header
3. Pixel Data + Color Index array

See the sample code. I explained each step with comments.
*/
//from : http://codereflect.com/2007/03/14/how-to-save-bitmap-to-file/

void SaveBitmapToFile(BYTE* pBitmapBits, LONG lWidth, LONG lHeight, WORD wBitsPerPixel)
{
    BITMAPINFOHEADER bmpInfoHeader = {0};
    // Set the size
    bmpInfoHeader.biSize = sizeof(BITMAPINFOHEADER);
    // Bit count
    bmpInfoHeader.biBitCount = wBitsPerPixel;
    // Use all colors
    bmpInfoHeader.biClrImportant = 0;
    // Use as many colors according to bits per pixel
    bmpInfoHeader.biClrUsed = 0;
    // Store as un Compressed
    bmpInfoHeader.biCompression = BI_RGB;
    // Set the height in pixels
    bmpInfoHeader.biHeight = lHeight;
    // Width of the Image in pixels
    bmpInfoHeader.biWidth = lWidth;
    // Default number of planes
    bmpInfoHeader.biPlanes = 1;
    // Calculate the image size in bytes
    bmpInfoHeader.biSizeImage = lWidth* lHeight * (wBitsPerPixel/8);

    BITMAPFILEHEADER bfh = {0};
    // This value should be values of BM letters i.e 0×4D42
    // 0×4D = M 0×42 = B storing in reverse order to match with endian
	char M = 0x4D;
	char B = 0x42;
	newbfh.bfType = M & B;

    // or
    //bfh.bfType = B+(M << 8);
	// <<8 used to shift ‘M’ to end
	//

    // Offset to the RGBQUAD
    newbfh.bfOffBits = sizeof(BITMAPINFOHEADER) + sizeof(BITMAPFILEHEADER);
    // Total size of image including size of headers
    newbfh.bfSize = bfh.bfOffBits + newbih.biSizeImage;
    // Create the file in disk to write
    HANDLE hFile = CreateFile( "new.bmp",GENERIC_WRITE, 0,NULL,CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL,NULL);
    if( !hFile ) // return if error opening file
    {
        return;
    }
    DWORD dwWritten = 0;
    // Write the File header
    WriteFile( hFile, &newbfh, sizeof(bfh), &dwWritten , NULL );
    // Write the bitmap info header
    WriteFile( hFile, &newbih, sizeof(newbih), &dwWritten, NULL );
    // Write the RGB Data
	// ReadFile(oldfile,oldimage,oldimagesize*sizeof(RGBTRIPLE),&written,NULL);
    WriteFile( hFile, pBitmapBits, newbih.biSizeImage, &dwWritten, NULL );
    // Close the file handle
    CloseHandle( hFile );
}
/*
OldPixelsToNew(int x, int y, Pixels pixel)
{
	//calculate new coordinates of BCD

	float dTL = sqrt( (topleft.x - x)^2 + (topleft.y -y)^2 );
	float dTR = sqrt( (topright.x - x)^2 + (topright.y -y)^2 );
	float dBL = sqrt( (bottomleft.x - x)^2 + (bottomleft.y -y)^2 );
	float dBR = sqrt( (bottomright.x - x)^2 + (bottomright.y -y)^2 );
	
	float SumDeez = dTL + dTR + dBL + dBR;
	
	float ratioTL = (SumDeez - dTL)/SumDeez;
	float ratioTR = (SumDeez - dTR)/SumDeez;
	float ratioBL = (SumDeez - dBL)/SumDeez;
	float ratioBR = (SumDeez - dBR)/SumDeez;
	
	int NewR = (pixel.topleft[2] * ratioTL + 
				pixel.topright[2] * ratioTR + 
				pixel.bottomleft[2] * ratioBL + 
				pixel.bottomleft[2] * ratioBR )/4
	
	int NewG = (pixel.topleft[3] * ratioTL + 
				pixel.topright[3] * ratioTR + 
				pixel.bottomleft[3] * ratioBL + 
				pixel.bottomleft[3] * ratioBR )/4
	
	int NewB = (pixel.topleft[4] * ratioTL + 
				pixel.topright[4] * ratioTR + 
				pixel.bottomleft[4] * ratioBL + 
				pixel.bottomleft[4] * ratioBR )/4
	
	
	NewImage.R = NewR;
	NewImage.G = NewG;
	NewImage.B = NewB;
	
	close_thread();
}
*/