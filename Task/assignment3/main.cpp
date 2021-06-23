#include<iostream>
#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
using namespace std;
double xi=0;
double yi=0;
double xn=0;
double yb=0;

void myDisplay(void)
{


    double  max,m,cel,cel2,a;



    double difference_x= xn-xi;
    double difference_y= yb-yi;
    if(difference_x>difference_y){
        max=difference_x;
    }
    else{
        max= difference_y;
    }
    m= (yb-yi)/(xn-xi);
     glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    for(int i=0;i<max;i++){
        xi=xi+1;
        yi=yi+m;
        cel=ceil(yi);
        a=cel-yi;
        if(a>=0.5){
            glPointSize(4.0);
            glColor3f(1,1,1);
            glBegin(GL_POINT);
            glVertex2i(xi,cel);
            glEnd();
            glFlush();
        }
        else{
            glPointSize(4.0);
            cel2=floor(yi);
            glColor3f(1,1,1);
            glBegin(GL_POINT);
            glVertex2i(xi,cel2);
            glEnd();
            glFlush();
        }



    }








}



void myInit (void)
{
    glClearColor(0.0,0.0,0.0,0.0);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    gluOrtho2D(0.0,800.0,0.0,800.0);

}
int main(int argc,char** argv)
{

    cin>>xi;
    cin>>yi;
    cin>>xn;
    cin>>yb;
    glutInit( &argc , argv);
    glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
    glutInitWindowSize(800,800);
    glutInitWindowPosition(0,0);
    glutCreateWindow("CHESS");
    glutDisplayFunc(myDisplay);

    myInit();
    glutMainLoop();
}
