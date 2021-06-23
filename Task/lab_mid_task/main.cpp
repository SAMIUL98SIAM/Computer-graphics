#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<string.h>
#include<iostream>
void home()
{
    glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(0.1f,0.0f);
    glVertex2f(0.02f,0.3f);
    glVertex2f(-0.38f,0.3f);
    glEnd();

   glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.29f,0.0f);
    glVertex2f(0.07f,0.0f);
    glVertex2f(0.07f,-0.4f);
    glVertex2f(-0.29f,-0.4f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(244,164,96);
    glVertex2f(-0.38f,0.3f);
    glVertex2f(-0.43f,0.0f);
    glVertex2f(-0.41f,0.0f);
    glVertex2f(-0.41f,-0.35f);
    glVertex2f(-0.29f,-0.4f);
    glVertex2f(0.07f,-0.4f);

    glEnd();

     glBegin(GL_LINES);

    glColor3ub(0,0,0);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(0.1f,0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.29f,0.0f);
    glVertex2f(-0.29f,-0.4f);

    glColor3ub(0,0,0);
     glVertex2f(0.07f,-0.4f);
    glVertex2f(-0.29f,-0.4f);

     glColor3ub(0,0,0);
     glVertex2f(0.07f,-0.4f);
    glVertex2f(0.07f,-0.0f);

    glColor3ub(0,0,0);
    glVertex2f(-0.3f,0.0f);
    glVertex2f(-0.38f,0.3f);

    glColor3ub(0,0,0);
    glVertex2f(-0.38f,0.3f);
    glVertex2f(-0.43f,0.0f);

     glColor3ub(0,0,0);
    glVertex2f(-0.37f,0.245f);
    glVertex2f(-0.41f,0.0f);

     glColor3ub(0,0,0);
     glVertex2f(-0.41f,0.0f);
    glVertex2f(-0.41f,-0.35f);

    glColor3ub(0,0,0);
     glVertex2f(-0.41f,-0.35f);
    glVertex2f(-0.29f,-0.4f);

    glColor3ub(0,0,0);
   glVertex2f(0.1f,0.0f);
    glVertex2f(0.02f,0.3f);

     glColor3ub(0,0,0);
  glVertex2f(0.02f,0.3f);
    glVertex2f(-0.38f,0.3f);

    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(100,50,40);
    glVertex2f(-0.15f,-0.1f);
    glVertex2f(-0.02f,-0.1f);
    glVertex2f(-0.02f,-0.4f);
    glVertex2f(-0.15f,-0.4f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(200,14,50);
    glVertex2f(-0.24f,-0.05f);
    glVertex2f(-0.18f,-0.05f);
    glVertex2f(-0.18f,-0.15f);
    glVertex2f(-0.24f,-0.15f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(100,50,40);
     glVertex2f(-0.31f,0.0f);
    glVertex2f(-0.38f,0.02f);
    glVertex2f(-0.38f,-0.37f);
    glVertex2f(-0.31f,-0.4f);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3ub(200,14,15);
    glVertex2f(0.06f,-0.05f);
    glVertex2f(-0.0f,-0.05f);
    glVertex2f(-0.0f,-0.15f);
    glVertex2f(0.06f,-0.15f);
    glEnd();
}
void fullsky()
{
     glLoadIdentity();
    glBegin(GL_POLYGON);
	glColor3ub(20, 40, 60);
	glVertex2f(-1.0f, 1.0f);
	glVertex2f(1.0f, 1.0f);
	glVertex2f(1.0f, 0.1f);
	glVertex2f(-1.0f, 0.1f);

	glEnd();
}


void display()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT);
     fullsky();
      home();
    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1250, 650);
    glutInitWindowPosition(5, 5);
    glutCreateWindow("DREAM HOME");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

