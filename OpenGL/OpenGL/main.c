#include <GL/gl.h>
#include <GL/glut.h>

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
    glColor3f (0.0,0.3,0.0);

    glBegin(GL_POLYGON);
    glVertex2f (x1, -90);
    glVertex2f (x2, -90);
    glVertex2f (x2, 0);
    glVertex2f (x1, 0);
    glEnd();
}

void box(float x1, float y1, float x2, float y2)
{
    glColor3f (1.0,0.0,0.0);

    glBegin(GL_POLYGON);
    glVertex2f (x1, y1);
    glVertex2f (x2, y1);
    glVertex2f (x2, y2);
    glVertex2f (x1, y2);
    glEnd();

    glColor3f (0.0,2.0,0.0);

    glBegin(GL_POLYGON);
    glVertex2f (x1+10, y1+10);
    glVertex2f (x2-10, y1+10);
    glVertex2f (x2-10, y2-10);
    glVertex2f (x1+10, y2-10);
    glEnd();
}



void display(void)
{
    glClear (GL_COLOR_BUFFER_BIT);


    sky(-160, 160);
    grass(-160, 160);
    box(-10, -20, 20, 30);

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
