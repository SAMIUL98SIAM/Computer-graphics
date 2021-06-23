#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>

using namespace std;
//float _run = 0.0;
float spdPlaneX = 0.0;
//float _run2 = 0.0;
float _run3 = 0.0;
float _rain = 0.0;
float _nt = 0.0;
float spdShip = 0.0;

float spdPlaneY= 0.0 ;

char text1[] = "Army";
char text2[] = "Camp";


bool onOff;
bool frd = false;
bool bck = false;

bool rainday = false;
bool night = false;

void update(int value)
{
/*  _run += 1.0f;
	if (_run > 1000)
    {
        _run -= 1700;
    } */

    spdPlaneX += 2.0f;
	if (spdPlaneX > 1000)
    {
        spdPlaneX -= 1700;
    }

   // _run2 += 3.5f;
/*	if (_run2 > 1000)
    {
        _run2 -= 1300;
    } */

     _run3 -= 2.5f;
	if (_run3 > 900)
    {
        _run3 -= 2300;
    }
    spdShip-= 1.5f;
    if(onOff){
	spdShip+= 2.5f;
	if (spdShip> 1000){
		spdShip = 0;
	}
	else if(spdShip<0)
    {
        spdShip = 1000;
    }
	 }

	glutPostRedisplay(); //Tell GLUT that the display has changed
	glutTimerFunc(25, update, 0);
}

void Sprint( float x, float y, char *st)
{
    int l,i;


    l=strlen( st ); // see how many characters are in text string.
    glColor3f(0.0,0.0,0.0);
    //glDisable(GL_LIGHTING);
    glRasterPos2f( x, y); // location to start printing text
    for( i=0; i < l; i++) // loop until i is greater then l
    {
       glutBitmapCharacter(GLUT_BITMAP_HELVETICA_12, st[i]);

    }
}

void init() {
   glClearColor(0.45,0.65,0.9,1.0);
	glColor3f(0.0,0.0,0.3);
	glPointSize(4.0);
	glLineWidth(3);
	gluOrtho2D(0.0,1000.0,0.0,1000.0);
}

void handleMouse(int button, int state, int x, int y) {
	/*if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;

		}
	} */

	glutPostRedisplay();
}

void Rain(int value){

if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1000; y%=1000;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}

void Night(int value){

if(night){

   /* glBegin(GL_QUADS);
	glColor3f(0.10, 0.10, 0.10);
	glVertex2i(0,1000);
	glVertex2i(1000,1000);
	glVertex2i(1000,0);
	glVertex2i(0,0);
	glEnd();*/

    glClearColor(0.0,0.0,0.0,0.0);
	glutPostRedisplay();
    glutTimerFunc(5, Night, 0);
    glFlush();

}
}
void shipForward(int value){
    if(frd){

    spdShip += 2.2f;

    if (spdShip> 1000) {
		spdShip -= 1700;
	}

	glutPostRedisplay();
	glutTimerFunc(25, shipForward, 0);
}



}

void shipBackward(int value){
    if(bck){

    spdShip -= 2.2f;

     if (spdShip < -710) {
		spdShip = 1100;
	}
	glutPostRedisplay();
	glutTimerFunc(25, shipBackward, 0);
}
}


