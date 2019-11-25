#include<windows.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
using namespace std;

double x1=0.0f,y1=-0.6f,x2=-0.4f,y2=-1.0f,x3=0.4f,y3=-1.0f;
bool flag=1;

void idle()
{
    if(flag==1)
    {
        y1+=0.0001;
        y2+=0.0001;
        y3+=0.0001;
        if(y2>=1)
        {
            y1=-1.0f;
            y2=-1.4f;
            y3=-1.4f;
            flag=0;
        }
    }
    else
    {
        y1+=0.0001;
        y2+=0.0001;
        y3+=0.0001;
        flag=1;
    }
    glutPostRedisplay();

}

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glBegin(GL_POLYGON);
    glColor3f(0.1f,1.1f,1.0f);

    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);

    glutSwapBuffers();
    glEnd();
    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glClearColor(1.0f,1.0f, 1.0f, 1.0f);
    glutInitWindowSize(500, 500);
    glutCreateWindow("Animation");
    glutDisplayFunc(display);
    glutIdleFunc(idle);
    //glutTimerFunc(25,update,0);
    glutMainLoop();
    return 0;
}


