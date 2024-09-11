#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */
 //roof
   glColor3f (0.4, 1.0, 0);
    glBegin(GL_POLYGON);
        glVertex3f (-50, 40, 0.0);
        glVertex3f (50, 40,  0.0);
        glVertex3f (40, 60,  0.0);
        glVertex3f (-40, 60,  0.0);
    glEnd();

 //house
    //glColor3f (1.0, 1.0, 1.0);
    glColor3f (0.5, 1, 0.7);
    glBegin(GL_POLYGON);
        glVertex3f (-40, -40, 0.0);
        glVertex3f (40, -40,  0.0);
        glVertex3f (40, 40,  0.0);
        glVertex3f (-40, 40,  0.0);
    glEnd();


     //door
   glColor3f (1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-10, -40, 0.0);
        glVertex3f (10, -40,  0.0);
        glVertex3f (10, 10,  0.0);
        glVertex3f (-10, 10,  0.0);
    glEnd();

    //window
   glColor3f (0.5, 0, 0.9);
    glBegin(GL_POLYGON);
        glVertex3f (25, -10, 0.0);
        glVertex3f (35, -10,  0.0);
        glVertex3f (35, 10,  0.0);
        glVertex3f (25, 10,  0.0);
    glEnd();

    //Tree
        glColor3f (0.7, 0.3,0.1);
    glBegin(GL_POLYGON);
        glVertex3f (60, -30, 0.0);
        glVertex3f (80, -30, 0.0);
        glVertex3f (80, 50, 0.0);
        glVertex3f (60, 50, 0.0);
    glEnd();

    //leaf 1
         glColor3f (0.0, 0.7, 0.1);
     glBegin(GL_TRIANGLES);
        glVertex2f(40, 50);
        glVertex2f(100,50);
         glVertex2f(80,70);
    glEnd();

    //leaf 2
     glColor3f (0.0, 0.7, 0.1);
     glBegin(GL_TRIANGLES);
        glVertex2f(45, 60);
        glVertex2f(100,70);
         glVertex2f(80,100);
    glEnd();

    //leaf 3
     glColor3f (0.0, 0.7, 0.1);
     glBegin(GL_TRIANGLES);
        glVertex2f(50, 70);
        glVertex2f(100,80);
         glVertex2f(80,100);
    glEnd();


/*  don't wait!
 *  start processing buffered OpenGL routines
 */
    glFlush ();
}

void init (void)
{
/*  select clearing (background) color       */
    glClearColor (0.0, 0.0, 0.0, 0.0);

/*  initialize viewing values  */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-100, 100, -100, 100, -1.0, 1.0);
}

/*
 *  Declare initial window size, position, and display mode
 *  (single buffer and RGBA).  Open window with "hello"
 *  in its title bar.  Call initialization routines.
 *  Register callback function to display graphics.
 *  Enter main loop and process events.
 */
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (550, 550);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
