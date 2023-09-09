#include<iostream>
#include<graphics.h>

using namespace std;

void andgate();
void orgate();
void notgate();
void nandgate();
void norgate();
void xorgate();
void xnorgate();
void startpage();
void menupage();

// Start .......................................................->

// Start Page 
void startpage()
{
//	setbkcolor(4);
	int i=600 , j=50;
	// whole border 
	setcolor(LIGHTRED);
	setfillstyle(LTSLASH_FILL,LIGHTRED);
	rectangle(50,30,1250,700);	
	floodfill(60,25,LIGHTRED);
	
	setcolor(LIGHTRED);
	settextstyle(9,HORIZ_DIR,5);
	outtextxy(250,80,"* LOGIC GATE SIMULATOR *");
	outtextxy(100,130,"____________________________________");
	setcolor(LIGHTCYAN);
	settextstyle(6,HORIZ_DIR,5);
	setcolor(YELLOW);
	outtextxy(100,230," MADE BY ....          (SE-COMP Shift 2) ");
	setcolor(LIGHTCYAN);
	settextstyle(8,HORIZ_DIR,5);
	outtextxy(100,280+j,"65. ATHARVA TIRKHUNDE ");
	outtextxy(100,340+j,"10. ANISH CHAVAN ");
	outtextxy(100+i,340+j,"35. MANAS CHACHRA ");
	outtextxy(100+i,280+j,"24. KUSHAL HEADOO ");
	outtextxy(100+300,400+j,"54. ROHIT POL ");
	setcolor(LIGHTRED);
	outtextxy(100,270,"_________________________________________");
	outtextxy(100,430+j,"_________________________________________");
	outtextxy(100,500+j,"_________________________________________");
	
	setcolor(LIGHTCYAN);
	settextstyle(8,HORIZ_DIR,5);
	outtextxy(100,480+j,"UNDER THE GUIDANCE OF : ARCHANA SAID ");
	setcolor(LIGHTBLUE);
	setcolor(WHITE);
	settextstyle(3,HORIZ_DIR,5);
	outtextxy(250,600+j,"PRESS ENTER TO START ......");
}

// Menu Page 
void menupage()
{
	setcolor(LIGHTBLUE);
	setfillstyle(LTSLASH_FILL
	,LIGHTBLUE);
	rectangle(50,30,1250,700);	
	floodfill(60,25,LIGHTBLUE);
	
	setcolor(YELLOW);
	settextstyle(9,HORIZ_DIR,5);
	outtextxy(100,50,"MENU : LIST OF EXPERIMENTS : ");
	outtextxy(100,90,"____________________________________");

	setcolor(LIGHTCYAN);
	settextstyle(8,HORIZ_DIR,5);
	outtextxy(100,150,"KEY NO.");
	outtextxy(500,150,"NAME OF EXPERIMENT ");
	
	setcolor(YELLOW);
	outtextxy(100,180,"__________________________________________");
	setcolor(WHITE);
	outtextxy(100,250,"  F1.              AND GATE ");
	outtextxy(100,300,"  F2.              OR GATE ");
	outtextxy(100,350,"  F3.              NOT GATE ");
	outtextxy(100,400,"  F4.              NAND GATE ");
	outtextxy(100,450,"  F5.              NOR GATE ");
	outtextxy(100,500,"  F6.              EX-OR GATE ");
	outtextxy(100,550,"  F7.              EX-NOR GATE ");
	
	setcolor(YELLOW);
	outtextxy(100,600,"__________________________________________");
	outtextxy(100,650,"..........................................");
	
}

void andgate()
{
// AND GATE 
//	setcolor(LIGHTBLUE);
//	setfillstyle(SOLID_FILL,LIGHTBLUE);
//	rectangle(50,30,1250,700);	
//	floodfill(60,25,LIGHTBLUE);
	
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,60,900,250);	
	floodfill(80,60,YELLOW);
	
