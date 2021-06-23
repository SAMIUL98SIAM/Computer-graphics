#include<cstdio>
#include <GL/gl.h>
#include <GL/glut.h>


GLfloat positionShip = 0.0f;
GLfloat positionBullet = 0.0f;
GLfloat positionDebris1 = 1.6f;
GLfloat positionDebris2 = 2.4f;
GLfloat positionDebris3 = 2.8f;
GLfloat positionDebris4 = 3.2f;
GLfloat speedBullet = 0.0f;
GLfloat speedDebris = -0.1f;
int flag1=0;


void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



void update(int value) {

    if(positionShip > 1.0)
    {
        positionShip = -1.0f;
    }
    else if(positionShip < -1.0)
    {
        positionShip = 1.0f;
    }
    else if(positionDebris1 < -2.4)
    {
        positionDebris1 = 1.6f;
    }
    else if(positionDebris2 < -1.0)
    {
        positionDebris2 = 1.6f;
    }
    else if(positionDebris3 < -1.0)
    {
        positionDebris3 = 1.6f;
    }
    else if(positionDebris4 < -1.0)
    {
        positionDebris4 = 1.6f;
    }

    positionBullet += speedBullet;
    positionDebris1 += speedDebris;
    positionDebris2 += speedDebris;
    positionDebris3 += speedDebris;
    positionDebris4 += speedDebris;

    if(positionBullet > 1.6f)
    {
        positionBullet = 0.0f;
        speedBullet= 0.0f;
        flag1=0;
    }

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}


void handleMouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON)
	{
		if (state == GLUT_DOWN)
		{
			speedBullet += 0.1f;
			printf("clicked at (%d, %d)\n", x, y);
		}
	}

	glutPostRedisplay();
}

void handleKeypress(unsigned char key, int x, int y) {

	switch (key) {

case 'a':
    positionShip = positionShip - 0.1f;

    break;
case 'd':
    positionShip = positionShip + 0.1f;

    break;
case 'w':
    speedBullet = 0.1f;
    flag1=1;
    break;


glutPostRedisplay();


	}
}


void display() {
       glClear(GL_COLOR_BUFFER_BIT);
       glLoadIdentity();



      glPushMatrix();
      glTranslatef(positionShip,0.0f, 0.0f);
       glBegin(GL_QUADS);
          glColor3f(1.0f, 2.0f, 2.0f);
          glVertex2f(-0.1f, -1.2f);
          glVertex2f( 0.1f, -1.2f);
          glVertex2f( 0.1f,  -0.8f);
          glVertex2f(-0.1f,  -0.8f);
       glEnd();
       glBegin(GL_TRIANGLES);
       glColor3f(2.0f, 1.0f, 0.0f);
       glVertex2f(-0.1f , -0.8f);
       glVertex2f(0.1f, -0.8f);
       glVertex2f(0.0f, -0.6f);
       glEnd();
       if(flag1==1)
       {
            glPopMatrix();

       }
        glPopMatrix();
       glTranslatef(0.0f,positionBullet, 0.0f);
       glBegin(GL_TRIANGLES);
       glColor3f(3.0f, 3.7f, 3.0f);
       glVertex2f(-0.05f , -0.6f);
       glVertex2f(0.05f, -0.6f);
       glVertex2f(0.0f, -0.5f);
       glEnd();
       glPopMatrix();
       glTranslatef(0.0f,positionDebris1, 0.0f);
       glBegin(GL_TRIANGLES);
       glColor3f(1.0f, 1.0f, 1.0f);
       glVertex2f(-0.4f , 1.7f);
       glVertex2f(-0.2f, 1.7f);
       glVertex2f(-0.3f, 1.5f);
       glEnd();
       glPopMatrix();
       glFlush();
}



int main(int argc, char** argv) {
   glutInit(&argc, argv);
   glutInitWindowSize(300, 300);
   glutInitWindowPosition(70, 70);
   glutCreateWindow("Moving Object");
   glutDisplayFunc(display);
   init();
   glutKeyboardFunc(handleKeypress);
   glutMouseFunc(handleMouse);
   glutTimerFunc(1000, update, 0);
   glutMainLoop();
   return 0;
}
