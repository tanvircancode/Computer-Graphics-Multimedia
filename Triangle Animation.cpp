#include<windows.h>
#include <GL/glut.h>
#include <bits/stdc++.h>
#include <stdio.h>
using namespace std;
float x1= 0.0f, y1= 0.0f, x2= 0.4f, y2= 0.0f, x3=0.2f, y3=0.4f;
int flag=1;
void idle()
{
    if(flag==1)
    {
        x1+=0.0001;
        x2+=0.0001;
        x3=(x1+x2)/2;
        if(x1>=1)
        {
            x1=-1.4,x2=-1, x3=(x1+x2)/2;
            flag=0;
        }
    }
    else
    {
        x1+=0.0001;
        x2+=0.0001;
        x3=(x1+x2)/2;
       // if(x2==0)
        //{
        //    glutPostRedisplay();
       // }
        flag=1;
    }
    glutPostRedisplay();

}




void display()
{
    //glClearColor(1,1,1,0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glPushMatrix();
    glColor3f(0.8,1.0,1.0);

    glBegin(GL_POLYGON); //Begin triangle coordinates
    //Triangle
    glVertex2f(x1, y1);
    glVertex2f(x2, y2);
    glVertex2f(x3, y3);
    glEnd(); //End triangle coordinates


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
