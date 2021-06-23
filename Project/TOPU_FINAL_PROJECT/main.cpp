#include <iostream>

#include <stdlib.h>

#include <math.h>

#include <GL/gl.h>

#include <GL/glut.h>

#include <cstring>



void initRendering() {

	glEnable(GL_DEPTH_TEST);

}



//Called when the window is resized

void handleResize(int w, int h) {

	glViewport(0, 0, w, h);

	glMatrixMode(GL_PROJECTION);

	glLoadIdentity();

	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);

}



float _angle = 0.0;

float _cameraAngle = 0.0;

float _ang_tri = 0.0;



float _sec = 0.0;

float _min = 0.0;

float _hour = 0.0;

float _fan = 0.0;

float cloud = 0.0;

float t = 0.0;

float t_stop = t;

float bp = 0.0;

float q = 0.0;

float fi = 0.0;

int b = 0;

int n = 0;

int c = 0;

float _angle_stop = _angle;

float _angle_opposite = 0.0;

float traffic = 0;

float traffic_stop = traffic;

float Sun_down = 2.3;

float trn = 0;

float Sun_rise = 0;

float Moon_rise = 4.3;

float Moon_down = 2.3;

float fullscr = 0;

float raining = 2.6;

float ron = 0;

float raining2 = 2.6;





void keyboardown(int key, int x, int y)

{

	switch (key){



	case GLUT_KEY_UP:

		n = 1;



		break;



	case GLUT_KEY_DOWN:

        n= 2;

		break;



    case GLUT_KEY_F1:

        b = 7;

		break;

    case GLUT_KEY_F2:

        b = 8;

		break;







     case GLUT_KEY_F10:

        fullscr = 1;

        break;



    case GLUT_KEY_F9:

        exit(0);

        break;



        case GLUT_KEY_F11:

		c = 1;



		break;



	case GLUT_KEY_F12:

        c= 2;

		break;





	default:

		break;





	}



}

















void drawScene() {

	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);



//	glColor3f(1.0, 0.0, 0.0);



	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective

	glLoadIdentity(); //Reset the drawing perspective

	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera

	glTranslatef(0.0, 0.0, -7.0); //Move forward 5 units









///=========================mati=======================================///









      glPushMatrix();

      glTranslatef(0,-.9,0);

       glBegin(GL_POLYGON);///mati

   glColor3ub	(210,105,30);



    glVertex3f(-7,0,0);

    glVertex3f(-7,.2,0);

    glVertex3f(7,.2,0);

    glVertex3f(7,0,0);



    glEnd();

glPopMatrix();



///--------------------------------------///
















///car1

///down

///+++++++++++++



glPushMatrix();

glTranslatef(0,1.0,0);

///glTranslatef(-t,0,0);

glScalef(.7,.7,1);



///key

if ( c == 0){

        glTranslatef(-t,0,0);

    }

    if( c == 1){

       glTranslatef(-t,0,0);

        t_stop = t;

    }

    if(c == 2){

        glTranslatef(-t_stop,0,0);

        t = t_stop;



    }





