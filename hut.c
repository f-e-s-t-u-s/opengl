#ifdef _APPLE_CC_
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

void display() {
  glClear(GL_COLOR_BUFFER_BIT);

  // (square)
  glBegin(GL_POLYGON);
    glColor3f(1,0,0); 
    glVertex3f(-0.8, -0.8, 0.0);
    glVertex3f(-0.8, -0.2, 0.0);
    glVertex3f(0.8, -0.2, 0.0);
    glVertex3f(0.8, -0.8, 0.0);
  glEnd();

  glBegin(GL_POLYGON);
    glColor3f(0,1,0); 
    glVertex3f(-0.8, -0.2, 0.0);
    glVertex3f(0.8, -0.2, 0.0);
    glVertex3f(0.0, 0.6, 0.0);
  glEnd();

//   roof (rectangle)
  glBegin(GL_POLYGON);
    glColor3f(0,0,1);
    glVertex3f(-0.9, -0.2, 0.0);
    glVertex3f(0.9, -0.2, 0.0);
    glVertex3f(0.0, 1.0, 0.0);
  glEnd();

  glFlush();
}

int main(int argc, char** argv) {
  glutInit(&argc, argv);
  glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

  glutInitWindowPosition(80, 80);
  glutInitWindowSize(800, 600);
  glutCreateWindow("Drawing a Hut");
  glutDisplayFunc(display);

  glutMainLoop();
  return 0;
}
