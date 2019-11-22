#include <windows.h>
#include <GL/glut.h>
using namespace std;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(0.1f,0.1f,0.1f);

    double ax,bx,cx,dx,ay,by,cy,dy;

    glVertex2f(0.0f,0.0f);
    glVertex2f(-0.2f,0.0f);
    glVertex2f(-0.2f,0.0f);
    glVertex2f(-0.2f,0.2f);
    glVertex2f(-0.2f,0.2f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.2f,0.0f);
    glVertex2f(0.0f,0.0f);

    ax=2*0.2f;
    ay=2*0.0f;
    bx=2*0.2f;
    by=2*0.2f;
    cx=-2*0.2f;
    cy=2*0.2f;
    dx=-2*0.2f;
    dy=2*0.0f;

    glVertex2f(0.0f,0.0f);
    glVertex2f(ax,ay);
    glVertex2f(ax,ay);
    glVertex2f(bx,by);
    glVertex2f(bx,by);
    glVertex2f(cx,cy);
    glVertex2f(cx,cy);
    glVertex2f(dx,dy);
    glVertex2f(dx,dy);
    glVertex2f(0.0f,0.0f);



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

