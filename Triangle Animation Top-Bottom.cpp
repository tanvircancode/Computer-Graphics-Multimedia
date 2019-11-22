#include<windows.h>
#include<bits/stdc++.h>
#include<GL/glut.h>
#include <stdio.h>
using namespace std;

float x1=-0.2f,y1=0.6f,x2=0.2f,y2=0.6f,x3=0.0f,y3=1.0f;
int flag=1;

void idle()
{
    if(flag==1)
    {
        y1-=0.0001;
        y2-=0.0001;
        y3-=0.0001;
        if(y3<=-1)
        {
            y3=1.4f;
            y1=1;
            y2=1;
            flag=0;
        }
    }
    else
    {
        y1-=0.0001;
        y2-=0.0001;
        y3-=0.0001;
        flag=1;
    }
    glutPostRedisplay();
}


void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glLoadIdentity();
    glMatrixMode(GL_PROJECTION);
    glPushMatrix();
    glColor3f(0.8,1.0,1.0);

    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();

    glPopMatrix();
    glutSwapBuffers();
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



