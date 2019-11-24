#include <windows.h>
#include <GL/glut.h>
#include <math.h>
using namespace std;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POINTS);


    glColor3f(0.1f,0.1f,0.1f);

   double x = 0.6f,y=0.0f;

   
   glVertex2f(x,y);

   double ax = x*cos(10*180/3.1416)-y*sin(10*180/3.1416);   //Redian to degree
   double ay = x*sin(10*180/3.1416)+y*cos(10*180/3.1416);

 
   glVertex2f(ax,ay);

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


