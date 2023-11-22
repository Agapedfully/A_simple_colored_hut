#include <GL/glut.h>


void display() {
    glClear(GL_COLOR_BUFFER_BIT);

    // Draw the roof of the hut
  glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(-0.4, 0.2, 0.5);

    glColor3f(0.0, 1.0, 0.0); // Green
    glVertex3f(0, 1.0, 0);

    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(0.4, 0.2, 0.5);
  glEnd();


    // Draw the body of the hut
  glBegin(GL_POLYGON);
    glColor3f(1.0, 0.0, 0.0); // Red
    glVertex3f(-0.4, -0.6, 0.5);

    glColor3f(0.0, 1.0, 0.0); // Green
    glVertex3f(0.4, -0.6, 0);

    glColor3f(0.0, 0.0, 1.0); // Blue
    glVertex3f(0.4, 0.2, 0);

    glColor3f(1.0, 1.0, 1.0); // White
    glVertex3f(-0.4, 0.2, 0.5);
  glEnd();

  // Draw Borders
    glLineWidth(3.0);
    glBegin(GL_LINE_LOOP);
    // Red border (left side)
    glColor3f(1.0, 0.0, 0.0);
    glVertex3f(-0.4, -0.6, 0.5);
    glVertex3f(-0.4, 0.2, 0.5);
    glEnd();

    glBegin(GL_LINE_LOOP);
    // Green border (bottom side)
    glColor3f(0.0, 1.0, 0.0);
    glVertex3f(-0.4, -0.6, 0.5);
    glVertex3f(0.4, -0.6, 0);
    glEnd();

    glBegin(GL_LINE_LOOP);
    // Blue border (right side)
    glColor3f(0.0, 0.0, 1.0);
    glVertex3f(0.4, -0.6, 0);
    glVertex3f(0.4, 0.2, 0);
    glEnd();


    glFlush();
}


void reshape(int w, int h) {
    glViewport(0, 0, w, h);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(500, 500);
    glutCreateWindow("A Simple Coloured Hut");

    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glClearColor(0.0, 0.0, 0.0, 0.0); 

    glutMainLoop();
    return 0;
}