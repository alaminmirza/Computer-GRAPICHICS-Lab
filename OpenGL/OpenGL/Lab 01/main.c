#include <GL/gl.h>
#include <GL/glut.h>

void display(void)
{

    /* clear all pixels */
    glClear (GL_COLOR_BUFFER_BIT);
    
    /* draw white polygon (rectangle) with corners at 
    * (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0) */


            /* Sky */

    glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f (-160, 0);
    glVertex2f (160, 0);
    glColor3f (0.1, 0.6, 1.0);
    glVertex2f (160, 120);
    glVertex2f (-160, 120);
    glEnd();


            /* Grass */

    glColor3f (0.0,0.3,0.0);
    glBegin(GL_POLYGON);
    glVertex2f (-160, -120);
    glVertex2f (160, -120);
    glVertex2f (160, 0);
    glVertex2f (-160, 0);
    glEnd();
    

            /* House */

    glColor3f (0.6, 0.3, 0.0);      // Front
    glBegin(GL_POLYGON);
    glVertex2f (-100, 6);
    glVertex2f (-100, -70);
    glVertex2f (20, -75);
    glVertex2f (20, 6);
    glEnd();

    glColor3f (0.65, 0.35, 0.0);    // Side
    glBegin(GL_POLYGON);
    glVertex2f (20, 6);
    glVertex2f (20, -75);
    glVertex2f (72, -65);
    glVertex2f (72, 9);
    glEnd();

    glColor3f (0.5,0.0,0.0);        // Door
    glBegin(GL_POLYGON);
    glVertex2f (-53, -27);
    glVertex2f (-53, -72);
    glVertex2f (-27, -73);
    glVertex2f (-27, -27);
    glEnd();

    glColor3f (0.7, 0.6, 0.0);      // Front Window 1
    glBegin(GL_POLYGON);
    glVertex2f (-90, -27);
    glVertex2f (-90, -45);
    glVertex2f (-64, -45);
    glVertex2f (-64, -27);
    glEnd();

    glColor3f (0.7, 0.6, 0.0);      // Side Window 2
    glBegin(GL_POLYGON);
    glVertex2f (10, -27);
    glVertex2f (10, -45);
    glVertex2f (-16, -45);
    glVertex2f (-16, -27);
    glEnd();

    glColor3f (0.35,0.0,0.0);       // Front Roof
    glBegin(GL_POLYGON);
    glVertex2f (-115, 6);
    glVertex2f (-85, 45);
    glVertex2f (50, 50);
    glVertex2f (20, 6);
    glEnd();

    glColor3f (0.45, 0.0, 0.0);     // Side Roof
    glBegin(GL_TRIANGLES);
    glVertex2f (20, 6);
    glVertex2f (78, 9);
    glVertex2f (50, 50);
    glEnd();

    glColor3f (0.68, 0.5, 0.0);     // Side Window
    glBegin(GL_POLYGON);
    glVertex2f (35, -25);
    glVertex2f (35, -46);
    glVertex2f (61, -42);
    glVertex2f (61, -25);
    glEnd();


            /* Tree */
    
    glColor3f (0.0, 0.50, 0.0);     // 1st Triangle
    glBegin(GL_TRIANGLES);
    glVertex2f (85, 30);
    glVertex2f (135, 30);
    glVertex2f (110, 90);
    glEnd();

    glBegin(GL_TRIANGLES);          // 2nd Triangle
    glVertex2f (85, 22);
    glVertex2f (135, 22);
    glVertex2f (110, 82);
    glEnd();

    glBegin(GL_TRIANGLES);          // 3rd Triangle
    glVertex2f (85, 6);
    glVertex2f (135, 6);
    glVertex2f (110, 66);
    glEnd();

    glColor3f (0.5, 0.2, 0.0);      // Tree Log
    glBegin(GL_POLYGON);
    glVertex2f (105, 6);
    glVertex2f (105, -75);
    glVertex2f (115, -75);
    glVertex2f (115, 6);
    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines
    */

    glFlush ();

}
void init (void)
{

    /* select clearing (background) color */
    glClearColor (0.0, 0.0, 0.0, 0.0);

    /* initialize viewing values */
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glOrtho(-160, 160, -120, 120, -1.0, 1.0);

}

/*
* Declare initial window size, position, and display mode
* (single buffer and RGBA). Open window with "hello"
* in its title bar. Call initialization routines.
* Register callback function to display graphics.
* Enter main loop and process events.
*/

int main(int argc, char** argv)
{

    glutInit(&argc, argv);
    glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize (800, 600);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("Home");
    init ();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;

    /* ISO C requires main to return int. */

}