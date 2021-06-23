#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>


void myInit (void)
{
    glClearColor(1.0, 1.0, 1.0, 0.0);
    glColor3f(0.0f, 0.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0, 640.0, 0.0, 480.0);
}


void myDisplay(void)
{



    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f (0.0, 0.0, 0.0);
    glPointSize(4.0);
    glBegin(GL_POLYGON);
    glColor3f( .12,0.15,0.13 );
    glVertex2i(205,135);
    glVertex2i(185,135);
    glVertex2i(185,120);
    glVertex2i(225,120);
    glVertex2i(225,145);
    glVertex2i(205,145);
    glEnd();
    glFlush();



    glBegin(GL_POLYGON);
    glColor3f ( 0.12,0.15,0.13 );
    glVertex2i(260,135);
    glVertex2i(260,145);
    glVertex2i(240,145);
    glVertex2i(240,120);
    glVertex2i(280,120);
    glVertex2i(280,135);
    glEnd();
    glFlush ();







    glBegin(GL_POLYGON);
    glColor3f ( 1.0, 2.0, 0.0 );
    glVertex2i(205,145);
    glVertex2i(225,145);
    glVertex2i(225,160);
    glVertex2i(205,160);

    glEnd();
    glFlush ();


    glBegin(GL_POLYGON);
    glColor3f ( 1.0, 2.0, 0.0 );
    glVertex2i(240,145);
    glVertex2i(260,145);
    glVertex2i(260,160);
    glVertex2i(240,160);

    glEnd();
    glFlush ();





    glBegin(GL_POLYGON);
    glColor3f ( 0.0, 0.0, 1.0 );
    glVertex2i(225,250);
    glVertex2i(240,250);
    glVertex2i(240,160);
    glVertex2i(260,160);
    glVertex2i(260,240);
    glVertex2i(260,250);
    glVertex2i(255,250);
    glVertex2i(255,260);
    glVertex2i(210,260);
    glVertex2i(210,250);
    glVertex2i(205,250);
    glVertex2i(205,160);
    glVertex2i(255,160);

    glEnd();
    glFlush ();




    glBegin(GL_POLYGON);
    glColor3f ( 1.0, 0.0, 2.0 );
    glVertex2i(230,320);
    glVertex2i(230,330);
    glVertex2i(220,330);
    glVertex2i(220,345);
    glVertex2i(215,345);
    glVertex2i(215,370);
    glVertex2i(205,370);
    glVertex2i(205,365);
    glVertex2i(190,365);
    glVertex2i(190,260);
    glVertex2i(275,260);
    glVertex2i(275,365);
    glVertex2i(260,365);
    glVertex2i(260,375);
    glVertex2i(255,385);
    glVertex2i(255,385);
    glVertex2i(250,385);
    glVertex2i(250,345);
    glVertex2i(245,345);
    glVertex2i(245,330);
    glVertex2i(235,330);
    glVertex2i(235,320);






    glEnd();
    glFlush ();










    glBegin(GL_POLYGON);
    glColor3f (  0.8, 0.8, 0.8 );
    glVertex2i(195,415);
    glVertex2i(195,370);
    glVertex2i(250,370);
    glVertex2i(250,415);

    glEnd();
    glFlush ();




    glBegin(GL_POLYGON);
    glColor3f ( 0.0,0.0,0.0 );
    glVertex2i(230,385);
    glVertex2i(235,385);
    glVertex2i(235,400);
    glVertex2i(240,400);
    glVertex2i(240,385);
    glVertex2i(245,385);
    glVertex2i(245,415);
    glVertex2i(205,415);
    glVertex2i(205,420);
    glVertex2i(175,420);
    glVertex2i(175,415);
    glVertex2i(230,415);

    glEnd();
    glFlush ();






    glBegin(GL_QUADS);
    glColor3f ( 0.8, 0.8, 0.8 );
    glVertex2i(260,240);
    glVertex2i(275,240);
    glVertex2i(275,260);
    glVertex2i(260,260);
    glEnd();
    glFlush ();




    glBegin(GL_QUADS);
    glColor3f ( 0.8, 0.8, 0.8 );
    glVertex2i(190,260);
    glVertex2i(190,240);
    glVertex2i(205,240);
    glVertex2i(205,260);
    glEnd();
    glFlush ();









}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (780, 660);
    glutInitWindowPosition (0, 0);
    glutCreateWindow ("HUMAN");
    glutDisplayFunc(myDisplay);
    myInit ();
    glutMainLoop();
}
