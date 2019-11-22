#include <windows.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(0.1f,0.1f,0.1f);

    glVertex2f(0.2f,0.2f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(0.3f,0.4f);
    glVertex2f(0.4f,0.2f);
    glVertex2f(0.4f,0.2f);
    glVertex2f(0.2f,0.2f);

    glColor3f(0.2f,0.2f,0.2f);

    glVertex2f(0.2f,-0.2f);
    glVertex2f(0.3f,-0.4f);
    glVertex2f(0.3f,-0.4f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.4f,-0.2f);
    glVertex2f(0.2f,-0.2f);

    glEnd();
    glFlush();
}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Hello OpenGL");
    glClearColor(0.0f, 1.0f, 0.0f, 1.0f);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}