//	TRUTH TABLE BORDER
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,330,900,650);
	floodfill(80,330,YELLOW);
	
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	rectangle(300,100,440,200);	
	floodfill(310,110,DARKGRAY);
	
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	arc(440,150,270,90,50);
	floodfill(450,160,DARKGRAY);
	
	line(250,120,300,120);
	line(250,180,300,180);
	line(490,150,590,150);
	
	// A input setcolor(GREEN);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,120,10);
	floodfill(240,120,RED);
	
	// B input setcolour 
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,180,10);
	floodfill(240,180,RED);
	
	//Output 

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(600,150,10);
	floodfill(600,150,RED);

	settextstyle(4,HORIZ_DIR,4);
	
	// TEXT BOX 
	setcolor(LIGHTRED);
	outtextxy(120,10,"LOGICAL AND GATE SIMULATOR");
	setcolor(LIGHTBLUE);
	outtextxy(180,100,"A");
	outtextxy(180,160,"B");
	outtextxy(620,130,"OUTPUT");
	setcolor(LIGHTBLUE);
	outtextxy(180,350,"KEY     A           B     OUTPUT ");
	setcolor(CYAN); 
	outtextxy(180,376,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,400,"  1.      ON        ON        ON   ");
	setcolor(CYAN);
	outtextxy(180,426,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,450,"  2.      ON        OFF      OFF  ");
	setcolor(CYAN);
	outtextxy(180,476,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,500,"  3.      OFF      ON        OFF  ");
	setcolor(CYAN);
	outtextxy(180,526,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,550,"  4.      OFF      OFF      OFF  ");
	setcolor(CYAN);
	outtextxy(180,576,"--------------------------------------");
	settextstyle(4,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(240,280,"Expression : Y = A . B ");
	
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4);
	outtextxy(100,710,"PRESS ENTER TO RETURN MENU ");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4.5);
	outtextxy(100,670,"PRESS Respective Numpad key to TEST outputs of GATE");
	setcolor(LIGHTRED);
	while(1)
	{
		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			// A Input 
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"1 ");
			outtextxy(620,130,"1.               ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 1 Output
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
		}
		if (GetAsyncKeyState(VK_NUMPAD2))
		{
			// A Input
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"0 ");
			outtextxy(620,130,"0.               ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
	
			// STATE 2 Output
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
		}
		if (GetAsyncKeyState(VK_NUMPAD3))
		{
			// A Input
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"1 ");
			outtextxy(620,130,"0.               ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 3 Output
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
		}
		if (GetAsyncKeyState(VK_NUMPAD4))
		{
			// A Input
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"0 ");
			outtextxy(620,130,"0.              ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
			
			// STATE 4 Output
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			break;
		}
	}
		
}

void orgate()
{
	//  GATE BORDERVV
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,60,900,250);	
	floodfill(80,60,YELLOW);
	
//	TRUTH TABLE BORDER
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,330,900,650);
	floodfill(80,330,YELLOW);
	
//	NAND GATE DESIGN 
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	
	ellipse(330,150,300,60,60,50);
	line(360,107,420,110);
	line(360,193,420,190);
	ellipse(420,150,0,90,80,40);
	ellipse(420,150,270,0,80,40);
	
	//connectorlines
	line(250,121,375,121);
	line(250,179,375,179);
	line(500,150,590,150);
	settextstyle(4,HORIZ_DIR,2);
	outtextxy(420,140,"OR");
	
	
	// A input setcolor(GREEN);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,120,10);
	floodfill(240,120,RED);
	
	// B input setcolour 
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,180,10);
	floodfill(240,180,RED);
	
	//Output 

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(600,150,10);
	floodfill(600,150,RED);

	settextstyle(4,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(240,280,"Expression : Y = A+B ");
	// TEXT BOX 
	setcolor(LIGHTRED);
	outtextxy(120,10,"LOGICAL OR GATE SIMULATOR");
	setcolor(LIGHTBLUE);
	outtextxy(180,100,"A");
	outtextxy(180,160,"B");
	outtextxy(620,130,"OUTPUT");
	setcolor(LIGHTBLUE);
	outtextxy(180,350,"KEY     A           B     OUTPUT ");
	setcolor(CYAN); 
	outtextxy(180,376,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,400,"  1.      ON        ON        ON   ");
	setcolor(CYAN);
	outtextxy(180,426,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,450,"  2.      ON        OFF      ON  ");
	setcolor(CYAN);
	outtextxy(180,476,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,500,"  3.      OFF      ON        ON  ");
	setcolor(CYAN);
	outtextxy(180,526,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,550,"  4.      OFF      OFF      OFF  ");
	setcolor(CYAN);
	outtextxy(180,576,"--------------------------------------");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4);
	outtextxy(100,710,"PRESS ENTER TO RETURN MENU ");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4.5);
	outtextxy(100,670,"PRESS Respective Numpad key to TEST outputs of GATE");
	setcolor(LIGHTRED);
	while(1)
	{

		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 1 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"1 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD2))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
	
			// STATE 2 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"0 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			setcolor(LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD3))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 3 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"1 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			setcolor(LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD4))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
			
			// STATE 4 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"0 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
			outtextxy(620,130,"0.               ");
			
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			break;
		}	
	}	
	setcolor(LIGHTGREEN);
	outtextxy(100,700,"press respective numpad key(1-4) to get the output");
}

