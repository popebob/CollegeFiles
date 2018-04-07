// Primitive BMP to ASCII art generator
// Reads source.bmp and outputs art.txt
// Source must be 24-bit .bmp

#include <iostream>
#include <windows.h>
#include <time.h>

//#include "H:\CSC 375\ASS-KEY_Pr0n\New folder\Pre-built.2\include\pthread.h"


using namespace std;
//using namespace System;
//using namespace System::Threading;

#define MAX_SHADES 10
#define MAX_Threads 4;  //MAX Threads

BITMAPFILEHEADER bfh;
BITMAPINFOHEADER bih;
RGBTRIPLE *image;
DWORD written;
HANDLE hfile;
int imagesize;
char shades[MAX_SHADES] = {'#','$','O','=','+','|','-','^','.',' '};
char return1 = 0x0D;
char return2 = 0x0A;
int needle = 0;
int average_color = 0;
int countmark = 0, countinner = 0;
//double __t;
//	__t=clock();
double StartTime=0;
double EndTime=0;



//function prototypes
void ToAssKey(RGBTRIPLE &image);
void JerkOff();

int main()
{
    /*************************************************
	//    Thread Declaration//
	*************************************************/
	
	 HANDLE hThread[4];
	 DWORD dwID[4];
		
	
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
     hfile = CreateFile("art.txt",GENERIC_WRITE,NULL,NULL,CREATE_ALWAYS,FILE_ATTRIBUTE_NORMAL,NULL);
     // Keeping in mind the image is upside down, convert and write it
     // It down-samples the image a bit in res too

	 


	StartTime = clock();
	cout << (StartTime / CLOCKS_PER_SEC)<< endl;

	
	 for(int y = bih.biHeight-1;y >= 0;y--)
     { cout << ".";  countmark++;
          for(int x = 0;x < bih.biWidth;x++)
          { countinner++;
            pixel = 
			//Threaded call to ToAssKey function.  send RGBTRIPLE image to the funtion
			hThread[x] = CreateThread(NULL,0,(LPTHREAD_START_ROUTINE)ToAssKey,NULL,0,&dwID[0]);
		  }
          WriteFile(hfile,&return1,1,&written,NULL);
          WriteFile(hfile,&return2,1,&written,NULL);
     }
EndTime = clock();
cout << endl << (EndTime / CLOCKS_PER_SEC);
cout << endl << ((EndTime - StartTime)/ CLOCKS_PER_SEC);
	 // Close handle to output
     CloseHandle(hfile);
     cout << endl << countmark << " " <<countinner;
	 system("PAUSE");
	 return 0;
}


void ToAssKey(RGBTRIPLE &image)
{	// Get the average color
	average_color = (image[x+y*bih.biWidth].rgbtBlue+image[x+y*bih.biWidth].rgbtRed+image[x+y*bih.biWidth].rgbtGreen)/3;
	// Convert to a shade of 8
	average_color /= (256/MAX_SHADES);
	if(average_color >= MAX_SHADES)
		average_color -= 1;
	// Output
	WriteFile(hfile,&shades[average_color],1,&written,NULL);
	//WriteFile(hfile,&shades[average_color],1,&written,NULL);
	return 0;
}