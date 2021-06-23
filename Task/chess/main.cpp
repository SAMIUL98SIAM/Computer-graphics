#include <stdio.h>
#include <GL/gl.h>
#include <GL/glut.h>

void myDisplay(void)
{
    glClearColor(0,0,0,0);
    glClear(GL_COLOR_BUFFER_BIT);
    bool black =true;
    for (int x=0; x<= 800;x+=100)
    {
        for(int y=0; y<= 800;y+=100)
        {
            if(black)
            {
                glColor3f(0,0,0);
                black=!black;
            }
            else
            {
                glColor3f(1,1,1);
                black=!black;

            }
            glBegin(GL_QUADS);
            glVertex2i(x,y);
            glVertex2i(x,y+100);
            glVertex2i(x+100,y+100);
            glVertex2i(x+100,y);
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
    glutInit( &argc , argv);
    glutInitDisplayMode(GLUT_SINGLE |GLUT_RGB);
    glutInitWindowSize(800,800);
    glutInitWindowPosition(0,0);
    glutCreateWindow("CHESS BOARD");
    glutDisplayFunc(myDisplay);

    myInit();
    glutMainLoop();
}
