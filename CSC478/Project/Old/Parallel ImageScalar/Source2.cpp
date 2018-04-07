24-bit BMP FILES

BMP Files are stored in much the same way that Microsoft Windows internally stores its bitmaps. Peculiarities to note are that:

The images are stored upside down. The first line in the file is the bottom line of the image and the last line in the file is the first line of the image. This means that if you are computing an image with resolution of 256 x 192, to be displayed in a system where the (0, 0) pixel is the top left, then the first pixel to be computed and written to the BMP file is for pixel (191, 0).
In 24-bit images RGB values are stored in Blue Green Red order.
Writing a BMP file (Using C)

The first thing you need is to declare the following structure.

typedef struct {
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
     } BMPHEAD;
Declare an object of this type and fill the members according to your file. Use the following as a guide

BMPHEAD bh;

memset ((char *)&bh,0,sizeof(BMPHEAD)); /* sets everything to 0 */
memcpy (bh.id,"BM",2);
bh.filesize  =   calculated size of your file (see below)
bh.reserved  = two zero bytes
bh.headersize  = 54L  (for 24 bit images)
bh.infoSize  =  0x28L  (for 24 bit images)
bh.width     = width in pixels of your image
bh.depth     = depth in pixels of your image
bh.biPlanes  =  1 (for 24 bit images)
bh.bits      = 24 (for 24 bit images)
bh.biCompression = 0L;  (no compression)
The number of bytes in each line of a .BMP file is always a multiple of 4 as Windows does DoubleWord Alignment on line boundaries. You need a variable bytesperline that specifies how many bytes there are in a line.

int bytesPerLine;

bytesPerLine = bh.width * 3;  /* (for 24 bit images) */
/* round up to a dword boundary */
if (bytesPerLine & 0x0003) 
   {
   bytesPerLine |= 0x0003;
   ++bytesPerLine;
   }
Next fill in the filesize

bh.filesize=bh.headersize+(long)bytesPerLine*bh.depth;
Now you have a valid BMPHEAD.

Open your bmp file and write the header to it

FILE * bmpfile;

bmpfile = fopen("myimage.bmp", "wb");
if (bmpfile == NULL)
   {
   printf("Error opening output file\n");
   /* -- close all open files and free any allocated memory -- */
   exit (1);
   }
fwrite(&bh, 1, sizeof (bh), bmpfile);
Next you have to write your 24-bit image data out to disk one line at a time. Remember that you have to write the lowest line first. First we allocate a buffer that can hold one line of the image

char *linebuf;

linebuf = (char *) calloc(1, bytesPerLine);
if (linebuf == NULL)
   {
   printf ("Error allocating memory\n");
   /* -- close all open files and free any allocated memory -- */
   exit (1);   
   }


int line;

for (line = depth; line >= 0; line --)
   {
   /* fill line linebuf with the image data for that line */
   ...
   /* remember that the order is BGR and if width is not a multiple
      of 4 then the last few bytes may be unused
   */
   fwrite(linebuf, 1, bytesPerLine, bmpfile);
   }

fclose(bmpfile);
IMPORTANT NOTES:

The BMPHEAD structure uses quite a few long values. In C, literal constants must be expressly casted to long e.g. 0L, 54L. Integer constants must also be expressly casted to long e.g. bh.width = (long) mywidth if mywidth is an integer. NEVER assign to a long or do calculations to assign to a long unless the value being assigned is long or explicitly converted to long. The same is true for floats and doubles.


 Previous Page
 HyperVis Table of Contents

Last modified on February 11, 1999, G. Scott Owen, owen@siggraph.org
 