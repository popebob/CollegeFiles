//Declaration of variable and other items needed
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
	

//feed pixels from OldImage into NewImage
int x =1;
int y =1;
for (int i = 0; i <= image.imagesize-1; i=i+spawn)
	for (int j = i; j <= spawn-1;
		if (x > X) { x =1; y++;}
			avereragecolor = (pixel(x,y).Red + pixel(x,y).Green + pixel(x,y).Blue) / 3;
		create_thread Spawner(x,y);
		x++;
	join_thread Spawner;


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