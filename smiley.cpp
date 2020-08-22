#include<stdio.h>

#include <graphics.h>

#include <conio.h>



int main()

{

	//initilizing graphic driver and graphic mode variable

	int graphicdriver=DETECT,graphicmode;



	//calling initgraph function with certain parameters

	initgraph(&graphicdriver,&graphicmode,"c:\\turboc3\\bgi");



	//Printing message for user

	outtextxy(130, 90 , "Program to draw a smiley face in C graphics");

        //(x,y,"message")



	//setting color to yellow

	setcolor(YELLOW);

	

	//creating circle and fill it with yellow color using floodfill.

	circle(300, 200, 90);

        //(x,y,radius)

	setfillstyle(SOLID_FILL, YELLOW);//perimeter of circle

	floodfill(300, 200, YELLOW);//filling the circle with color

           //(x,y,COLOR)

	//setting color to black

	setcolor(BLACK);

	setfillstyle(SOLID_FILL, BLACK);



	//using fill ellipse and ellipse for creating face.

	fillellipse(340, 185, 10, 10);//eye 1

           //(x,y,radius1, Radius2)

	fillellipse(260, 185, 10, 10);//eye 2

        //(x,y,radius1, Radius2)



	ellipse(300, 200, 205, 335, 50, 60);//mouth of the smiley

        //(x,y,curvatures)

	  
	getch();

	return 0;	

}