void norgate()
{
	//  GATE BORDERVV
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,60,900,250);	
	floodfill(80,60,YELLOW);
	
    //	TRUTH TABLE BORDER
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,330,900,650);
	floodfill(80,330,YELLOW);
	
		//	NOR GATE DESIGN 
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
        
        setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	circle(500,152,12);
        floodfill(500,152,DARKGRAY);
	
	ellipse(330,150,300,60,60,50);
	line(360,107,420,110);
	line(360,193,420,190);
	ellipse(420,150,0,90,80,40);
	ellipse(420,150,270,0,80,40);
	
	//connectorlines
	line(250,121,375,121);
	line(250,179,375,179);
	line(500,150,590,150);
	settextstyle(4,HORIZ_DIR,2);
	outtextxy(420,140,"NOR");
	
	
	// A input setcolor(GREEN);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,120,10);
	floodfill(240,120,RED);
	
	// B input setcolour 
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,180,10);
	floodfill(240,180,RED);
	
	//Output 

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(600,150,10);
	floodfill(600,150,RED);

	settextstyle(4,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(240,280,"Expression : Y = (A+B)' ");
	// TEXT BOX 
	setcolor(LIGHTRED);
	outtextxy(120,10,"LOGICAL NOR GATE SIMULATOR");
	setcolor(LIGHTBLUE);
	outtextxy(180,100,"A");
	outtextxy(180,160,"B");
	outtextxy(620,130,"OUTPUT");
	setcolor(LIGHTBLUE);
	outtextxy(180,350,"KEY     A           B     OUTPUT ");
	setcolor(CYAN); 
	outtextxy(180,376,"--------------------------------------");
	setcolor(RED);
	outtextxy(180,400,"  1.      ON        ON        OFF   ");
	setcolor(CYAN);
	outtextxy(180,426,"--------------------------------------");
	setcolor(RED);
	outtextxy(180,450,"  2.      ON        OFF      OFF  ");
	setcolor(CYAN);
	outtextxy(180,476,"--------------------------------------");
	setcolor(RED);
	outtextxy(180,500,"  3.      OFF      ON        OFF  ");
	setcolor(CYAN);
	outtextxy(180,526,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,550,"  4.      OFF      OFF      ON  ");
	setcolor(CYAN);
	outtextxy(180,576,"--------------------------------------");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4);
	outtextxy(100,710,"PRESS ENTER TO RETURN MENU ");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4.5);
	outtextxy(100,670,"PRESS Respective Numpad key to TEST outputs of GATE");
	setcolor(LIGHTRED);
	while(1)
	{

		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 1 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"1 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD2))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
	
			// STATE 2 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"0 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
                        setcolor(RED);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD3))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 3 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"1 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
			setcolor(RED);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD4))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
			
			// STATE 4 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"0 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			outtextxy(620,130,"0.               ");
			
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			break;
		}	
	}	
}

