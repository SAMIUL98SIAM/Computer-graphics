#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);



    glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	//glVertex2f(0.0f, -0.25f);
	glVertex2f(-0.2f, -0.2f);
	glVertex2f(-0.4f, -0.0f);
	glVertex2f(-0.8f, -0.0f);
	glVertex2f(-0.6f, -0.4f);
	glVertex2f(-0.6f, -0.65f);
	glVertex2f(-0.5f, -0.65f);
	glVertex2f(-0.2f, -0.7f);
	glVertex2f(-0.0f, -1.0f);

	glEnd();

	 glBegin(GL_POLYGON);
	 glVertex2f(0.0f, -0.2f);
	glVertex2f(0.0f, -1.0f);
    glVertex2f(0.2f, -0.7f);
    glVertex2f(0.5f, -0.65f);
    glVertex2f(0.6f, -0.65f);
    glVertex2f(0.6f, -0.4f);
    glVertex2f(0.8f, 0.0f);
    glVertex2f(0.4f, 0.0f);
    glVertex2f(0.2f, -0.2f);
	glEnd();

	 glBegin(GL_TRIANGLES);
	 glVertex2f(-0.2f, -0.2f);
	glVertex2f(0.0f, -1.0f);
    glVertex2f(0.0f, -0.2f);
	glEnd();

	 glBegin(GL_TRIANGLES);
	 glColor3ub(255,255,255);
	 glVertex2f(0.4f, 0.0f);
	 glVertex2f(0.2f, -0.2f);
     glVertex2f(0.0f, -0.2f);
	 glEnd();

	  glBegin(GL_TRIANGLES);
	 glColor3ub(0,0,0);
	 glVertex2f(-0.1f, -0.2f);
	 glVertex2f(0.0f, -0.2f);
	 glVertex2f(-0.1f, -0.0f);

	 glEnd();

	   glBegin(GL_TRIANGLES);
	 glColor3ub(0,0,0);
	 glVertex2f(0.0f, -0.2f);
	 glVertex2f(0.1f, -0.2f);
	 glVertex2f(0.1f, -0.0f);

	 glEnd();

	  glBegin(GL_TRIANGLES);
	 glColor3ub(0,0,0);
	 glVertex2f(-0.5f, -0.5f);
	 glVertex2f(0.0f, -0.15f);
	 glVertex2f(0.5f, -0.5f);


	 glEnd();
	glFlush();  // Render now
}


int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("OpenGL Setup Test"); // Create a window with the given title
	glutInitWindowSize(660, 660);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
