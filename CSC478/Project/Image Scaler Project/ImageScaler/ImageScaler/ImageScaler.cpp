/******************
CSC 478/578 Project 2
Cody Adams
Mark Turnpaugh
******************/



/**********************************************************************
	Project Outline
***********************************************************************
	1.	Read old file
	2.	Put pixels into array
	3.	Make new array with new size
	4.	Place known pixels in new array
	5?1 Spawn master threads for each row of old image that correspond
		to blocks of rows in new image
	5?2
	6.	Each master spawns old width-1 threads to build blocks
	7.	Each master spawns edge thread
	8.	Write new array to new BMP
**********************************************************************/

//COLORREF SetPixel(
//  __in  HDC hdc,
//  __in  int X,
//  __in  int Y,
//  __in  COLORREF crColor
//);


#include <windows.h>

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

	

	/**************
	Timer variables
	**************/
	double StartTime=0;
	double EndTime=0;
	

	/**************************
		Function Prototypes
	**************************/
	void Spawner(int, int);
	void OldPixelsToNew(int, int, Pixels);

void main()
{
	/*************************************************
	//Declaration of variable and other items needed//
	*************************************************/

	//int spawn = numcores/(scaler*scaler - 1)// int numcores = ??; not using unless needed;
	BITMAPFILEHEADER oldbfh;				//source BMP file header
	BITMAPINFOHEADER oldbih;				//source BMP image header
	BITMAPFILEHEADER newbfh;				//destinaton BMP file header
	BITMAPINFOHEADER newbih;				//destinaton BMP image header
	RGBTRIPLE *oldimage;					//array of structures containing source file Pixel info, RGB
	RGBTRIPLE *newimage;					//array of structures containing destinaton file Pixel info, RGB
	DWORD written;							//size of data placed into array
	HANDLE oldfile;							//file handle for source image 
	HANDLE newfile;							//file handle for destinaton image 

	int oldWidth = oldbih.biWidth;
	int oldHeight = oldbih.biHeight;
	int oldimagesize;
	int scaler;								//read from cmd line or input
	int newWidth = oldWidth * scaler;
	int newHeight = oldHeight * scaler;
	int newImgSize = newWidth * newHeight;
	

	/*************************************************
	//    IMAGE INFO PROCESS                        //
	*************************************************/
	// Open a channel to source file
	oldfile = CreateFile("source.bmp",GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,NULL,NULL);
	// Read header
	ReadFile(oldfile,&oldbfh,sizeof(oldbfh),&written,NULL);
	ReadFile(oldfile,&oldbih,sizeof(oldbih),&written,NULL);
	// Read image
	oldimagesize = oldbih.biSizeImage;
	oldimage = new RGBTRIPLE[oldimagesize];
	ReadFile(oldfile,oldimage,oldimagesize*sizeof(RGBTRIPLE),&written,NULL);
	// Close source file
	CloseHandle(oldfile);
	
	
	/*************************************************
	//    New Bitmap Creation Stuff                 //
	*************************************************/
	newimage = new RGBTRIPLE[newImgSize];
	NEWBMPHEAD bh;
	memset ((char *)&bh,0,sizeof(bh)); /* sets everything to 0 */
	memcpy (bh.id,"BM",2);
	//bh.filesize  =	;						//calculated size of your file (see below)
		//bh.reserved  = two zero bytes
	bh.headersize  = 54L;					// (for 24 bit images)
	bh.infoSize = 0x28L;					//(for 24 bit images)
	bh.width = newWidth;				//width in pixels of your image
	bh.depth = newHeight;				//depth in pixels of your image
	bh.biPlanes = 1;						//(for 24 bit images)
	bh.bits = 24;						//(for 24 bit images)
	bh.biCompression = 0L;					//  (no compression)

	int bytesPerLine;

	bytesPerLine = bh.width * 3;  /* (for 24 bit images) */
	/* round up to a dword boundary */
	if (bytesPerLine & 0x0003) 
	   {
	   bytesPerLine |= 0x0003;
	   ++bytesPerLine;
	   }


	/**************
	  Timer Start
	
	StartTime = clock();
	cout << (StartTime / CLOCKS_PER_SEC)<< endl;
	**************/

	/******************************************
	feed pixels from OldImage into NewImage
	******************************************/
	int x =1;
	int y =1;
	for (int i = 0; i <= oldimagesize-1; i = i + spawn)
	{
		for (int j = i; j <= spawn - 1;
		{
			if (x > oldWidth) { x = 1; y++;}
				
			//create_thread Spawner(x,y);
			int x = a+1;
			int y = b;
			for (int i = y; i < scaler; i++)
				for (int j = x; j < scaler; j++)
					fork OldPixelsToNew(i,j,Pixels)
/*****************************************************/

			for (y=0; y < h-1; y++)
			{	
				for (x=0; x < w-1; x++)
				{
					spawn(x,y,a,b,c,d)
				}
				x++
				spawnedge(x,y,a,c)
			}
			y++
			for(x=0; x>w-1; x++)
			{	
				spawnedge(x,y,a,b)
			}
			x++ 
			spawncorner(x,y,a)

		

			x++;
		join_thread Spawner;
	


	/**************
	Timer End
	

	EndTime = clock();
	cout << endl << (EndTime / CLOCKS_PER_SEC);
	cout << endl << ((EndTime - StartTime)/ CLOCKS_PER_SEC);
	**************/

	system("PAUSE");
	return;
}//end of main

//Spawner(int a, int b)  //went to maine??
//{//calculate new coordinates of A
//	int x = a+1;
//	int y = b;
//	for (int i = y; i < scaler; i++)
//		for (int j = x; j < scaler; j++)
//			fork OldPixelsToNew(i,j,Pixels)
//}

OldPixelsToNew(x,y,Pixels)
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
	
	int NewR = (Pixels.topleft[2] * ratioTL + 
				Pixels.topright[2] * ratioTR + 
				Pixels.bottomleft[2] * ratioBL + 
				Pixels.bottomleft[2] * ratioBR )/4
	
	int NewG = (Pixels.topleft[3] * ratioTL + 
				Pixels.topright[3] * ratioTR + 
				Pixels.bottomleft[3] * ratioBL + 
				Pixels.bottomleft[3] * ratioBR )/4
	
	int NewB = (Pixels.topleft[4] * ratioTL + 
				Pixels.topright[4] * ratioTR + 
				Pixels.bottomleft[4] * ratioBL + 
				Pixels.bottomleft[4] * ratioBR )/4
	
	
	NewImage.R = NewR;
	NewImage.G = NewG;
	NewImage.B = NewB;
	
	close_thread();
}

