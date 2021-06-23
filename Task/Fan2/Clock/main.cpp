#include <windows.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;

GLfloat i = 0.0f;
GLfloat j = 0.0f;
GLfloat k = 0.0f;

void initGL()
{
    glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}

void Idle()
{
    glutPostRedisplay();
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.0f, 0.6f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.38f, 0.7f);
    glVertex2f(0.34f, 0.6f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.38f, 0.7f);
    glVertex2f(-0.34f, 0.6f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.38f, -0.7f);
    glVertex2f(-0.34f, -0.6f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.7f, 0.35f);
    glVertex2f(0.6f, 0.32f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.7f, -0.35f);
    glVertex2f(0.6f, -0.32f);

     glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.7f, -0.35f);
    glVertex2f(-0.6f, -0.32f);

     glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);

     glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.7f, 0.35f);
    glVertex2f(-0.6f, 0.32f);


    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.7f, 0.0f);
    glVertex2f(0.6f, 0.0f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.0f, -0.6f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.38f, -0.7f);
    glVertex2f(0.34f, -0.6f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.7f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glEnd();

    glLoadIdentity();
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.7f, 0.7f);
    glVertex2f( -0.7f, 0.7f);

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.7f, 0.7f);
    glVertex2f(-0.7f, -0.7f );

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(-0.7f, -0.7f);
    glVertex2f(0.7f, -0.7f );

    glColor3f(1.0f, 0.0f, 1.0f);
    glVertex2f(0.7f, -0.7f);
    glVertex2f(0.7f, 0.7f );

    glEnd();


    glPushMatrix();
    glRotatef(i,0.0,0.0,0.1);
    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f); // second
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glRotatef(j,0.0,0.0,0.1);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 0.0f);  //minute
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.5f);

    glEnd();
    glPopMatrix();

    glPopMatrix();

    glPushMatrix();
    glRotatef(k,0.0,0.0,0.1);
    glBegin(GL_LINES);
    glColor3f(1.0f, 1.0f, 1.0f);  // Hour
    glVertex2f(0.0f, 0.0f);
    glVertex2f( 0.0f, 0.4f);

    glEnd();
    glPopMatrix();



    i-=0.5f;
    if(i<=-360)
        {
            if(j<=-360)
            {
                k-=5.0f;     //check if the minutes dials complete 360 rotation
                i=0.0f;
                j=0.0f;
            }
            else
                {
                    j-=30.0f;
                    i=0.0f;
            }

         }
   cout << i << endl;
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(320, 320);
    glutCreateWindow("Clock");
    glutDisplayFunc(display);//
    initGL();
    glutIdleFunc(Idle);
    glutMainLoop();
    return 0;
}
