#include <GL/gl.h>
#include <GL/glut.h>
#include <cmath>
#include <math.h>


void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius)
{

    int i;
    int triangleAmount =50;
    GLfloat twicePi = 2.0f*3.1416;

    glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x,y);
        for(i=0; i<=triangleAmount; i++){
            glVertex2f(x+(radius*cos(i*twicePi/triangleAmount)),
                       y+(radius*sin(i*twicePi/triangleAmount)));
    }

    glEnd();
}

void sky(float x1, float x2)
{
    glColor3f (1.0, 1.0, 1.0);

    glBegin(GL_POLYGON);
    glVertex2f (x1, 0);
    glVertex2f (x2, 0);

    glColor3f (0.1, 0.6, 1.0);

    glVertex2f (x2, 90);
    glVertex2f (x1, 90);
    glEnd();
}

void grass(float x1, float x2)
{
    glColor3f (0.2,0.8,0.1);

    glBegin(GL_POLYGON);
    glVertex2f (x1, -90);
    glVertex2f (x2, -90);
    glVertex2f (x2, 0);
    glVertex2f (x1, 0);
    glEnd();
}

void road(float x1, float x2)
{
    glColor3f (0.5,0.5,0.5);

    glBegin(GL_POLYGON);
    glVertex2f (x1, -30);
    glVertex2f (x2, -30);
    glVertex2f (x2, 0);
    glVertex2f (x1, 0);
    glEnd();
}

void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);

    sky(-160, 160);                 //Sky
    grass(-160, 160);               //Grass
    road(-160, 160);

    glColor3f (0.9,0.5,0.0);        //Sun
    drawFilledCircle(-40, 70, 12);

    glColor3f (1.0,1.0,1.0);        //Cloud_01
    drawFilledCircle(40, 70, 12);
    glColor3f (0.8,0.8,0.8);
    drawFilledCircle(34, 66, 12);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(35, 65, 12);
    glColor3f (0.8,0.8,0.8);
    drawFilledCircle(48, 58, 15);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(49, 59, 15);
    glColor3f (0.8,0.8,0.8);
    drawFilledCircle(65, 65, 15);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(63, 67, 15);
    glColor3f (0.8,0.8,0.8);
    drawFilledCircle(53, 75, 10);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(53, 74, 10);

    glColor3f (0.8,0.8,0.8);        //Cloud_02
    drawFilledCircle(-90, 30, 10);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(-88, 30, 10);
    glColor3f (0.8,0.8,0.8);
    drawFilledCircle(-80, 27, 12);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(-81, 28, 11);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(-88, 35, 10);
    glColor3f (0.8,0.8,0.8);
    drawFilledCircle(-75, 39, 15);
    glColor3f (0.8,0.8,0.8);
    drawFilledCircle(-72, 37, 15);
    glColor3f (1.0,1.0,1.0);
    drawFilledCircle(-74, 38, 15);

    glFlush ();
}


void init (void)
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-160, 160, -90, 90, -1.0, 1.0);
}


int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 450);
    glutInitWindowPosition (150, 60);
    glutCreateWindow ("181400015");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}