void notgate()
{
//	setcolor(LIGHTBLUE);
//	setfillstyle(SOLID_FILL,LIGHTBLUE);
//	rectangle(50,30,1250,700);	
//	floodfill(60,25,LIGHTBLUE);
	int i=100;
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,70,900,250);	
	floodfill(80,70,YELLOW);
	setcolor(WHITE);
	settextstyle(4,HORIZ_DIR,4);
	outtextxy(300,280,"Expression : Y=A'");
	
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,340,900,650);
	floodfill(80,340,YELLOW);
	
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	line(300+i,100,300+i,200);
	line(300+i,100,350+i,150);
	line(300+i,200,350+i,150);
	floodfill(310+i,149,DARKGRAY);
	
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	circle(360+i,151,12);
	floodfill(360+i,151,DARKGRAY);
		
	line(300+i,150,230+i,150);  //input line
	line(372+i,150,450+i,150);  //output line

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(230+i,150,10);
	floodfill(230+i,150,RED);
	
	//Output 

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(450+i,150,10);
	floodfill(450+i,150,RED);
	settextstyle(4,HORIZ_DIR,4);
	
	// TEXT BOX 
	setcolor(LIGHTRED);
	outtextxy(120,10,"LOGICAL AND GATE SIMULATOR");
	setcolor(LIGHTBLUE);
	outtextxy(180,130,"A");
	outtextxy(620,130,"OUTPUT");
	
	setcolor(LIGHTBLUE);
	outtextxy(180, 400,"KEY     A           OUTPUT ");
	setcolor(CYAN); 
	outtextxy(180,426,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,450,"  1.      ON         OFF   ");
	setcolor(CYAN);
	outtextxy(180,476,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,500,"  2.      OFF        ON  ");
	setcolor(CYAN);
	outtextxy(180,526,"--------------------------------------");
	
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4);
	outtextxy(100,710,"PRESS ENTER TO RETURN MENU ");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4.5);
	outtextxy(100,670,"PRESS Respective Numpad key to TEST outputs of GATE");
	
	setcolor(LIGHTRED);
	while(1)
	{

		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			// A Input 
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(230+i,150,10);
			floodfill(230+i,150,LIGHTGREEN);
		
			// STATE 1 Output
			setcolor(LIGHTGREEN);
			outtextxy(180,130,"1 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(450+i,150,10);
			floodfill(450+i,150,RED); 
			outtextxy(620,130,"0                ");
		}
		
		if (GetAsyncKeyState(VK_NUMPAD2))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(230+i,150,10);
			floodfill(230+i,150,RED);
		
			// STATE Output
			setcolor(LIGHTRED);
			outtextxy(180,130,"0 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(450+i,150,10);
			floodfill(450+i,150,LIGHTGREEN);
			outtextxy(620,130,"1                ");
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			break;
		}
	}
}

void nandgate()
{
//	setcolor(LIGHTBLUE);
//	setfillstyle(SOLID_FILL,LIGHTBLUE);
//	rectangle(50,30,1250,700);	
//	floodfill(60,25,LIGHTBLUE);
	
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,60,900,250);	
	floodfill(80,60,YELLOW);
	
//	TRUTH TABLE BORDER
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,330,900,650);
	floodfill(80,330,YELLOW);
	
//	NAND GATE DESIGN 
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	rectangle(300,100,440,200);
	floodfill(301,101,DARKGRAY);
	
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	arc(440,150,270,90,50);
	floodfill(450,160,DARKGRAY);
	
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	circle(500,152,12);
	floodfill(500,152,DARKGRAY);
	
	setcolor(LIGHTGRAY);
	line(250,120,300,120);
	line(250,180,300,180);
	line(512,150,590,150);
	
	// A input setcolor(GREEN);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,120,10);
	floodfill(240,120,RED);
	
	// B input setcolour 
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,180,10);
	floodfill(240,180,RED);
	
	//Output 

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(600,150,10);
	floodfill(600,150,RED);

	settextstyle(4,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(240,280,"Expression : Y = (A . B)' ");
	// TEXT BOX 
	setcolor(LIGHTRED);
	outtextxy(120,10,"LOGICAL NAND GATE SIMULATOR");
	setcolor(LIGHTBLUE);
	outtextxy(180,100,"A");
	outtextxy(180,160,"B");
	outtextxy(620,130,"OUTPUT");
	setcolor(LIGHTBLUE);
	outtextxy(180,350,"KEY     A           B     OUTPUT ");
	setcolor(CYAN); 
	outtextxy(180,376,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,400,"  1.      ON        ON        OFF   ");
	setcolor(CYAN);
	outtextxy(180,426,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,450,"  2.      ON        OFF      ON  ");
	setcolor(CYAN);
	outtextxy(180,476,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,500,"  3.      OFF      ON        ON  ");
	setcolor(CYAN);
	outtextxy(180,526,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,550,"  4.      OFF      OFF      ON  ");
	setcolor(CYAN);
	outtextxy(180,576,"--------------------------------------");
	
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4);
	outtextxy(100,710,"PRESS ENTER TO RETURN MENU ");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4.5);
	outtextxy(100,670,"PRESS Respective Numpad key to TEST outputs of GATE");
	
	while(1)
	{

		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			// A Input 
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 1 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"1 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
				setcolor(LIGHTRED);
			outtextxy(620,130,"0.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD2))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
	
			// STATE 2 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"0 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
				setcolor(LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD3))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 3 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"1 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
				setcolor(LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD4))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
			
			// STATE 4 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"0 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			setcolor(LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			break;
		}
	}
