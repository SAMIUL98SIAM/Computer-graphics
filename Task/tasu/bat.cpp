#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h

/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */
void display() {
	glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
	glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
	glLineWidth(2.5);
	// Draw a Red 1x1 Square centered at origin

	//___________________________________________________________right side start________________________________________

	glBegin(GL_POLYGON);            //head box
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.0f, 0.3f);
	glVertex2f(0.03f, 0.3f);
	glVertex2f(0.03f, 0.5f);
	glVertex2f(0.0f, 0.5f);
	glEnd();

    glBegin(GL_POLYGON);            // ear
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.03f, 0.3f);
	glVertex2f(0.08f, 0.3f);
	glVertex2f(0.08f, 0.4f);
	glVertex2f(0.055f, 0.65f);
	glVertex2f(0.03f, 0.5f);
	glEnd();

    glBegin(GL_POLYGON);            // 3rd box
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(0.08f, 0.3f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.3f, 0.4f);
    glVertex2f(0.08f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);            // 4th box
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.3f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.4f, 0.75f);
    glVertex2f(0.375f, 0.55f);
    glVertex2f(0.34f, 0.5f);
    glVertex2f(0.3f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 1
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.95f, 0.75f);
    glVertex2f(0.4f, 0.75f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 2
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.765f, 0.4f);
    glVertex2f(0.78f, 0.5f);
    glVertex2f(0.85f, 0.68f);
    glVertex2f(0.95f, 0.75f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 3
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(0.8f, 0.015f);
    glVertex2f(0.75f, 0.3f);
    glVertex2f(0.35f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 0
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, 0.0f);
    glVertex2f(0.1f, -0.08f);
    glVertex2f(0.25f, 0.075f);
    glVertex2f(0.4f, 0.15f);
    glVertex2f(0.4f, 0.3f);
    glVertex2f(0.0f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);            // tail
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.03f, -0.5f);
    glVertex2f(0.15f, -0.08f);
    glVertex2f(0.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);            // white retouch on tail
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.0f, -0.7f);
    glVertex2f(0.08f, -0.3f);
    glVertex2f(0.15f, -0.08f);
	glEnd();

	glBegin(GL_POLYGON);            // tail
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.15f, -0.08f);
    glVertex2f(0.2f, -0.01f);//next
    glVertex2f(0.1f, 0.2f);
    glVertex2f(0.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, -0.01f);
    glVertex2f(0.3f, 0.015f);//next
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.1f, 0.2f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.2f, 0.00f);
    glVertex2f(0.5f, 0.02f);
    glVertex2f(0.8f, 0.015f);
    glVertex2f(0.5f, 0.2f);
    glVertex2f(0.1f, 0.2f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(0.35f, 0.00f);
    glVertex2f(0.5f, 0.02f);
    glVertex2f(0.8f, 0.015f);
    glVertex2f(0.1f, 0.3f);
    glVertex2f(0.1f, -0.1f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(0.73f, 0.00f);
    glVertex2f(0.8f, 0.00f);
    glVertex2f(0.8f, 0.3f);
	glVertex2f(0.75f, 0.3f);
	glEnd();



	// ______________________________________________________right side end ______________________________________

	glBegin(GL_POLYGON);            //head box
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.0f, 0.3f);
	glVertex2f(-0.03f, 0.3f);
	glVertex2f(-0.03f, 0.5f);
	glVertex2f(-0.0f, 0.5f);
	glEnd();

    glBegin(GL_POLYGON);            // ear
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.03f, 0.3f);
	glVertex2f(-0.08f, 0.3f);
	glVertex2f(-0.08f, 0.4f);
	glVertex2f(-0.055f, 0.65f);
	glVertex2f(-0.03f, 0.5f);
	glEnd();

    glBegin(GL_POLYGON);            // 3rd box
	glColor3f(0.0f, 0.0f, 0.0f);
	glVertex2f(-0.08f, 0.3f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.3f, 0.4f);
    glVertex2f(-0.08f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);            // 4th box
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.3f, 0.3f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.4f, 0.75f);
    glVertex2f(-0.375f, 0.55f);
    glVertex2f(-0.34f, 0.5f);
    glVertex2f(-0.3f, 0.4f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 1
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.95f, 0.75f);
    glVertex2f(-0.4f, 0.75f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 2
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.765f, 0.4f);
    glVertex2f(-0.78f, 0.5f);
    glVertex2f(-0.85f, 0.68f);
    glVertex2f(-0.95f, 0.75f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 3
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.4f, 0.15f);
    glVertex2f(-0.8f, 0.015f);
    glVertex2f(-0.75f, 0.3f);
    glVertex2f(-0.35f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);            // wing 0
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.0f, 0.0f);
    glVertex2f(-0.1f, -0.08f);
    glVertex2f(-0.25f, 0.075f);
    glVertex2f(-0.4f, 0.15f);
    glVertex2f(-0.4f, 0.3f);
    glVertex2f(-0.0f, 0.3f);
	glEnd();

	glBegin(GL_POLYGON);            // tail
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.0f, -0.7f);
    glVertex2f(-0.03f, -0.5f);
    glVertex2f(-0.15f, -0.08f);
    glVertex2f(-0.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);            // white retouch on tail
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.0f, -0.7f);
    glVertex2f(-0.08f, -0.3f);
    glVertex2f(-0.15f, -0.08f);
	glEnd();

	glBegin(GL_POLYGON);            // tail
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.15f, -0.08f);
    glVertex2f(-0.2f, -0.01f);//next
    glVertex2f(-0.1f, 0.2f);
    glVertex2f(-0.0f, 0.0f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, -0.01f);
    glVertex2f(-0.3f, 0.015f);//next
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.2f, 0.00f);
    glVertex2f(-0.5f, 0.02f);
    glVertex2f(-0.8f, 0.015f);
    glVertex2f(-0.5f, 0.2f);
    glVertex2f(-0.1f, 0.2f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(0.0f, 0.0f, 0.0f);
    glVertex2f(-0.35f, 0.00f);
    glVertex2f(-0.5f, 0.02f);
    glVertex2f(-0.8f, 0.015f);
    glVertex2f(-0.1f, 0.3f);
    glVertex2f(-0.1f, -0.1f);
	glEnd();

	glBegin(GL_POLYGON);            // tail ______________NEW______________
	glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-0.73f, 0.00f);
    glVertex2f(-0.8f, 0.00f);
    glVertex2f(-0.8f, 0.3f);
	glVertex2f(-0.75f, 0.3f);
	glEnd();

	glFlush();  // Render now
}

/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(1200, 600);
    glutInitWindowPosition(100, 0);
    glutCreateWindow("Batman");
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}


