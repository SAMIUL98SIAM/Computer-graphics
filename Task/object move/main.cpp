#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>
# define PI           3.14159265358979323846
GLfloat position = 0.0f;
GLfloat speed = 0.1f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speed += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    speed = 0.0f;
    break;
case 'w':
    speed = 0.1f;
    break;


glutPostRedisplay();


	}
}


void display() {
   glClear(GL_COLOR_BUFFER_BIT);
   glLoadIdentity();



glBegin(GL_POLYGON);
    glColor3ub(163, 14, 225);
    glVertex2i(20,850);
    glVertex2i(30,820);
    glVertex2i(100,820);
    glVertex2i(110,800);
    glVertex2i(200,800);
    glVertex2i(200,815);
    glVertex2i(190,830);
    glVertex2i(180,830);
    glVertex2i(170,860);
    glVertex2i(155,860);
    glVertex2i(150,870);
    glVertex2i(135,860);
    glVertex2i(115,860);
    glVertex2i(100,825);
    glVertex2i(30,850);
    glEnd();


    glColor3ub(225, 19, 14);
    glBegin(GL_TRIANGLES);
    glVertex2i(200,800);
    glVertex2i(200,815);
    glVertex2i(215,808);
    glEnd();

     glPushMatrix();
     glTranslatef(28, 850, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
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

    glPushMatrix();
     glTranslatef(28, 850, 0);

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


    glColor3ub(225, 19, 14);
    glBegin(GL_TRIANGLES);
    glVertex2i(200,800);
    glVertex2i(200,815);
    glVertex2i(215,808);
    glEnd();

     glPushMatrix();
     glTranslatef(142, 870, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=30;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(142, 870, 0);

    glBegin(GL_LINE_LOOP);
    glColor3ub(225, 19, 14);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=29;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(130, 790, 0);

    glBegin(GL_POLYGON);
    glColor3ub(44, 42, 45);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();


    glPushMatrix();
    glTranslatef(165, 790, 0);

    glBegin(GL_POLYGON);
    glColor3ub(44, 42, 45);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/200;
		float r=8;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
    glPopMatrix();

    glPopMatrix();
     glFlush();
}





int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(320, 320);
   glutInitWindowPosition(50, 50);
   glutCreateWindow("Basic Animation");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(100, update, 0);
   glutMainLoop();
   return 0;
}
