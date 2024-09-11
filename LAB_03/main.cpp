#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */
 //SKY
    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex3f (-160, -15, 0.0);
    glVertex3f (160, -15, 0.0);
    glColor3f (0.1, 0.6, 1.0);
    glVertex3f (160, 120, 0.0);
    glVertex3f (-160, 120, 0.0);
    glEnd();

 //GRASS
    glColor3f(0.1, 0.8, 0.3);
    glBegin(GL_POLYGON);
    glVertex3f (-160, -120, 0.0);
    glVertex3f (160, -120, 0.0);
    //glColor3f(0.8,1.0,0.0);
    glVertex3f (160, -15, 0.0);
    glVertex3f (-160, -15, 0.0);
    glEnd();

//WATER
    glColor3f (0.2, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-160, -50);
    glVertex2f (160, -50);
    glColor3f (0.1, 0.5, 0.8);
    glVertex2f (160, 20);
    glVertex2f (-160, 20);
    glEnd();

//BUILDING 01
    glColor3f (0.9,0.5,0.1);
    glBegin(GL_POLYGON);
    glVertex2f (-150, 20);
    glVertex2f (-100, 20);
    glVertex2f (-100, 70);
    glVertex2f (-150, 70);
    glEnd();

//BUILDING SIDE
    glColor3f (0.8,0.4,0.3);
    glBegin(GL_POLYGON);
    glVertex2f (-100, 20);
    glVertex2f (-90, 20);
    glVertex2f (-90, 65);
    glVertex2f (-100, 70);
    glEnd();


    glColor3f (0.0,0.0,0.0);    // Building Window Row 1
    glBegin(GL_POLYGON);
    glVertex2f (-145, 50);
    glVertex2f (-130, 50);
    glVertex2f (-130, 60);
    glVertex2f (-145, 60);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-120, 50);
    glVertex2f (-105, 50);
    glVertex2f (-105, 60);
    glVertex2f (-120, 60);
    glEnd();

    glColor3f (0.0,0.0,0.0);    // Building Window Row 2
    glBegin(GL_POLYGON);
    glVertex2f (-145, 30);
    glVertex2f (-130, 30);
    glVertex2f (-130, 40);
    glVertex2f (-145, 40);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-120, 30);
    glVertex2f (-105, 30);
    glVertex2f (-105, 40);
    glVertex2f (-120, 40);
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
    glOrtho(-160, 160, -120, 120, -1.0, 1.0);
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
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("HOUSE");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
