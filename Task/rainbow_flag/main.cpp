#include <windows.h>
#include <GL/glut.h>

void display() {
	glClearColor(0.0f, 0.0f, 0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)

    glBegin(GL_POLYGON);
	glColor3ub(255,0,0);
	glVertex2f(-0.6f, 0.7f);
	glVertex2f(-0.6f, 0.6f);
	glVertex2f(0.6f, 0.6f);
	glVertex2f(0.6f, 0.7f);

	glEnd();

	 glBegin(GL_POLYGON);
	glColor3ub(255,100,0);
	glVertex2f(-0.6f, 0.6f);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(0.6f, 0.5f);
	glVertex2f(0.6f, 0.6f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(75,0,130);
	glVertex2f(-0.6f, 0.5f);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(0.6f, 0.4f);
	glVertex2f(0.6f, 0.5f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,100,0);
	glVertex2f(-0.6f, 0.4f);
	glVertex2f(-0.6f, 0.3f);
	glVertex2f(0.6f, 0.3f);
	glVertex2f(0.6f, 0.4f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255,255,0);
	glVertex2f(-0.6f, 0.3f);
	glVertex2f(-0.6f, 0.2f);
	glVertex2f(0.6f, 0.2f);
	glVertex2f(0.6f, 0.3f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(0,0,255);
	glVertex2f(-0.6f, 0.2f);
	glVertex2f(-0.6f, 0.1f);
	glVertex2f(0.6f, 0.1f);
	glVertex2f(0.6f, 0.2f);

	glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(138,43,226);
	glVertex2f(-0.6f, 0.1f);
	glVertex2f(-0.6f, 0.0f);
	glVertex2f(0.6f, 0.0f);
	glVertex2f(0.6f, 0.1f);

	glEnd();

	glFlush();  // Render now
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("Rainbow Flag"); // Create a window with the given title
	glutInitWindowSize(320, 320);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
