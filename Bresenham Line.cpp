#include<windows.h>
#include<GL/glut.h>
#include<bits/stdc++.h>

int a,b,c,d;

using namespace std;

void set_pixel(int x,int y)
{
    glColor3f(1.0f,1.0f,0.0f);
    glBegin(GL_POINTS);
    glVertex2i(x,y);
    glEnd();
    glFlush();
}

void bres(int x1,int y1,int x2,int y2)
{
    int dx=x2-x1, dy=y2-y1,d;
    d=2*dy-dx;
    set_pixel(x1,y1);
    while(y1<=y2 && x1<=x2)
    {
        if(d<0)
        {
            d = d + 2*dy;

        }
        else
        {
            d = d+2*(dy-dx);
            y1+=1;
        }
        x1+=1;
        // cout<<x1<<" "<<y1<<endl;
        set_pixel(x1,y1);

    }
}

void display()
{

    glClearColor(0.5,0.5,0.5,1);
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    glOrtho(-100,100,-100,100,-1,1);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    bres(10,20,80,100);
    glutSwapBuffers();

}

int main( int argc, char** argv )
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGBA | GLUT_DOUBLE);
    glutCreateWindow("Bresenham Line");
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

