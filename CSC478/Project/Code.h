// Primitive BMP to ASCII art generator
// Reads source.bmp and outputs art.txt
// Source must be 24-bit .bmp

#include <iostream.h>
#include <windows.h>

#define MAX_SHADES 10

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

int main()
{
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
     for(int y = bih.biHeight-1;y >= 0;y--)
     {
          for(int x = 0;x < bih.biWidth;x++)
          {
               // Get the average color
               average_color = (image[x+y*bih.biWidth].rgbtBlue+image[x+y*bih.biWidth].rgbtRed+image[x+y*bih.biWidth].rgbtGreen)/3;
               // Convert to a shade of 8
               average_color /= (256/MAX_SHADES);
               if(average_color >= MAX_SHADES)
                    average_color -= 1;
               // Output
               WriteFile(hfile,&shades[average_color],1,&written,NULL);
               //WriteFile(hfile,&shades[average_color],1,&written,NULL);
          }
          WriteFile(hfile,&return1,1,&written,NULL);
          WriteFile(hfile,&return2,1,&written,NULL);
     }
     // Close handle to output
     CloseHandle(hfile);
     return 0;
}