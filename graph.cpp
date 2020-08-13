#include<iostream>
#include<graphics.h>
using namespace std;
int main()
{
	
 	float dy,dx,x1,x2,y1,y2,step,slope;
	int xinc,yinc;
	cout<<"Enter the starting cordinates of x and y"<<endl;
	cin>>x1>>y1;
	cout<<"Enter the ending cordinates of x and y"<<endl;
	cin>>x2>>y2;
	dy=y2-y1;
	dx=x2-x1;
	
	if(abs(dy)>abs(dx))
	step=dy;
	else
	step=dx;
	
	xinc=x1/step;
	yinc=y1/step;
	int gd=DETECT,gm;
	initgraph(&gd,&gm,NULL);

	for(int i=0;i<=step;i++)
	{
		putpixel(x1,y1,WHITE);
		x1=xinc+x1;
		y1=yinc+y1;
	}
	getchar();
	//closegraph();
	

	
}
