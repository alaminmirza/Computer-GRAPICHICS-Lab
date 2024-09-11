#include <windows.h>

#ifdef __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

#include <stdio.h>

float x_position_left = -90.0;
float x_position_right = 90.0;
int temp=0;
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glLoadIdentity();
    glBegin(GL_LINES);
        glColor3f(0.5, 0.5, 0.5);
        glVertex2f(0.0, -30);
        glVertex2f(0.0, 50);
    glEnd();

    glLoadIdentity();
    glTranslatef( x_position_left, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3f(0.5, 0.5, 0.5);
        glVertex2f(-10, 0.0);
        glVertex2f(10, 0.0);
        glVertex2f(10, 20);
        glVertex2f(-10, 20);
    glEnd();

    glLoadIdentity();
    glTranslatef( x_position_right, 0.0, 0.0);

    glBegin(GL_POLYGON);
        glColor3f(0.5, 0.5, 0.5);
        glVertex2f(-10, 0.0);
        glVertex2f(10, 0.0);
        glVertex2f(10, 20);
        glVertex2f(-10, 20);
    glEnd();

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

    if (!temp)
    {
        x_position_left += 0.50;
        x_position_right -= 0.50;

        if(x_position_left > -10 && x_position_right < 10)
        {
            temp=1;
        }
    }

    else
    {
        x_position_left -= 0.50;
        x_position_right += 0.50;

        if(x_position_left < -90 && x_position_right > 90 )
        {
            temp=0;
        }
    }
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
