
#include<cstdio>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846

#include <GL/gl.h>
#include <GL/glut.h>

void bird()
{
     // BODY
    glBegin(GL_POLYGON);
    glColor3ub(0,0,0 );

    glVertex2f(-0.5,0.15);
    //glVertex2f(-0.3,0.25);
    glVertex2f(-0.3,0.25);
    //glVertex2f(-0.1,0.15);
    glVertex2f(-0.1,0.15);
    glVertex2f(-0.3,0.09);

    glEnd();

    //WING ONE

    glBegin(GL_POLYGON);
    glVertex2f(-0.4,0.2);
    // glVertex2f(-0.4,0.3);
    glVertex2f(-0.4,0.3);
    // glVertex2f(-0.25,0.4);
    glVertex2f(-0.25,0.4);
    glVertex2f(-0.3,0.3);
    // glVertex2f(-0.3,0.3);
    glVertex2f(-0.35,0.2);
    glEnd();

    //WING TWO

    glBegin(GL_POLYGON);
    glVertex2f(-0.3,0.22);
    glVertex2f(-0.1,0.33);
//     glVertex2f(-0.1,0.33);
    //   glVertex2f(0.0,0.33);
    glVertex2f(0.0,0.33);
    // glVertex2f(-0.03,0.3);
    glVertex2f(-0.03,0.3);
    glVertex2f(-0.06,0.3);
    glEnd();

    //LIPE

    glBegin(GL_LINES);
    glColor3ub(0,0,0 );
    glVertex2f(-0.55,0.1);
    glVertex2f(-0.49,0.15);
    glVertex2f(-0.55,0.1);
    glVertex2f(-0.48,0.14);
    glVertex2f(-0.48,0.14);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.5,0.1);
    glVertex2f(-0.45,0.15);
    glEnd();

    //TAIL

    glLineWidth(9);
    glBegin(GL_LINES);
    glVertex2f(-0.15,0.15);
    glVertex2f(-0.08,0.15);
    glEnd();

    //EYE

    glPointSize(25.0);
    glTranslatef(-0.45f,0.18f,0);
    glBegin(GL_POINTS);
    glColor3ub(0,0,0 );
    glVertex2f(-0.0f, -0.0f);
    glEnd();
    glLoadIdentity();
    glTranslatef(-0.45f,0.18f,0);
    glPointSize(10.0);
    glBegin(GL_POINTS);
    glColor3ub(255,255,255 );
    glVertex2f(-0.0f, -0.0f);
    glEnd();

}

void pitcher()
{
    int triangleAmount = 20;
    GLfloat k=.0f; GLfloat l=-.4f;
    GLfloat radius =.2f;

	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(0, 0, 2);
		glVertex2f(k, l); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            k + (radius * cos(i *  twicePi / triangleAmount)),
			    l+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	glBegin(GL_POLYGON);
	glColor3ub(0,0,2);
	glVertex2f(-0.1f, -0.15f);
	glVertex2f(0.1f, -0.15f);
	glVertex2f(0.1f,-0.25f);
	glVertex2f(-0.1f, -0.25f);

    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub(0,0,2);
	glVertex2f(-0.12f, -0.10f);
	glVertex2f(0.12f, -0.10f);
	glVertex2f(0.11f,-0.15f);
	glVertex2f(-0.11f, -0.15f);

    glEnd();

}

void tree()
{

    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.87f, -0.3f);
	glVertex2f(0.85f, 0.0f);
	glVertex2f(1.0f, 0.0f);
	glVertex2f(1.0f,-0.85f);
	glVertex2f(0.85f, -0.85f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.87f, -0.3f);
	glVertex2f(0.70f, -0.2f);
	glVertex2f(0.70f, -0.15f);
	glVertex2f(0.8f,-0.17f);
    glVertex2f(0.87f, -0.2f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.70f, -0.2f);
	glVertex2f(0.70f, -0.15f);
	glVertex2f(0.50f, -0.17f);
	glVertex2f(0.50f,-0.2f);
    glEnd();

    glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.9f, -0.03f);
	glVertex2f(0.60f, 0.05f);
	glVertex2f(0.64f, 0.09f);
	glVertex2f(0.9f, 0.05f);
	glVertex2f(0.95f, -0.03f);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(0.75f, 0.07f);
	glVertex2f(0.70f, 0.13f);
	glVertex2f(0.58f, 0.20f);
	glVertex2f(0.65f, 0.17f);
	glVertex2f(0.79f, 0.09f);
	glVertex2f(0.85f, 0.0f);
    glEnd();

     glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(.95f,0.0f);
	glVertex2f(.92f,0.0f);
	glVertex2f(.85f,0.29f);
	glVertex2f(.90f,0.27f);
	glVertex2f(.91f,0.24f);
	glVertex2f(.99f,0.0f);
	//glVertex2f();


	 glBegin(GL_POLYGON);
	glColor3ub( 83,53,10. );
	glVertex2f(.96f,0.2f);
	glVertex2f(.97f,0.25f);
	glVertex2f(.99f,0.30f);
	glVertex2f(.96f,0.27f);
	glVertex2f(.97f,0.24f);
	glVertex2f(.96f,0.25f);
    glEnd();
}



void display()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    glClear(GL_COLOR_BUFFER_BIT);

    pitcher();
    bird();
    glLoadIdentity();
    tree();

    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(50, 50);
    glutCreateWindow("Basic Animation");
    glutDisplayFunc(display);

    glutMainLoop();
    return 0;
}