void myKeyboard(unsigned char key, int x, int y)
{

	switch (key)
	{
	case 'a':
        frd = false;
	    bck = true;
	    shipBackward(spdShip);
	break;

	case 'd':
	     frd = true;
	     bck = false;
         shipForward(spdShip);
	    break;

    case 's':
        frd = false;
        bck = false;
        break;

    case 'r':
        rainday = true;
        Rain(_rain);

        //sndPlaySound("River.wav",SND_MEMORY|SND_ASYNC);
        break;

    case 'e':
        rainday = false;

        break;

    case 'n':
        night = true;
        Night(_nt);
        break;

    case 'b':
        night = false;
        glClearColor(0.45,0.65,0.9,1.0);
        break;

    case 27:     // ESC key
        exit(0);
        break;

	default:
	break;
	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);

    //mountains
    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2i(0,520);
    glVertex2i(180,520);
    glVertex2i(80,660);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2i(80,520);
    glVertex2i(400,520);
    glVertex2i(290,670);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2i(270,520);
    glVertex2i(520,520);
    glVertex2i(420,610);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2i(370,520);
    glVertex2i(770,520);
    glVertex2i(640,690);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2i(490,520);
    glVertex2i(890,520);
    glVertex2i(780,635);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(139,69,19);
    glVertex2i(770,520);
    glVertex2i(1075,520);
    glVertex2i(900,655);
    glEnd();


    //snow
    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(68,600);
    glVertex2i(86,580);
    glVertex2i(80,660);
    glVertex2i(34,580);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(108,600);
    glVertex2i(138,580);
    glVertex2i(80,660);
    glVertex2i(86,580);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(225,600);
    glVertex2i(255,580);
    glVertex2i(290,670);
    glVertex2i(164,580);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(310,600);
    glVertex2i(357,580);
    glVertex2i(290,670);
    glVertex2i(255,580);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(395,585);
    glVertex2i(417,572);
    glVertex2i(420,610);
    glVertex2i(358,574);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(432,585);
    glVertex2i(459,574);
    glVertex2i(420,610);
    glVertex2i(417,572);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(585,618);
    glVertex2i(605,580);
    glVertex2i(640,690);
    glVertex2i(455,574);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(625,618);
    glVertex2i(706,605);
    glVertex2i(640,690);
    glVertex2i(605,580);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(748,612);
    glVertex2i(765,605);
    glVertex2i(780,635);
    glVertex2i(705,605);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(788,612);
    glVertex2i(823,590);
    glVertex2i(780,635);
    glVertex2i(765,605);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(880,612);
    glVertex2i(910,590);
    glVertex2i(900,655);
    glVertex2i(837,590);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(255,255,255);
    glVertex2i(940,612);
    glVertex2i(987,590);
    glVertex2i(900,655);
    glVertex2i(910,590);
    glEnd();
    //sun
    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(95, 900, 0);


    glPushMatrix();
    glBegin(GL_POLYGON);
    if(night)
    {
        glColor3ub(204, 204, 204);
    }else
    {
     glColor3f(1,0.7,0);
    }

	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=65;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
   glPopMatrix();

   glPopMatrix();

    //river
    glBegin(GL_POLYGON);
    glColor3ub(0,0,128);
    glVertex2i(0,520);
    glVertex2i(0,480);
    glVertex2i(1000,480);
    glVertex2i(1000,520);
    glEnd();

    //land
    glBegin(GL_QUADS);
    if(night){
    glColor3ub(37, 89, 24);
    }
    else
    {
        glColor3ub(0,195,0);
    }
    glVertex2i(0,480);
    glVertex2i(0,0);
    glVertex2i(1000,0);
    glVertex2i(1000,480);
    glEnd();

    //tent1
    glBegin(GL_QUADS);
    glColor3ub(75,83,32);
    glVertex2i(150,460);
    glVertex2i(130,380);
    glVertex2i(240,380);
    glVertex2i(260,460);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(240,380);
    glVertex2i(260,460);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(280,380);
    glVertex2i(260,460);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(260,460);
    glVertex2i(240,380);
    glVertex2i(250,380);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(260,460);
    glVertex2i(250,380);
    glVertex2i(270,380);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(260,460);
    glVertex2i(270,380);
    glVertex2i(280,380);
    glEnd();


    //tent2
    glBegin(GL_QUADS);
    glColor3ub(75,83,32);
    glVertex2i(110,340);
    glVertex2i(80,240);
    glVertex2i(210,240);
    glVertex2i(230,340);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(200,240);
    glVertex2i(230,340);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(230,340);
    glVertex2i(260,240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(230,340);
    glVertex2i(210,240);
    glVertex2i(220,240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(230,340);
    glVertex2i(220,240);
    glVertex2i(240,240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(230,340);
    glVertex2i(240,240);
    glVertex2i(260,240);
    glEnd();

    //tent3
    glBegin(GL_QUADS);
    glColor3ub(75,83,32);
    glVertex2i(60,200);
    glVertex2i(20,80);
    glVertex2i(170,80);
    glVertex2i(200,200);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(200,200);
    glVertex2i(155,80);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(200,200);
    glVertex2i(245,80);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(200,200);
    glVertex2i(170,80);
    glVertex2i(185,80);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(200,200);
    glVertex2i(185,80);
    glVertex2i(215,80);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(200,200);
    glVertex2i(215,80);
    glVertex2i(245,80);
    glEnd();

    //tent4

    glBegin(GL_QUADS);
    glColor3ub(75,83,32);
    glVertex2i(410,460);
    glVertex2i(430,380);
    glVertex2i(540,380);
    glVertex2i(520,460);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(390,380);
    glVertex2i(410,460);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(430,380);
    glVertex2i(410,460);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(410,460);
    glVertex2i(390,380);
    glVertex2i(400,380);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(410,460);
    glVertex2i(400,380);
    glVertex2i(420,380);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(410,460);
    glVertex2i(420,380);
    glVertex2i(430,380);
    glEnd();


    //tent5

    glBegin(GL_QUADS);
    glColor3ub(75,83,32);
    glVertex2i(430,340);
    glVertex2i(460,240);
    glVertex2i(590,240);
    glVertex2i(560,340);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(400,240);
    glVertex2i(430,340);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(430,340);
    glVertex2i(460,240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(430,340);
    glVertex2i(400,240);
    glVertex2i(420,240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(430,340);
    glVertex2i(420,240);
    glVertex2i(440,240);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(430,340);
    glVertex2i(440,240);
    glVertex2i(460,240);
    glEnd();


    //tent6

    glBegin(GL_QUADS);
    glColor3ub(75,83,32);
    glVertex2i(450,200);
    glVertex2i(495,80);
    glVertex2i(645,80);
    glVertex2i(600,200);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(450,200);
    glVertex2i(405,80);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(0,0,0);
    glVertex2i(450,200);
    glVertex2i(495,80);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(450,200);
    glVertex2i(405,80);
    glVertex2i(435,80);
    glEnd();

    glBegin(GL_TRIANGLES);
    glColor3ub(0,0,0);
    glVertex2i(450,200);
    glVertex2i(435,80);
    glVertex2i(465,80);
    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3ub(75,83,32);
    glVertex2i(450,200);
    glVertex2i(465,80);
    glVertex2i(495,80);
    glEnd();

    //firewood1
    glBegin(GL_POLYGON);
    glColor3ub(82, 47, 17);
    glVertex2i(330,310);
    glVertex2i(326,307);
    glVertex2i(326,207);
    glVertex2i(330,204);
    glVertex2i(334,207);
    glVertex2i(334,307);
    glEnd();

    //firewood2
    glBegin(GL_POLYGON);
    glColor3ub(82, 47, 17);
    glVertex2i(280,263);
    glVertex2i(275,257);
    glVertex2i(280,254);
    glVertex2i(380,254);
    glVertex2i(385,257);
    glVertex2i(380,263);
    glEnd();

    //firewood3
    glBegin(GL_POLYGON);
    glColor3ub(82, 47, 17);
    glVertex2i(295,300);
    glVertex2i(290,294);
    glVertex2i(365,214);
    glVertex2i(372,211);
    glVertex2i(377,213);
    glVertex2i(299,294);
    glEnd();

    //firewood4
    glBegin(GL_POLYGON);
    glColor3ub(82, 47, 17);
    glVertex2i(371,299);
    glVertex2i(285,218);
    glVertex2i(280,211);
    glVertex2i(287,209);
    glVertex2i(377,291);
    glVertex2i(380,304);
    glEnd();


    //shooting stand1
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(891,349);
    glVertex2i(845,268);
    glVertex2i(840,261);
    glVertex2i(847,259);
    glVertex2i(897,341);
    glVertex2i(900,354);
    glEnd();

    //shooting stand2
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0);
    glVertex2i(900,354);
    glVertex2i(891,349);
    glVertex2i(928,259);
    glVertex2i(933,254);
    glVertex2i(935,259);
    glVertex2i(890,349);
    glEnd();

    //target
    glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(890, 354, 0);


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,1,1);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=45;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
   glPopMatrix();

    glPushMatrix();
     glTranslatef(890, 354, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=5;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
     glTranslatef(890, 354, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=16;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
     glTranslatef(890, 354, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=25;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
     glTranslatef(890, 354, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=36;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    //ship
    glPushMatrix();
    glTranslatef(spdShip,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(0,128,0);
    glVertex2i(500,515);
    glVertex2i(500,505);
    glVertex2i(540,490);
    glVertex2i(680,490);
    glVertex2i(680,515);
    glVertex2i(540,515);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,128,0);
    glVertex2i(580,535);
    glVertex2i(580,490);
    glVertex2i(680,490);
    glVertex2i(680,535);
    glEnd();

    glBegin(GL_QUADS);
    glColor3ub(0,128,0);
    glVertex2i(600,555);
    glVertex2i(600,490);
    glVertex2i(680,490);
    glVertex2i(680,555);
    glEnd();



     glPushMatrix();
   // glScalef(0.5, 0.5, 0.5);
    glTranslatef(640, 535, 0);


    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(1,0,0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=15;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
   glEnd();
   glPopMatrix();
   glPopMatrix();
   glPopMatrix();

   //cloud

    glPushMatrix();
    glTranslatef(_run3, 0.0, 0.0);
    //glTranslatef(_run3, 0.0, 0.0);

    glPushMatrix();
    glTranslatef(200, 720, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(180, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(250, 720, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(230, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

//cloud 2
    glPushMatrix();
    glTranslatef(350, 70, 0);
    glPushMatrix();
    glTranslatef(200, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(180, 620, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(250, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(230, 620, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(290, 630, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

   // glPopMatrix();


    //cloud 3
        glPushMatrix();
    glTranslatef(750, 70, 0);
    glPushMatrix();
    glTranslatef(200, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(180, 620, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(250, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(230, 620, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=50;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(300, 670, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

     glPushMatrix();
    glTranslatef(290, 630, 0);

    glBegin(GL_POLYGON);
    glColor3f(1.0, 1.0, 1.0);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=40;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();

    glPopMatrix();

//end of cloud

    //flag

glPushMatrix();
    glTranslatef(0, 40, 0);

    glColor3ub(156, 143, 6);    //STAIR
    glBegin(GL_QUADS);
    glVertex2i(665, 110);
    glVertex2i(665, 120);
	glVertex2i(690, 120);
	glVertex2i(690, 110);
	glEnd();

    glColor3ub(104, 138, 143);    //STAND
    glBegin(GL_QUADS);
    glVertex2i(670, 120);
    glVertex2i(670, 345);
	glVertex2i(685, 345);
	glVertex2i(685, 120);
	glEnd();

	glColor3ub(180, 180, 180);    //QUAD
    glBegin(GL_QUADS);
    glVertex2i(685, 260);
    glVertex2i(685, 345);
	glVertex2i(750, 345);
	glVertex2i(750, 260);
	glEnd();

	glPushMatrix();
    glTranslatef(684, 256, 0);
    Sprint(20.0,58.0,text1);
    glPopMatrix();

    glPushMatrix();
    glTranslatef(684, 256, 0);
    Sprint(17.0,32.0,text2);
    glPopMatrix();

   glPopMatrix();

   glPopMatrix();

   //plane
    glPushMatrix();
    glTranslatef(spdPlaneX,0.0,0.0);
    glBegin(GL_POLYGON);
    glColor3ub(145, 146, 148);
    glVertex2i(560, 900);
    glVertex2i(520, 930);
	glVertex2i(460, 930);
	glVertex2i(480, 920);
	glVertex2i(470, 910);
	glVertex2i(480, 900);
	glVertex2i(470, 890);
	glVertex2i(480, 880);
	glVertex2i(460, 870);
	glVertex2i(520, 870);
    glEnd();

    //plane window

    glBegin(GL_POLYGON);
    glColor3ub(81, 119, 196);
    glVertex2i(520, 930);
    glVertex2i(535, 900);
    glVertex2i(560, 900);
    glEnd();

    glPopMatrix();

/*glPushMatrix();
glTranslatef(position,0.0f, 0.0f);
   glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(-0.2f, -0.2f);
      glVertex2f( 0.2f, -0.2f);
      glVertex2f( 0.2f,  0.2f);
      glVertex2f(-0.2f,  0.2f);
   glEnd();
   glBegin(GL_TRIANGLES);
   glColor3f(0.0f, 0.0f, 1.0f);
   glVertex2f(0.2f,-0.2f);
   glVertex2f(0.5f, 0.0f);
   glVertex2f(0.2f, 0.2f);
   glEnd();

glPopMatrix();*/

   glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(1200, 600);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Army Camp");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(myKeyboard);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
