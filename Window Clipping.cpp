#include<windows.h>
#include<GL/glut.h>
#include<bits/stdc++.h>

using namespace std;

int n;
double a[50],b[50];

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_LINES);
    glColor3f(0.1f,0.0f,0.0f);

    glVertex2f(0.2f,0.2f);
    glVertex2f(0.2f,0.8f);
    glVertex2f(0.2f,0.8f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.8f,0.8f);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.8f,0.2f);
    glVertex2f(0.2f,0.2f);


    double x_min = 0.2f,x_max=0.8f,y_min=0.2f,y_max=0.8f,x,y;
    for(int i=0; i<2*n; i++)
    {
        x=a[i];
        y = b[i];

        x = x>x_max ? x_max : x;
        x = x<x_min ? x_min : x;

        y = y>y_max ? y_max : y;
        y= y<y_min ? y_min : y;
        glVertex2f(x,y);


    }
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    cin>>n;
    for(int i=0; i<2*n; i++)
    {
        cin>>a[i]>>b[i];
    }
    glutInit(&argc, argv);
    glutInitWindowSize(400, 300);
    glutInitWindowPosition(100, 200);
    glutCreateWindow("Square");
    glClearColor(1.1f, 1.5f, 0.9f, 1.5f);
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

/*

4
0.7 0.5
1.0 0.5
0.4 0.4
0.4 0.1
0.4 0.6
0.1 0.6
0.6 1.0
0.6 0.6

*/


