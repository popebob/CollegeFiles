#include <iostream>
#include <fstream>
using namespace std; //keep this in or it breaks and dies horribly
struct BMFH { //declares BitMap File Header structure
unsigned short bfType; //might need to be a char
unsigned long bfSize;
unsigned short bfReserved1;
unsigned short bfReserved2;
unsigned long bfOffBits;
};
struct BMIH { //declares BitMap Info Header structure
unsigned long biSize;
unsigned long biWidth;
unsigned long biHeight;
unsigned short biPlanes;
unsigned short biBitCount;
unsigned long biCompression;
unsigned long biSizeImage;
unsigned long biXPelsPerMeter;
unsigned long biYPelsPerMeter;
unsigned long biClrUsed;
unsigned long biClrImportant;
};
struct RGBQUAD{ //declares RGBQUAD
int rgbBlue;
int rgbGreen;
int rgbRed;
int rgbReserved;
};
struct pixel {	//declares pixel structure
unsigned short R;
unsigned short G; //RGB values for each pixel
unsigned short B;
//unsigned short unused; //needed?
};
void setfileheader(BMFH& fileheader) //must pass by reference!
{ // Fills the file header with default values...
fileheader.bfType = 19778;
fileheader.bfSize = 108;
fileheader.bfReserved1 = 0;
fileheader.bfReserved2 = 0;
fileheader.bfOffBits = 1078;
}
void setinfoheader(BMIH& infoheader) //must pass by reference!
{ // Fills the file header with default values...
infoheader.biSize = sizeof(infoheader);
infoheader.biWidth = 128;
infoheader.biHeight = 128;
infoheader.biPlanes = 1;
infoheader.biBitCount = 24;
infoheader.biCompression = 0;
infoheader.biSizeImage = 0;
infoheader.biXPelsPerMeter = 0;
infoheader.biYPelsPerMeter = 0;
infoheader.biClrUsed = 0;
infoheader.biClrImportant = 0;
}
int main(){
//------------Setting up pixels and co-//

pixel PICTAR[128][128]; //declares an array of pixels
int i;
int j;
for (int i=0; i<128; i++){ //horizontal axis of pixels
for (int j=0; j<128; j++){ //vertical axis

PICTAR[i][j].R = 100; //make pixels red
PICTAR[i][j].G = 0;
PICTAR[i][j].B = 0;

}
}

-------------------//
ifstream::pos_type size; //special type used for file positioning; can treat as an integer
BMFH fileheader; //makes a header called "fileheader"
BMIH infoheader;
setfileheader(fileheader); //fills header with values
setinfoheader(infoheader);
ofstream myfile ("testbmp.bmp",ios::out | ios::binary); //creates an ofstream object called myfile
//and opens it for binary input
/////////////////////Writing////////////////////////////
//myfile.write ((char*) &fileheader,sizeof(fileheader)); //write header
//myfile.write ((char*) &infoheader,sizeof(infoheader)); //write header
myfile.write ((char*) &fileheader,14); //write header
myfile.write ((char*) &infoheader,40); //write header
myfile.write ((char*) &PICTAR,sizeof(pixel)*128*128);
myfile.close();

}