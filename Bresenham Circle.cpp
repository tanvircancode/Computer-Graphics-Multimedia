#include<windows.h>
#include<GL/glut.h>
#include<bits/stdc++.h>
using namespace std;


void plot(int x,int y)
{
   glBegin(GL_POINTS);
   glVertex2i(x,y);
   glVertex2i(y,x);
   glVertex2i(-x,y);
   glVertex2i(-y,x);
   glVertex2i(x,-y);
   glVertex2i(y,-x);
   glVertex2i(-x,-y);
   glVertex2i(-y,-x);
   glEnd();
}

void bres(int r)
{
    int x=0,y=r,d;
    d=3-2*r;
    plot(x,y);

    while(y>x)
    {
        if(d<0)
        {
             d+=4*x+6;
        }
        else
        {
            d+=4*(x-y)+10;
            y-=1;
        }
        x++;
        plot(x,y);
    }

}
void display()
{
    glClearColor(0.0f,0.2f,0.1f,1);
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(-100,100,-100,100,-1,1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    bres(50);
    glutSwapBuffers();
}


int main( int argc, char** argv )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("Bresenham Circle");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}
