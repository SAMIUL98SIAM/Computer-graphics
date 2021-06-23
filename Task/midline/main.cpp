#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include<iostream>
using namespace std;

int x0=0;
int y0=0;
int x1=0;
int y1=0;

void setpixel(int x, int y)
{
    glBegin(GL_POINTS);
    glVertex2f(x,y);
    glEnd();
}
int setpk(int pk,int yk,int y)
{
    int dx=0;
    int dy=0;
    dx=x1-x0;
    dy=y1-y0;
    int c=(yk-y);
    pk =pk+(2*dy)-(2*dx*c);
return pk;

}
void Display()
{

    int x,y;
    int dx,dy;
    int pk;
    int k;
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0,0,0);
    setpixel (x0,y0);
    dx=x1-x0;
    dy=y1-y0;
    pk=2*dy-dx;
    x=x0;
    y=y0;
    int last=y0;
    for(k=0;k<dx; ++k)
    {

        if(pk<0)
        {
        pk=setpk(pk,y,last);

        }
        else{
            last=y;
            ++y;
           pk=setpk(pk,y,last);

        }
        ++x;
        setpixel(x,y);

    }
    glFlush();
}
void init(void)
{

    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(0.0,400.0,0.0,400.0);

}
int main(int argc,char **argv)
{
    cin>>x0;
    cin>>y0;
    cin>>x1;
    cin>>y1;
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(0,0);
    glutInitWindowSize(500,400);
    glutCreateWindow("The Bresenham Line");

    init();
    glutDisplayFunc(Display);
    glutMainLoop();
    return 0;

}