//	setcolor(LIGHTGREEN);
//	outtextxy(100,700,"press respective numpad key(1-4) to get the output");
}
void xorgate()
{
// XOR GATE BORDERVV
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,60,900,250);	
	floodfill(80,60,YELLOW);
	
//	TRUTH TABLE BORDER
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,330,900,650);
	floodfill(80,330,YELLOW);
	
//	NAND GATE DESIGN 
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	ellipse(320,150,300,60,60,50);
	ellipse(330,150,300,60,60,50);
	line(360,107,420,110);
	line(360,193,420,190);
	ellipse(420,150,0,90,80,40);
	ellipse(420,150,270,0,80,40);
	//lines
	line(250,120,365,121);
	line(250,180,365,179);
	line(500,150,590,150);
	settextstyle(4,HORIZ_DIR,2);
	outtextxy(420,140,"XOR");
	
	
	// A input setcolor(GREEN);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,120,10);
	floodfill(240,120,RED);
	
	// B input setcolour 
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,180,10);
	floodfill(240,180,RED);
	
	//Output 

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(600,150,10);
	floodfill(600,150,RED);

	settextstyle(4,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(150,280,"Expression : Y = (AB'+A'B) or A ^ B ");
	// TEXT BOX 
	setcolor(LIGHTRED);
	outtextxy(120,10,"LOGICAL XOR GATE SIMULATOR");
	setcolor(LIGHTBLUE);
	outtextxy(180,100,"A");
	outtextxy(180,160,"B");
	outtextxy(620,130,"OUTPUT");
	setcolor(LIGHTBLUE);
	outtextxy(180,350,"KEY     A           B     OUTPUT ");
	setcolor(CYAN); 
	outtextxy(180,376,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,400,"  1.      ON        ON        OFF   ");
	setcolor(CYAN);
	outtextxy(180,426,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,450,"  2.      ON        OFF      ON  ");
	setcolor(CYAN);
	outtextxy(180,476,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,500,"  3.      OFF      ON        ON  ");
	setcolor(CYAN);
	outtextxy(180,526,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,550,"  4.      OFF      OFF      OFF  ");
	setcolor(CYAN);
	outtextxy(180,576,"--------------------------------------");
	
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4);
	outtextxy(100,710,"PRESS ENTER TO RETURN MENU ");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4.5);
	outtextxy(100,670,"PRESS Respective Numpad key to TEST outputs of GATE");
	
	setcolor(LIGHTRED);
	while(1)
	{

		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 1 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"1 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
			setcolor(RED);
			outtextxy(620,130,"0.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD2))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
	
			// STATE 2 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"0 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD3))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 3 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"1 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD4))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
			
			// STATE 4 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"0 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
			setcolor(RED);
			outtextxy(620,130,"0.               ");	
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			break;
		}		
//		setcolor(LIGHTGREEN);
//		outtextxy(100,700,"press respective numpad key(1-4) to get the output");		
	}
	
}
void xnorgate()
{
//  GATE BORDERVV
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,60,900,250);	
	floodfill(80,60,YELLOW);
	
//	TRUTH TABLE BORDER
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	rectangle(80,330,900,650);
	floodfill(80,330,YELLOW);
	
