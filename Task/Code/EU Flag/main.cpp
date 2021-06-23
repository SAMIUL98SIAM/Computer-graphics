#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>




void myDisplay(void)
{


    glClear (GL_COLOR_BUFFER_BIT);

    glPointSize(5.0);

    glColor3ub(128,125,128);
    glBegin(GL_POLYGON);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(50,70);
    glVertex2i(90,90);
    glVertex2i(50,120);
    glVertex2i(0,500);
    glVertex2i(30,120);
    glVertex2i(20,120);
    glVertex2i(85,200);
    glVertex2i(50,200);
    glVertex2i(0,0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(50,70);
    glVertex2i(90,90);
    glVertex2i(50,120);
    glVertex2i(0,500);
    glVertex2i(30,120);
    glVertex2i(20,120);
    glVertex2i(85,200);
    glVertex2i(50,200);
    glVertex2i(0,0);
    glEnd();
    glFlush ();




}


void myInit (void)
{
    glClearColor(1.0, 1.0, 0.0, 1.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(5.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (0, 0);
    glutInitWindowPosition (800, 650);
    glutCreateWindow ("EU Flag");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}



