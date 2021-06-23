#include <windows.h>
#include <GL/glut.h>

void display()
{
    glClearColor(0.0f, 0.0f,0.0f, 0.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);
	glPointSize(8.0);

	glBegin(GL_LINES);              // Each set of 4 vertices form a quad
	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(-0.8f, -0.4f);
	glVertex2f(-0.55f, 0.4f);     // the left line of A

	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.55f, 0.4f);
	glVertex2f(-0.3f, -0.4f);   // the right line of A

	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.68f, -0.0f);    // the - line of A
	glVertex2f(-0.42f, -0.0f);

	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, 0.4f);      //| line for I
	glVertex2f(-0.15f, -0.4f);

	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.20f, 0.4f);      // upper line for cap I
	glVertex2f(-0.10f, 0.4f);

	glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-0.20f, -0.4f);  // lower line for cap I
	glVertex2f(-0.10f, -0.4f);
	glEnd();

	glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.1f, 0.4f);
	glVertex2f(0.1f, -0.35f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.15f, -0.4f);
	glVertex2f(0.45f, -0.4f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.5f, 0.4f);
	glVertex2f(0.5f, -0.35f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.1f, -0.35f);
	glVertex2f(0.12f, -0.375f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.12f, -0.375f);
	glVertex2f(0.15f, -0.4f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.45f, -0.4f);
	glVertex2f(0.475f, -0.375f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.475f, -0.375f);
	glVertex2f(0.5f, -0.35f);
    glEnd();

    glBegin(GL_LINES);
	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.62f, 0.4f);
	glVertex2f(0.62f, -0.4f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.62f, 0.4f);
	glVertex2f(0.87f, 0.4f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.62f, 0.0f);
	glVertex2f(0.87f, 0.0f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.62f, -0.4f);
	glVertex2f(0.87f, -0.4f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.92f, 0.35f);
	glVertex2f(0.92f, 0.05f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.92f, -0.35f);
	glVertex2f(0.92f, -0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.87f, 0.4f);
	glVertex2f(0.90f, 0.375f);

    glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.90f, 0.375f);
	glVertex2f(0.92f, 0.35f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.87f, 0.0f);
	glVertex2f(0.89f, -0.025f);

    glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.89f, -0.025f);
	glVertex2f(0.92f, -0.05f);

	glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.87f, 0.0f);
	glVertex2f(0.89f, 0.025f);

    glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.89f, 0.025f);
	glVertex2f(0.92f, 0.05f);

    glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.87f, -0.4f);
	glVertex2f(0.89f, -0.375f);

    glColor3f(1.0f, 0.0f, 0.0f);   // Red
	glVertex2f(0.89f, -0.375f);
	glVertex2f(0.92f, -0.35f);

	glEnd();

	glFlush();
}

int main(int argc, char** argv)
{
	glutInit(&argc, argv);                 // Initialize GLUT
	glutCreateWindow("AIUB"); // Create a window with the given title
	glutInitWindowSize(640,640);   // Set the window's initial width & height
	glutDisplayFunc(display); // Register display callback handler for window re-paint
	glutMainLoop();           // Enter the event-processing loop
	return 0;
}