//	XNOR GATE DESIGN 
	setcolor(DARKGRAY);
	setfillstyle(SOLID_FILL,DARKGRAY);
	ellipse(320,150,300,60,60,50);
	ellipse(330,150,300,60,60,50);
	line(360,107,420,110);
	line(360,193,420,190);
	ellipse(420,150,0,90,80,40);
	ellipse(420,150,270,0,80,40);
	circle(513,150,15);
	//connectorlines
	line(250,120,365,121);
	line(250,180,365,179);
	line(526,150,590,150);
	settextstyle(3,HORIZ_DIR,2);	
	outtextxy(420,140,"XNOR");
	
	
	// A input setcolor(GREEN);
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,120,10);
	floodfill(240,120,RED);
	
	// B input setcolour 
	
	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(240,180,10);
	floodfill(240,180,RED);
	
	//Output 

	setcolor(RED);
	setfillstyle(SOLID_FILL,RED);
	circle(600,150,10);
	floodfill(600,150,RED);

	settextstyle(4,HORIZ_DIR,4);
	setcolor(WHITE);
	outtextxy(150,280,"Expression : Y = (AB'+A'B)' or (A ^ B)' ");
	// TEXT BOX 
	setcolor(LIGHTRED);
	outtextxy(120,10,"LOGICAL XNOR GATE SIMULATOR");
	setcolor(LIGHTBLUE);
	outtextxy(180,100,"A");
	outtextxy(180,160,"B");
	outtextxy(620,130,"OUTPUT");
	setcolor(LIGHTBLUE);
	outtextxy(180,350,"KEY     A           B     OUTPUT ");
	setcolor(CYAN); 
	outtextxy(180,376,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,400,"  1.      ON        ON        ON   ");
	setcolor(CYAN);
	outtextxy(180,426,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,450,"  2.      ON        OFF      OFF  ");
	setcolor(CYAN);
	outtextxy(180,476,"--------------------------------------");
	setcolor(LIGHTRED);
	outtextxy(180,500,"  3.      OFF      ON        OFF  ");
	setcolor(CYAN);
	outtextxy(180,526,"--------------------------------------");
	setcolor(LIGHTGREEN);
	outtextxy(180,550,"  4.      OFF      OFF      ON  ");
	setcolor(CYAN);
	outtextxy(180,576,"--------------------------------------");
	setcolor(LIGHTRED);
	
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4);
	outtextxy(100,710,"PRESS ENTER TO RETURN MENU ");
	setcolor(WHITE);
	settextstyle(6,HORIZ_DIR,4.5);
	outtextxy(100,670,"PRESS Respective Numpad key to TEST outputs of GATE");
	
	while(1)
	{

		if (GetAsyncKeyState(VK_NUMPAD1))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 1 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"1 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			outtextxy(620,130,"1.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD2))
		{
			// A Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,120,10);
			floodfill(240,120,LIGHTGREEN);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
	
			// STATE 2 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"1 ");
			outtextxy(180,160,"0 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
			setcolor(RED);
			outtextxy(620,130,"0.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD3))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(240,180,10);
			floodfill(240,180,LIGHTGREEN);
			
			// STATE 3 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"1 ");
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(600,150,10);
			floodfill(600,150,RED);
			setcolor(RED);
			outtextxy(620,130,"0.               ");
		}
		if (GetAsyncKeyState(VK_NUMPAD4))
		{
			// A Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,120,10);
			floodfill(240,120,RED);
			
			// B Input
			setcolor(RED);
			setfillstyle(SOLID_FILL,RED);
			circle(240,180,10);
			floodfill(240,180,RED);
			
			// STATE 4 Output
			setcolor(LIGHTBLUE);
			outtextxy(180,100,"0 ");
			outtextxy(180,160,"0 ");
			setcolor(LIGHTGREEN);
			setfillstyle(SOLID_FILL,LIGHTGREEN);
			circle(600,150,10);
			floodfill(600,150,LIGHTGREEN);
			outtextxy(620,130,"1.               ");
			
		}
		if(GetAsyncKeyState(VK_RETURN))
		{
			break;
		}
		
	}	
}

int main ()
{
	initwindow(1300,770,"LOGICAL AND GATE ");
	startpage();
	while(1)
	{
		// RETURN TO MENU
		if(GetAsyncKeyState(VK_RETURN))
		{
			cleardevice();
			menupage();
			delay(100);
		}	
		// AND GATE 	
		if(GetAsyncKeyState(VK_F1))
		{
			cleardevice();
			andgate();
		}
		
		// OR GATE 
		if(GetAsyncKeyState(VK_F2))
		{
			cleardevice();
			orgate();
		}

		// NOTGATE 
		if(GetAsyncKeyState(VK_F3))
		{
			cleardevice();
			notgate();	
		}
		// NANDGATE 
		if(GetAsyncKeyState(VK_F4))
		{
			cleardevice();
			nandgate();	
		}
		
		// NOR GATE 
		if(GetAsyncKeyState(VK_F5))
		{
			cleardevice();
			norgate();
		}
		// XORGATE 
		if(GetAsyncKeyState(VK_F6))
		{
			cleardevice();
			xorgate();	
		}
		// XNORGATE
		if(GetAsyncKeyState(VK_F7))
		{
			cleardevice();
			xnorgate();	
		}
		// END THE PROGRAM 
		if(GetAsyncKeyState(VK_ESCAPE))
		{
			cleardevice();
			break;
		}
	}
	getch();
	closegraph();
	return 0 ;
}