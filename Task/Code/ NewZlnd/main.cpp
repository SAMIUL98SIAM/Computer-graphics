#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>




void myDisplay(void)
{


    glClear (GL_COLOR_BUFFER_BIT);

    glPointSize(5.0);


    glBegin(GL_QUADS);
    glColor3f ( 1.0,1.0,1.0 );
    glVertex2i(20,120);
    glVertex2i(220,120);
    glVertex2i(220,220);
    glVertex2i(20,220);
    glEnd();




    glBegin(GL_TRIANGLES);
    glColor3f ( 0.0,0.0,1.0 );
    glVertex2i(30,130);
    glVertex2i(30,110);
    glVertex2i(70,130);

    glEnd();






    glBegin(GL_TRIANGLES);
    glColor3f ( 0.0,0.0,1.0 );
    glVertex2i(80,130);
    glVertex2i(110,130);
    glVertex2i(110,80);

    glEnd();



    glBegin(GL_TRIANGLES);
    glColor3f ( 0.0,0.0,1.0 );
    glVertex2i(165,250);
    glVertex2i(220,250);
    glVertex2i(165,220);

    glEnd();


    glBegin(GL_TRIANGLES);
    glColor3f ( 0.0,0.0,1.0 );
    glVertex2i(165,150);
    glVertex2i(220,150);
    glVertex2i(165,180);

    glEnd();
    glFlush ();


    glBegin(GL_TRIANGLES);
    glColor3f ( 0.0,0.0,1.0 );
    glVertex2i(210,185);
    glVertex2i(250,185);
    glVertex2i(250,160);

    glEnd();
    glFlush ();



    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(50,250);
    glVertex2i(50,240);
    glVertex2i(105,220);
    glVertex2i(115,220);
    glEnd();
    glFlush ();



    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(170,215);
    glVertex2i(180,215);
    glVertex2i(245,250);
    glVertex2i(235,250);
    glEnd();
    glFlush ();



    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(50,150);
    glVertex2i(60,150);
    glVertex2i(125,185);
    glVertex2i(115,185);
    glEnd();
    glFlush ();

    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(185,185);
    glVertex2i(195,185);
    glVertex2i(250,150);
    glVertex2i(250,155);
    glEnd();
    glFlush ();




    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(50,190);
    glVertex2i(50,210);
    glVertex2i(160,210);
    glVertex2i(160,190);
    glEnd();
    glFlush ();


    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(140,250);
    glVertex2i(160,250);
    glVertex2i(140,210);
    glVertex2i(160,210);
    glEnd();
    glFlush ();


    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(140,190);
    glVertex2i(140,150);
    glVertex2i(160,150);
    glVertex2i(160,190);
    glEnd();
    glFlush ();


    glBegin(GL_QUADS);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(160,190);
    glVertex2i(250,190);
    glVertex2i(250,210);
    glVertex2i(160,210);
    glEnd();
    glFlush ();


    glBegin(GL_POLYGON);
    glColor3f ( 1.0,0.0,0.0 );
    glVertex2i(330,180);
    glVertex2i(330,170);
    glVertex2i(335,175);
    glVertex2i(345,180);
    glVertex2i(335,185);
    glVertex2i(330,95);
    glVertex2i(85,200);
    glVertex2i(95,200);
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



