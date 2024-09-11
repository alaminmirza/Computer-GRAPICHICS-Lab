#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif
#include <cmath>
#include <math.h>
#include <stdio.h>

float x_position = -100;
//int state = 1;

void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius)
 {
     int i;
     int triangleAmount = 50;
     GLfloat twicePi = 2.0f * 3.1416;


     glBegin(GL_TRIANGLE_FAN);
        glVertex2f(x, y);
        for(i = 0; i <= triangleAmount; i++) {
                glVertex2f(x + (radius * cos(i * twicePi / triangleAmount)), y + (radius * sin(i * twicePi/ triangleAmount)));
        }
     glEnd();




 }
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    glTranslatef( x_position, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3f(0.5, 0.6, 1);
        glVertex2f(40, 30);
        glVertex2f(90, 30);
        glVertex2f(90, 50);
        glVertex2f(40, 50);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.5, 0.2, 0.8);
        glVertex2f(40, 50);
        glVertex2f(90, 50);
        glVertex2f(80, 70);
        glVertex2f(50, 70);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0, 0, 0);
        glVertex2f(64, 50);
        glVertex2f(66, 50);
        glVertex2f(66, 70);
        glVertex2f(64, 70);
    glEnd();

    glColor3f (0,0,0);
    drawFilledCircle(55, 28, 8);
    glColor3f (0,0,0);
    drawFilledCircle(75, 28, 8);

    glutSwapBuffers();
}

void reshape(int w, int h)
{
    glViewport(0, 0, w, h);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();

    gluOrtho2D(-100, 100, -100, 100);
    glMatrixMode(GL_MODELVIEW);
}

void initOpenGL()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
}

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60, timer, 0);

    x_position += 0.40;
}
int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(200, 100);
    glutCreateWindow("workshop window");

    initOpenGL();
    glutDisplayFunc(display);
    glutReshapeFunc(reshape);

    glutTimerFunc(0, timer, 0);
    //void glutTimerFunc(unsigned int numMilliseconds, functionCallback, value);
    glutMainLoop();


    return 0;


}
