/******************
CSC 578 Project 2
Cody Adams
Mark Turnpaugh
******************/

#include <windows.h>

using namespace std;

struct NEWBMPHEAD{
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



	/*************************************************
	//    Declaration of variable and other items needed//
	*************************************************/
	int X = image.width;
	int Y = image.height;
	int scaler; //read from cmd line or input
	int newX = X * scaler;
	int newY = Y * scaler;
	int newImgSize = newX * newY;
	int numcores = ??;
	int spawn = numcores/(scaler*scaler - 1)
	OldImage = RGBTRIPLE[image.imagesize];
	NewImage = RGBTRIPLE[newImgSize];

	Struct Pixels
	{
		topleft[5] = <x,y,R,G,B>;
		topright[5] = <x,y,R,G,B>;
		bottomleft[5] = <x,y,R,G,B>;
		bottomright[5] = <x,y,R,G,B>;
	};


	BITMAPFILEHEADER oldbfh;
	BITMAPINFOHEADER oldbih;
	RGBTRIPLE *oldimage;
	DWORD written;
	HANDLE oldfile;
	int oldimagesize;
	
	char return1 = 0x0D;
	char return2 = 0x0A;
	//int needle = 0;
	double StartTime=0;
	double EndTime=0;
	void JerkOff();

	/**************************
		Function Prototypes
	**************************/
	Spawner(int, int);
	OldPixelsToNew(int, int, Pixels);

void main()
{
	/*************************************************
	//    IMAGE INFO PROCESS                             //
	*************************************************/
	// Open a channel to source file
     hfile = CreateFile("source.bmp",GENERIC_READ,FILE_SHARE_READ,NULL,OPEN_EXISTING,NULL,NULL);
     // Read header
     ReadFile(hfile,&bfh,sizeof(bfh),&written,NULL);
     ReadFile(hfile,&bih,sizeof(bih),&written,NULL);
     // Read image
     imagesize = bih.biSizeImage;
     image = new RGBTRIPLE[imagesize];
     ReadFile(hfile,image,imagesize*sizeof(RGBTRIPLE),&written,NULL);
     // Close source file
     CloseHandle(hfile);
     // Open channel to output

	NEWBMPHEAD bh;

	memset ((char *)&bh,0,sizeof(BMPHEAD)); /* sets everything to 0 */
	memcpy (bh.id,"BM",2);
	bh.filesize  =							//calculated size of your file (see below)
	//bh.reserved  = two zero bytes
	bh.headersize  = 54L;					// (for 24 bit images)
	bh.infoSize  =  0x28L;					//(for 24 bit images)
	bh.width     = NewWidth;				//width in pixels of your image
	bh.depth     = NewHeight;				//depth in pixels of your image
	bh.biPlanes  =  1;						//(for 24 bit images)
	bh.bits      = 24;						//(for 24 bit images)
	bh.biCompression = 0L;					//  (no compression)

	int bytesPerLine;

	bytesPerLine = bh.width * 3;  /* (for 24 bit images) */
	/* round up to a dword boundary */
	if (bytesPerLine & 0x0003) 
	   {
	   bytesPerLine |= 0x0003;
	   ++bytesPerLine;
	   }

	StartTime = clock();
	cout << (StartTime / CLOCKS_PER_SEC)<< endl;


	/******************************************
	feed pixels from OldImage into NewImage
	******************************************/
	int x =1;
	int y =1;
	for (int i = 0; i <= oldimage.imagesize-1; i=i+spawn)
		for (int j = i; j <= spawn-1;
			if (x > X) { x =1; y++;}
				avereragecolor = (pixel(x,y).Red + pixel(x,y).Green + pixel(x,y).Blue) / 3;
			create_thread Spawner(x,y);
			x++;
		join_thread Spawner;
	




	EndTime = clock();
	cout << endl << (EndTime / CLOCKS_PER_SEC);
	cout << endl << ((EndTime - StartTime)/ CLOCKS_PER_SEC);
	
	system("PAUSE");
	return;
}//end of main

Spawner(int a, int b)
{
	int x = a+1;
	int y = b;
	for (int i = y; i < scaler; i++)
		for (int j = x; j < scaler; j++)
			fork OldPixelsToNew(i,j,Pixels)
}

OldPixelsToNew(x,y,Pixels)
{
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