///pp1

    glPushMatrix();



	glTranslatef(.5, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(0,0,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.15;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();



///pp2

glPushMatrix();

	glTranslatef(1.1, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(0,0,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.15;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();





///border

    glPushMatrix();

	glTranslatef(.5, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(255,255,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.17;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();



glPushMatrix();

	glTranslatef(1.1, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(255,255,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.17;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();

    ///border end







    glPushMatrix();

    glTranslatef(0,-2,0);

	glBegin(GL_POLYGON);

//glColor3f(1.0, 1.0, 1.0);//(R,G,B)

glColor3ub(255,0,0);

glVertex3f(0.1,0, 0.0);

glVertex3f(1.52, 0, 0.0);

glVertex3f(1.52, .3, 0.0);

glVertex3f(0.1, .3, 0.0);



glEnd();

glPopMatrix();









glPushMatrix();

    glTranslatef(.35,-2.2,0);

	glBegin(GL_POLYGON);

	glColor3ub(255,255,255);

///glColor3f(1.0, 1.0, 1.0);//(R,G,B)

glVertex3f(0,.5,0);

glVertex3f(.9, .5, 0.0);

glVertex3f(.7, .75, 0.0);

glVertex3f(.2, .75, 0.0);



glEnd();

glPopMatrix();



glPopMatrix();///car 1 end pop

///-------------

///car1 end















///+++++++++++++++++++++

///signal

///signal

 glPushMatrix();

 glTranslatef(1.1,0.4,0);

 glScalef(.2,.15,1);

    ///glRotatef(-70,00,.5,0);

    glPushMatrix();

	glTranslatef(.5, 0, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(255,0,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.4;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();





glPushMatrix();

	glTranslatef(.5, 1, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(0,255,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.4;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();

glPushMatrix();

	glTranslatef(.5, 2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(255,255,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.4;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();





    glPushMatrix();

    glTranslatef(0,-.5,0);

	glBegin(GL_POLYGON);

///glColor3f(1.0, 1.0, 1.0);//(R,G,B)

glColor3ub(160, 110, 78);



glVertex3f(0,0, 0.0);

glVertex3f(1, 0, 0.0);

glVertex3f(1, 3, 0.0);

glVertex3f(0, 3, 0.0);



glEnd();



    glPushMatrix();///// --- Khamba



    glTranslatef(0,-4.0,0);

    glBegin(GL_POLYGON);

    glColor3ub(100, 100,100);

    glVertex3f(.25,0, 0.0);

    glVertex3f(.75, 0, 0.0);

    glVertex3f(.75, 5, 0.0);

    glVertex3f(.25, 5, 0.0);





    glEnd();



    glPopMatrix();/////////-------- Stand ground -----------



    glPushMatrix();///// --- Khamba



    glTranslatef(0,-4.0,0);

    glBegin(GL_POLYGON);

    glColor3ub(100, 100,100);

    glVertex3f(0,0, 0.0);

    glVertex3f(1, 0, 0.0);

    glVertex3f(1, 1, 0.0);

    glVertex3f(0, 1, 0.0);





    glEnd();



    glPopMatrix();/////////-------- Stand ground pop-----------





glPopMatrix();





glPopMatrix();

///signal end





















///+++++++++++++

///car2

glPushMatrix();



glTranslatef(-1.3,1.4,0);

glTranslatef(t,0,0);

glScalef(.7,.7,1);



///pp1

    glPushMatrix();

	glTranslatef(.5, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(0,0,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.15;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();



///pp2

glPushMatrix();

	glTranslatef(1.1, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(0,0,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.15;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();





///border

    glPushMatrix();

	glTranslatef(.5, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(255,255,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.17;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();



glPushMatrix();

	glTranslatef(1.1, -2, 0); //Move to the center of the triangle

///	glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)



	glBegin(GL_POLYGON);

	glColor3ub(255,255,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=.17;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();

    ///border end







    glPushMatrix();

    glTranslatef(0,-2,0);

	glBegin(GL_POLYGON);

//glColor3f(1.0, 1.0, 1.0);//(R,G,B)

glColor3ub(255,0,0);

glVertex3f(0.1,0, 0.0);

glVertex3f(1.52, 0, 0.0);

glVertex3f(1.52, .3, 0.0);

glVertex3f(0.1, .3, 0.0);



glEnd();

glPopMatrix();



glPushMatrix();

    glTranslatef(.35,-2.2,0);

	glBegin(GL_POLYGON);

	glColor3ub(255,255,255);

///glColor3f(1.0, 1.0, 1.0);//(R,G,B)

glVertex3f(.5,.5,0);

glVertex3f(1, .5, 0.0);

glVertex3f(.7, .75, 0.0);

glVertex3f(.5, .75, 0.0);



glEnd();

glPopMatrix();

glPopMatrix();///car 2 end pop

///car 2 end






///school

glPushMatrix();

glTranslatef(1,.11,0);

glScalef(.8,.7,1);



glColor3ub(0,0,0);

glBegin(GL_LINES);



//glVertex3f(4.6,0.2,0);

glVertex3f(4.22,1.7,0);

glVertex3f(3.0,1.7,0);

//glVertex3f(3.0,0.2,0);



glEnd();



glColor3ub(230,230,250);

glBegin(GL_QUADS);



glVertex3f(3.9,1.6,0);

glVertex3f(3.7,1.6,0);

glVertex3f(3.7,0.8,0);

glVertex3f(3.9,0.8,0);



glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(3.3,1.5,0);

glVertex3f(3.1,1.5,0);

glVertex3f(3.1,1.3,0);

glVertex3f(3.3,1.3,0);





glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(3.6,1.5,0);

glVertex3f(3.4,1.5,0);

glVertex3f(3.4,1.3,0);

glVertex3f(3.6,1.3,0);





glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(4.5,1.5,0);

glVertex3f(4.3,1.5,0);

glVertex3f(4.3,1.3,0);

glVertex3f(4.5,1.3,0);





glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(4.2,1.5,0);

glVertex3f(4.0,1.5,0);

glVertex3f(4.0,1.3,0);

glVertex3f(4.2,1.3,0);





glEnd();



glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(3.3,1.2,0);

glVertex3f(3.1,1.2,0);

glVertex3f(3.1,1.0,0);

glVertex3f(3.3,1.0,0);





glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(3.6,1.2,0);

glVertex3f(3.4,1.2,0);

glVertex3f(3.4,1.0,0);

glVertex3f(3.6,1.0,0);





glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(4.5,1.2,0);

glVertex3f(4.3,1.2,0);

glVertex3f(4.3,1.0,0);

glVertex3f(4.5,1.0,0);





glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(4.2,1.2,0);

glVertex3f(4,1.2,0);

glVertex3f(4,1.0,0);

glVertex3f(4.2,1.0,0);





glEnd();





glColor3ub(70,30,80);

glBegin(GL_QUADS);

glVertex3f(4,0.6,0);

glVertex3f(3.6,0.6,0);

glVertex3f(3.6,0.2,0);

glVertex3f(4,0.2,0);





glEnd();











glColor3ub(178,34,34);

glBegin(GL_QUADS);

glVertex3f(4.6,0.2,0);

glVertex3f(4.6,1.7,0);

glVertex3f(3.0,1.7,0);

glVertex3f(3.0,0.2,0);





glEnd();





glColor3ub(139,0,0);

glBegin(GL_QUADS);

glVertex3f(4.7,1.5,0);

glVertex3f(4.6,1.7,0);

glVertex3f(4.6,0.2,0);

glVertex3f(4.7,0.2,0);





glEnd();





glColor3ub(178,34,34);

glBegin(GL_POLYGON);

glVertex3f(4.2,1.7,0);

glVertex3f(4.2,2.0,0);

glVertex3f(3.8,2.2,0);

glVertex3f(3.4,2.0,0);

glVertex3f(3.4,1.7,0);

glVertex3f(4.2,1.7,0);





glEnd();





glColor3ub(139,0,0);

glBegin(GL_QUADS);

glVertex3f(4.3,1.7,0);

glVertex3f(4.3,1.9,0);

glVertex3f(4.2,2.0,0);

glVertex3f(4.2,1.7,0);





glEnd();





///flag

glColor3ub(105,105,105);

glBegin(GL_LINES);

glVertex3f(3.8,2.2,0);

glVertex3f(3.8,2.7,0);



glEnd();

glColor3ub(50,205,50);

glBegin(GL_QUADS);

glVertex3f(4.1,2.6,0);

glVertex3f(3.81,2.6,0);

glVertex3f(3.81,2.4,0);

glVertex3f(4.1,2.4,0);



glEnd();







glTranslatef(4.0,2.5,0);

    //glScalef(2.0,0.6,0);

    glColor3ub(255,0,0);

	glBegin(GL_POLYGON );



	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.07;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

glEnd();



glColor3ub(105,105,105);

glBegin(GL_QUADS);

glVertex3f(4.0,2.6,0);

glVertex3f(3.79,2.6,0);

glVertex3f(3.79,2.4,0);

glVertex3f(4,2.4,0);



glEnd();















glPopMatrix();

///school end







///hospital by sajid

    //glPushMatrix();

     //glTranslatef(-6,0,0);

    glPushMatrix();

    glScalef(.5,.7,1);

   glTranslatef(-8,1.56,0);  //(3,2.2,0)

   //glScalef(1.2,1.7,1);



     glPushMatrix();

   glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.4,-1,0);

    glVertex3f(.4,-.5,0);

    glVertex3f(.1,-.5,0);

    glEnd();

      glPopMatrix();



    glPushMatrix();

    glBegin(GL_POLYGON);

      glColor3ub(255,255,255);

    glVertex3f(1,-1.2,0);

   // glVertex3f(.25,-1.5,0);

    glVertex3f(-.5,-1.2,0);

    glVertex3f(0,-1,0);

    glVertex3f(.5,-1,0);



    glEnd();

    glPopMatrix();







      glPushMatrix();

	glTranslatef(1.56, 0.05, 1.0);///+done

     glBegin(GL_POLYGON);

      glColor3ub(255,0,0);

    glVertex3f(-.20,-.6,0);

    glVertex3f(-.22,-.6,0);

    glVertex3f(-.22,-.4,0);

    glVertex3f(-.20,-.4,0);

    glEnd();

    glPopMatrix();



     glPushMatrix();  //done=========

	glTranslatef(1.95, -.12, 1.0);

	glRotatef(-60,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();///baki



      glPushMatrix();  //done=========

	glTranslatef(1.95, .2, 1.0);

	glRotatef(-60,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



      glPushMatrix();  //done=========

	glTranslatef(1.8, -.07, 1.0);

	glRotatef(-60,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



      glPushMatrix();  //done=========

	glTranslatef(1.8, .25, 1.0);

	glRotatef(-60,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



     glPushMatrix();  //done=========

	glTranslatef(2.2, .30, 1.0);

	glRotatef(-35,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



      glPushMatrix();  //done=========

	glTranslatef(2.2, .03, 1.0);

	glRotatef(-35,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



     glPushMatrix();  //done=========

	glTranslatef(.55, .25, 1.0);

	glRotatef(-47,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



     glPushMatrix();  //done=========

	glTranslatef(.55, .009, 1.0);

	glRotatef(-47,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();





       glPushMatrix();  //done=========

	glTranslatef(.8, -.1, 1.0);

	glRotatef(-35,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.68,-1,0);

    glVertex3f(.68,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();





     glPushMatrix();  //done=========

	glTranslatef(.8, .2, 1.0);

	glRotatef(-35,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.67,-1,0);

    glVertex3f(.67,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



      glPushMatrix();  //done=========

	glTranslatef(.95, .249, 1.0);

	glRotatef(-35,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.6,-1,0);

    glVertex3f(.6,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



      glPushMatrix();  //done=========

	glTranslatef(.95, -.05, 1.0);

	glRotatef(-35,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.6,-1,0);

    glVertex3f(.6,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();











   /* glPushMatrix();

	glTranslatef(-1.15, .2, 1.0);

	glRotatef(50,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



     glPushMatrix();

	glTranslatef(.6, .12, 1.0);

	glRotatef(-90,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



       glPushMatrix();

	glTranslatef(.6,-.2, 1.0);

	glRotatef(-90,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



      glPushMatrix();

	glTranslatef(-.75,-.2, 1.0);

	glRotatef(-90,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



       glPushMatrix();

	glTranslatef(-.6,-.12, 1.0);

	glRotatef(-90,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();







       glPushMatrix();

	glTranslatef(-.6,.2, 1.0);

	glRotatef(-90,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();





      glPushMatrix();

	glTranslatef(-.75,.14, 1.0);

	glRotatef(-90,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



    glPushMatrix();

	glTranslatef(.1, .3, 1.0);

	glRotatef(50,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



      glPushMatrix();

	glTranslatef(.1, -.05, 1.0);

	glRotatef(50,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();



       glPushMatrix();

	glTranslatef(.25,.25, 1.0);

	glRotatef(50,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();





     glPushMatrix();

	glTranslatef(.25,-.1, 1.0);

	glRotatef(50,0,1,0);

     glBegin(GL_POLYGON);

      glColor3ub(0,0,0);

    glVertex3f(.1,-1,0);

    glVertex3f(.3,-1,0);

    glVertex3f(.3,-.8,0);

    glVertex3f(.1,-.8,0);

    glEnd();

     glPopMatrix();*/











     glPushMatrix();

	glTranslatef(1.75, .05, 1.0);

	//glRotatef(-70,1,0,0);



     glBegin(GL_POLYGON);

      glColor3ub(255,0,0);

    glVertex3f(-0.3,-.5,0);

    glVertex3f(-.5,-.5,0);

    glVertex3f(-.5,-.52,0);

    glVertex3f(-0.3,-.52,0);

    glEnd();

    glPopMatrix();





  glPushMatrix();

	glTranslatef(1.35, -.45, 1.0);

	//glRotatef(_angle, 0.0, 0.0, 1.0);



	glBegin(GL_POLYGON);

	glColor3ub(255,255,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.14;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();



     glPushMatrix();

    glBegin(GL_POLYGON);

      glColor3ub(210,105,30); ///wall

    glVertex3f(0,-1,0);

    glVertex3f(.5,-1,0);

    glVertex3f(.5,0,0);

    glVertex3f(0,0,0);

    glEnd();

    glPopMatrix();



     glPushMatrix();

     glBegin(GL_POLYGON);

      glColor3ub(205,133,63);

    glVertex3f(.5,-1,0);

    glVertex3f(1,-1.2,0);

    glVertex3f(1,-.2,0);

    glVertex3f(.5,0,0);

    glEnd();

    glPopMatrix();



        glPushMatrix();

     glBegin(GL_POLYGON);

      glColor3ub(205,133,63);

    glVertex3f(-.5,-1.2,0);

    glVertex3f(0,-1,0);

    glVertex3f(0,0,0);

    glVertex3f(-.5,-.2,0);

    glEnd();

     glPopMatrix();



     glPushMatrix();

    glBegin(GL_POLYGON);

      glColor3ub(139,69,19);

    glVertex3f(-1,-1.2,0);

    glVertex3f(-.5,-1.2,0);

    glVertex3f(-.5,-.2,0);

    glVertex3f(-1,0,0);

    glEnd();

     glPopMatrix();



     glPushMatrix();

     glBegin(GL_POLYGON);

      glColor3ub(139,69,19);

    glVertex3f(1,-1.2,0);

    glVertex3f(1.5,-1.2,0);

    glVertex3f(1.5,0,0);

    glVertex3f(1,-.2,0);

    glEnd();

      glPopMatrix();



      glPushMatrix();

     glBegin(GL_POLYGON);

      glColor3ub(0,206,209);

    glVertex3f(-1,0,0);

    glVertex3f(-.5,-.2,0);

    glVertex3f(0,0,0);

    glVertex3f(.5,0,0);

    glVertex3f(1,-.2,0);

    glVertex3f(1.5,0,0);

    glVertex3f(.25,.5,0);

    glEnd();

   glPopMatrix();

   glPopMatrix();



 //glPopMatrix();

///------------------------------done hospital----------------------------///







///+++++++++++++++++++++++++++++++++++++++

///river

///-----------ship by sajid-------------///



     glPushMatrix();

     glTranslatef(0,-2.15,0);

     glTranslatef(-bp,0,0);

     glScalef(.8,.8,1);



     glPushMatrix();

      glTranslatef(-.5,-.15,0);

     glBegin(GL_POLYGON);

	glColor3ub(0,0,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.08;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();





     glPushMatrix();

      glTranslatef(-.8,-.15,0);

     glBegin(GL_POLYGON);

	glColor3ub(0,0,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.08;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	 glPushMatrix();

      glTranslatef(-1.1,-.15,0);

     glBegin(GL_POLYGON);

	glColor3ub	(0,0,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.08;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	 glPushMatrix();

      glTranslatef(-1.4,-.15,0);

     glBegin(GL_POLYGON);

	glColor3ub(0,0,255);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.08;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



    glPushMatrix();

      glBegin(GL_POLYGON);

    glColor3ub(0,0,255);

    glVertex3f(-.5,.20,0);

    glVertex3f(-.5,.30,0);

    glVertex3f(-.6,.30,0);

    glVertex3f(-.6,.20,0);

    glEnd();



     glBegin(GL_POLYGON);

   glColor3ub(0,0,255);

    glVertex3f(-.7,.20,0);

    glVertex3f(-.7,.30,0);

    glVertex3f(-.8,.30,0);

    glVertex3f(-.8,.20,0);

    glEnd();



     glBegin(GL_POLYGON);

    glColor3ub(0,0,255);

    glVertex3f(-.9,.20,0);

    glVertex3f(-.9,.30,0);

    glVertex3f(-1,.30,0);

    glVertex3f(-1,.20,0);

    glEnd();





     glBegin(GL_POLYGON);

   glColor3ub(0,0,255);

    glVertex3f(-1.5,.20,0);

    glVertex3f(-1.5,.30,0);

    glVertex3f(-1.6,.30,0);

    glVertex3f(-1.6,.20,0);

    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(0,0,255);

    glVertex3f(-1.3,.20,0);

    glVertex3f(-1.3,.30,0);

    glVertex3f(-1.4,.30,0);

    glVertex3f(-1.4,.20,0);

    glEnd();



    glBegin(GL_POLYGON); ///flag

    glColor3ub(0,255,0);

    glVertex3f(-1.4,.5,0);

    glVertex3f(-1.4,.9,0);

    glVertex3f(-1.45,.9,0);

    glVertex3f(-1.45,.5,0);

    glEnd();



    glBegin(GL_POLYGON); ///flag

    glColor3ub(255,255,255);

    glVertex3f(-1.4,.7,0);

    glVertex3f(-1.2,.8,0);

    glVertex3f(-1.4,.9,0);



    glEnd();







    glBegin(GL_POLYGON);

    glColor3ub	(255,255,0);

    glVertex3f(-.1,0,0);

    glVertex3f(-.4,-.5,0);

    glVertex3f(-1.7,-.5,0);

    glVertex3f(-2.5,0,0);

    glEnd();



    glBegin(GL_POLYGON);

    glColor3ub(139,0,0);

    glVertex3f(-.3,0,0);

    glVertex3f(-.5,.6,0);

    glVertex3f(-1.0,.6,0);

    glVertex3f(-1.3,0,0);

    glEnd();



     glBegin(GL_POLYGON);

    glColor3ub(255,0,0);

    glVertex3f(-1.3,0,0);

    glVertex3f(-1,.5,0);

    glVertex3f(-1.6,.5,0);

    glVertex3f(-1.85,0,0);

    glEnd();



     glBegin(GL_POLYGON);

    glColor3ub(255,0,0);

    glVertex3f(-.6,.6,0);

    glVertex3f(-.6,.7,0);

    glVertex3f(-.75,.7,0);

    glVertex3f(-.8,.6,0);

    glEnd();





    glPopMatrix();





    glPopMatrix();



    ///----------------------///



    ///-------------pani----------///









     glPushMatrix(); ///pani

     glTranslatef(0,-2.3,0);

     glScalef(2,1,1);

      glBegin(GL_POLYGON);

    glColor3ub(100,149,237);

    glVertex3f(5,-1,0);

    glVertex3f(5,.3,0);

    glVertex3f(-5,.3,0);

    glVertex3f(-5,-1,0);

    glEnd();

    glPopMatrix();



     glPushMatrix();

     glTranslatef(0,-2.3,0);

     glPushMatrix();///dheu

      glTranslatef(5,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	  glPushMatrix();///dheu

      glTranslatef(4,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(3,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(2,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



glPushMatrix();///dheu

      glTranslatef(1,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(0,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(-1,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(-2,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(-3,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(-4,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPushMatrix();///dheu

      glTranslatef(-5,.3,0);

      glScaled(4,1,1);

     glBegin(GL_POLYGON);

	glColor3ub(100,149,237);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=0.2;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();

	glPopMatrix();



	glPopMatrix();



	///------------------------------------------------///

///river end

///---------------------------

















///cloud

/////// clouds.......



    glPushMatrix();

    glColor3ub(234, 236, 239);

    glTranslatef(cloud,0,0);

    glTranslatef(-6.0,2.3,0);

    glRotatef(-180,0.0,0.0,1.0);

    glScalef(2.1,1,0);

    glutSolidSphere(.4,50,50);

      glEnd();





   /// glColor3ub(192, 192, 192);

    glTranslatef(0.0,0.0,0);

    glScalef(1,2.2,0);

    glRotatef(-100,0.0,0.0,1.0);



    glutSolidSphere(.25,50,50);

    glEnd();





    glPopMatrix();

///cloud end















///rifat2




































    ///--------------------------





    ///duidiker gray rasta



    glPushMatrix();

    glScalef(2.2,0.5,1);



    glPushMatrix(); //Save the current state of transformations

    glColor3ub(128,128,128);

    glBegin(GL_POLYGON);

    glVertex3f(4.8,-0.35,0.0);

    glVertex3f(4.8,0.2,0.0);

    glVertex3f(-4.8,0.2,0.0);

    glVertex3f(-4.8,-0.35,0.0);

    glEnd();

    glPopMatrix();







    glPushMatrix(); //Save the current state of transformations

    glColor3ub(128,128,128);

    glBegin(GL_POLYGON);

    glVertex3f(4.8,-1.1,0.0);

    glVertex3f(4.8,-0.55,0.0);

    glVertex3f(-4.8,-0.55,0.0);

    glVertex3f(-4.8,-1.1,0.0);

    glEnd();

    glPopMatrix();



    ///-------------





    ///----------



    ///sider sada rasta



    glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(4.8,0.2,0.0);

    glVertex3f(4.8,0.3,0.0);

    glVertex3f(-4.8,0.3,0.0);

    glVertex3f(-4.8,0.2,0.0);

    glEnd();

    glPopMatrix();



    glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(4.8,-1.2,0.0);

    glVertex3f(4.8,-1.1,0.0);

    glVertex3f(-4.8,-1.1,0.0);

    glVertex3f(-4.8,-1.2,0.0);

    glEnd();

    glPopMatrix();



    ///---------------







    ///------------



    ///majkhaner choto choto divider



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-4.4,-.47,0.0);

    glVertex3f(-4.3,-.43,0.0);

    glVertex3f(-4.5,-.43,0.0);

    glVertex3f(-4.6,-.47,0.0);

    glEnd();

    glPopMatrix();



   glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-3.9,-.47,0.0);

    glVertex3f(-3.8,-.43,0.0);

    glVertex3f(-4.0,-.43,0.0);

    glVertex3f(-4.1,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-3.4,-.47,0.0);

    glVertex3f(-3.3,-.43,0.0);

    glVertex3f(-3.5,-.43,0.0);

    glVertex3f(-3.6,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-2.9,-.47,0.0);

    glVertex3f(-2.8,-.43,0.0);

    glVertex3f(-3.0,-.43,0.0);

    glVertex3f(-3.1,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-2.4,-.47,0.0);

    glVertex3f(-2.3,-.43,0.0);

    glVertex3f(-2.5,-.43,0.0);

    glVertex3f(-2.6,-.47,0.0);

    glEnd();

    glPopMatrix();



    glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-1.9,-.47,0.0);

    glVertex3f(-1.8,-.43,0.0);

    glVertex3f(-2.0,-.43,0.0);

    glVertex3f(-2.1,-.47,0.0);

    glEnd();

    glPopMatrix();



      glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-1.4,-.47,0.0);

    glVertex3f(-1.3,-.43,0.0);

    glVertex3f(-1.5,-.43,0.0);

    glVertex3f(-1.6,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-.9,-.47,0.0);

    glVertex3f(-.8,-.43,0.0);

    glVertex3f(-1.0,-.43,0.0);

    glTranslatef(-1.4,1.6,0); //Move to the center of the triangl

    glVertex3f(-1.1,-.47,0.0);

    glEnd();

    glPopMatrix();



      glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(-.4,-.47,0.0);

    glVertex3f(-.3,-.43,0.0);

    glVertex3f(-.5,-.43,0.0);

    glVertex3f(-.6,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(.05,-.47,0.0);

    glVertex3f(.15,-.43,0.0);

    glVertex3f(-.05,-.43,0.0);

    glVertex3f(-.15,-.47,0.0);

    glEnd();

    glPopMatrix();







    ////////////////////////



        glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(4.3,-.47,0.0);

    glVertex3f(4.4,-.43,0.0);

    glVertex3f(4.6,-.43,0.0);

    glVertex3f(4.5,-.47,0.0);

    glEnd();

    glPopMatrix();



   glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(3.8,-.47,0.0);

    glVertex3f(3.9,-.43,0.0);

    glVertex3f(4.1,-.43,0.0);

    glVertex3f(4.0,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(3.3,-.47,0.0);

    glVertex3f(3.4,-.43,0.0);

    glVertex3f(3.6,-.43,0.0);

    glVertex3f(3.5,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(2.8,-.47,0.0);

    glVertex3f(2.9,-.43,0.0);

    glVertex3f(3.1,-.43,0.0);

    glVertex3f(3.0,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(2.3,-.47,0.0);

    glVertex3f(2.4,-.43,0.0);

    glVertex3f(2.6,-.43,0.0);

    glVertex3f(2.5,-.47,0.0);

    glEnd();

    glPopMatrix();



    glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(1.8,-.47,0.0);

    glVertex3f(1.9,-.43,0.0);

    glVertex3f(2.1,-.43,0.0);

    glVertex3f(2.0,-.47,0.0);

    glEnd();

    glPopMatrix();



      glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(1.3,-.47,0.0);

    glVertex3f(1.4,-.43,0.0);

    glVertex3f(1.6,-.43,0.0);

    glVertex3f(1.5,-.47,0.0);

    glEnd();

    glPopMatrix();



     glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(.8,-.47,0.0);

    glVertex3f(.9,-.43,0.0);

    glVertex3f(1.1,-.43,0.0);

    glVertex3f(1.0,-.47,0.0);

    glEnd();

    glPopMatrix();



      glPushMatrix(); //Save the current state of transformations

    glColor3ub(255,255,255);

    glBegin(GL_POLYGON);

    glVertex3f(.3,-.47,0.0);

    glVertex3f(.4,-.43,0.0);

    glVertex3f(.6,-.43,0.0);

    glVertex3f(.5,-.47,0.0);

    glEnd();

    glPopMatrix();



    ///--------------







/// sider sobuj



    glPushMatrix(); //Save the current state of transformations

    glColor3ub(0,255,0);

    glBegin(GL_POLYGON);

    glVertex3f(4.8,-1.4,0.0);

    glVertex3f(4.8,0.5,0.0);

    glVertex3f(-4.8,0.5,0.0);

    glVertex3f(-4.8,-1.4,0.0);

    glEnd();

    glPopMatrix();



///----------------



glPushMatrix();

    glColor3ub(0,0,0);

    glBegin(GL_QUADS);

    glVertex3f(-3.7,1.6,0.0);

    glVertex3f(-3.9,1.6,0.0);

    glVertex3f(-3.9,1.4,0.0);

    glVertex3f(-3.7,1.4,0.0);

    glPopMatrix();



 glPushMatrix();

    glColor3ub(0,0,0);

    glBegin(GL_QUADS);

    glVertex3f(-3.3,2.0,0.0);

    glVertex3f(-3.5,2.0,0.0);

    glVertex3f(-3.5,1.8,0.0);

    glVertex3f(-3.3,1.8,0.0);

    glPopMatrix();







     glPushMatrix();

    glColor3ub(0,0,255);

    glBegin(GL_QUADS);

    glVertex3f(-3.7,2.0,0.0);

    glVertex3f(-3.9,2.0,0.0);

    glVertex3f(-3.9,1.8,0.0);

    glVertex3f(-3.7,1.8,0.0);

    glPopMatrix();





    glPushMatrix();

    glColor3ub(255,255,0);

    glBegin(GL_QUADS);

    glVertex3f(-3.3,1.6,0.0);

    glVertex3f(-3.5,1.6,0.0);

    glVertex3f(-3.5,1.4,0.0);

    glVertex3f(-3.3,1.4,0.0);

    glPopMatrix();

     glPushMatrix();

    glColor3ub(255,255,255);

    glBegin(GL_QUADS);

    glVertex3f(-3.2,1.2,0.0);

    glVertex3f(-4.0,1.2,0.0);

    glVertex3f(-4.0,1.0,0.0);

    glVertex3f(-3.2,1.0,0.0);

    glPopMatrix();





    glPushMatrix();

    glColor3ub(0,0,0);

    glBegin(GL_QUADS);

    glVertex3f(-3.4,0.8,0.0);

    glVertex3f(-3.8,0.8,0.0);

    glVertex3f(-3.8,0.2,0.0);

    glVertex3f(-3.4,0.2,0.0);

    glPopMatrix();



glPushMatrix();

    glColor3ub(192, 192, 192);

    glBegin(GL_QUADS);

    glVertex3f(-3.2,2.2,0.0);

    glVertex3f(-4.0,2.2,0.0);

    glVertex3f(-4.0,0.2,0);

    glVertex3f(-3.2,0.2,0.0);

    glEnd();

    glPopMatrix();



glPushMatrix();

    glColor3ub(105, 105, 105);

    glBegin(GL_QUADS);

    glVertex3f(-3.0,2.1,0.0);

    glVertex3f(-3.2,2.2,0.0);

    glVertex3f(-3.2,0.2,0.0);

    glVertex3f(-3.0,0.1,0.0);

    glPopMatrix();



    glEnd();





    glPopMatrix();

    glPopMatrix();



///-*************************************************************************





///green field

glPushMatrix();

glPushMatrix();

	glTranslatef(-2.9,.6,0);

	glScalef(3,1,1);



	glBegin(GL_POLYGON);

	glColor3ub(149, 209, 39);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=1;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();





///2

glPushMatrix();

	glTranslatef(2,.6,0);

	glScalef(4,1,1);



	glBegin(GL_POLYGON);

	///glColor3ub(255,0,0);

	for(int i=0;i<200;i++)

	{

		float pi=3.1416;

		float A=(i*2*pi)/100;

		float r=1;

		float x = r * cos(A);

		float y = r * sin(A);

		glVertex2f(x,y );

	}

	glEnd();



glPopMatrix();



glPopMatrix();

///green field end













///sky

glPushMatrix();

glTranslatef(-8,0,0);

glScalef(20,4,1);

glColor3ub(160, 193, 247);

glBegin(GL_QUADS);

if(b == 8){glColor3ub(160, 193, 247);}

if(b == 7){glColor3ub(0, 0, 0);}



glVertex3f(0,0,0);

glVertex3f(1,0,0);

glVertex3f(1,1,0);

glVertex3f(0,1,0);

glEnd();

glPopMatrix();

///sky end



































    glPushMatrix();

    glRotatef(90,0.0,1.0,0.0);

    if ( n == 0 || trn == 0){

        glTranslatef(-.33,-0.7,traffic);

    }




























     glPopMatrix();



    glPopMatrix();



    glPopMatrix();

















     ///=========================mati=======================================///







      glPushMatrix();

      glTranslatef(0,-2.33,0);

       glBegin(GL_POLYGON);///mati

   glColor3ub	(210,105,30);



    glVertex3f(-7,0,0);

    glVertex3f(-7,1,0);

    glVertex3f(7,1,0);

    glVertex3f(7,0,0);



    glEnd();

glPopMatrix();



///--------------------------------------///



glPushMatrix(); //////////// ----------------- Instruction -----------------

    glTranslatef(-3.5,3.5,0.5);



glPushMatrix();

    gluOrtho2D(0,2500, 0, 2500);

    glColor3ub	(255,0,0);

  glTranslatef(2.5,2.5,0); //Translates the character object with its axis of rotation

    ///glRotatef(angle, 0.0, 0.0, 1.0); ///Rotates the characters about z-axis

    char gameOb[] = "F1->Night | F2-> Day |  F9->exit | F10-> Full Screen | F11-> car start | F12->car stop";

    int game0bject = strlen(gameOb);

    for (int i = 0; i<strlen(gameOb); i++) {

        glutStrokeCharacter(GLUT_STROKE_ROMAN, gameOb[i]);

    }

    glPopMatrix();

  glPopMatrix(); ///////////// --------- Instruction pop -------------------









	glutSwapBuffers();

}



void update(int value) {

	if (_angle > 360) {

		_angle -= 360;

	}

	_ang_tri += 3.0f;

	if (_ang_tri > 360) {

		_ang_tri -= 360;

	}



	_sec -= 1.0f;

	if (_sec > 360) {

		_sec -= 360;

	}



	_min -= 0.5f;

	if (_min > 360) {

		_min -= 360;

	}



	_hour -= 0.1f;

	if (_hour > 360) {

		_hour -= 360;

	}

	_fan -= 1.0f;

	if (_fan > 360) {

		_fan -= 360;

	}

    _angle += 2.0f;



	if (_angle > 360) {

		_angle -= 360;

	}



	_angle_opposite -=2.0f;



	if (_angle_opposite > 360){

        _angle_opposite += 360;

	}



	traffic += 0.08f;



	if(traffic >6.5){

        traffic = -5;

	}



	raining -= 0.5f;

	if(raining < (-0.3) && ron == 1){

        raining = 2.6;

	}



	raining2 -= 0.5f;

	if(raining2 < 1 && ron == 1){

        raining2 = 2.6;

	}





	///car



	if(t<=0)

{

    t+=.06;

}



if(t>=0)

{

    t+=.06;

}



if(t>9)

{



    t=-6;

}

///boat and plane

if(bp<=0)

{

    bp+=.06;

}



if(bp>=0)

{

    bp+=.06;

}



if(bp>9)

{



    bp=-6;

}

///boat and plane end



///car1

if(q<=0)

{

    q+=.04;

}



if(q>=0)

{

    q+=.04;

}



if(q>6)

{



    q=-6;

}



///cloud

if(q<=0)

{

    q+=.004;

}



if(cloud>=0)

{

    cloud+=.004;

}



if(cloud>6)

{



    cloud=-6;

}



    if(b == 7 && Sun_down > 0.5){

        Sun_down -= 0.01f;

        Moon_rise -= 0.01f;

        Moon_down = Moon_rise;

        Sun_rise = Sun_down;



    }



    if(b == 8 && Sun_rise < 2.3 ){

        Sun_rise += 0.01f;

         Moon_down += 0.01f;

         Moon_rise = Moon_down;

        Sun_down = Sun_rise;

    }



    if(fullscr == 1){glutFullScreen();}









	glutPostRedisplay(); //Tell GLUT that the display has changed



	//Tell GLUT to call update again in 25 milliseconds

	glutTimerFunc(25, update, 0);

}

















int main(int argc, char** argv) {

	//Initialize GLUT

	glutInit(&argc, argv);

	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

	glutInitWindowSize(1000, 1000);



	//Create the window

	glutCreateWindow("green city");

	initRendering();



	//Set handler functions

	glutDisplayFunc(drawScene);

	//if(fullscr == 1){glutFullScreen();}

///	glutFullScreen();



	glutReshapeFunc(handleResize);

    glutSpecialFunc(keyboardown);

///     glutSpecialFunc(keyboarlower1);

	glutTimerFunc(25, update, 0); //Add a timer



	glutMainLoop();

	return 0;

}
