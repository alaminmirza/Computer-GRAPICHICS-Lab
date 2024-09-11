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
    glVertex2f (-160, -15);
    glVertex2f (160, -15);
    glColor3f (0.1, 0.6, 1.0);
    glVertex2f (160, 120);
    glVertex2f (-160, 120);
    glEnd();

            
            /* Grass */

    glColor3f(0.3, 1.0, 0.4);
    glBegin(GL_POLYGON);
    glVertex2f (-160, -120);
    glVertex2f (160, -120);
    glColor3f(0.8,1.0,0);
    glVertex2f (160, -15);
    glVertex2f (-160, -15);
    glEnd();


            /* Base */
    
    glColor3f (0.2,0.2,0.2);
    glBegin(GL_POLYGON);
    glVertex2f (-160, -10);
    glVertex2f (160, -10);
    glVertex2f (160, -15);
    glVertex2f (-160, -15);
    glEnd();


            /* Building One*/

    glColor3f (0.9,0.5,0.1);    // Building Front
    glBegin(GL_POLYGON);
    glVertex2f (-150, -15);
    glVertex2f (-90, -15);
    glVertex2f (-90, 70);
    glVertex2f (-150, 70);
    glEnd();

    glColor3f (0.8,0.4,0.3);    // Building Side
    glBegin(GL_POLYGON);
    glVertex2f (-90, -15);
    glVertex2f (-75, -10);
    glVertex2f (-75, 60);
    glVertex2f (-90, 70);
    glEnd();

    glColor3f (0.0,0.0,0.0);    // Building Window Row 1
    glBegin(GL_POLYGON);
    glVertex2f (-145, -12);
    glVertex2f (-122.5, -12);
    glVertex2f (-122.5, 10);
    glVertex2f (-145, 10);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-117.5, -12);
    glVertex2f (-95, -12);
    glVertex2f (-95, 10);
    glVertex2f (-117.5, 10);
    glEnd();

    glBegin(GL_POLYGON);        // Building Window Row 2
    glVertex2f (-145, 15);
    glVertex2f (-122.5, 15);
    glVertex2f (-122.5, 37);
    glVertex2f (-145, 37);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-117.5, 15);
    glVertex2f (-95, 15);
    glVertex2f (-95, 37);
    glVertex2f (-117.5, 37);
    glEnd();
    
    glBegin(GL_POLYGON);        // Building Window Row 3
    glVertex2f (-145, 42);
    glVertex2f (-122.5, 42);
    glVertex2f (-122.5, 64);
    glVertex2f (-145, 64);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f (-117.5, 42);
    glVertex2f (-95, 42);
    glVertex2f (-95, 64);
    glVertex2f (-117.5, 64);
    glEnd();


            /* Building Two*/
    
    glColor3f (0.9, 0.3, 0.7);  // Building Front
    glBegin(GL_POLYGON);
    glVertex2f (-70, -15);
    glVertex2f (10, -15);
    glVertex2f (10, 96);
    glVertex2f (-70, 96);
    glEnd();

    glColor3f (0.6,0.2,0.8);    // Building Side
    glBegin(GL_POLYGON);
    glVertex2f (10, -15);
    glVertex2f (32.5, -10);
    glVertex2f (32.5, 86);
    glVertex2f (10, 96);
    glEnd();
    
    glColor3f (0.0,0.0,0.0);    // Building Window Row 1
    glBegin(GL_POLYGON);
    glVertex2f (-65, -12);
    glVertex2f (-32, -12);
    glVertex2f (-32, 10);
    glVertex2f (-65, 10);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f (-27, -12);
    glVertex2f (6, -12);
    glVertex2f (6, 10);
    glVertex2f (-27, 10);
    glEnd();
    
    glBegin(GL_POLYGON);        // Building Window Row 2
    glVertex2f (-65, 15);
    glVertex2f (-32, 15);
    glVertex2f (-32, 37);
    glVertex2f (-65, 37);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f (-27, 15);
    glVertex2f (6, 15);
    glVertex2f (6, 37);
    glVertex2f (-27, 37);
    glEnd();
    
    glBegin(GL_POLYGON);        // Building Window Row 3
    glVertex2f (-65, 42);
    glVertex2f (-32, 42);
    glVertex2f (-32, 64);
    glVertex2f (-65, 64);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f (-27, 42);
    glVertex2f (6, 42);
    glVertex2f (6, 64);
    glVertex2f (-27, 64);
    glEnd();
    
    glBegin(GL_POLYGON);        // Building Window Row 3
    glVertex2f (-65, 69);
    glVertex2f (-32, 69);
    glVertex2f (-32, 91);
    glVertex2f (-65, 91);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f (-27, 69);
    glVertex2f (6, 69);
    glVertex2f (6, 91);
    glVertex2f (-27, 91);
    glEnd();
    

            /* Building Three*/
    
    glColor3f (0.0,4.0,1.0);    // Building Front
    glBegin(GL_POLYGON);
    glVertex2f (45, -15);
    glVertex2f (105, -15);
    glVertex2f (105, 42);
    glVertex2f (45, 42);
    glEnd();
    
    glColor3f (0.0,0.3,0.6);    // Building Side
    glBegin(GL_POLYGON);
    glVertex2f (105, -15);
    glVertex2f (115, -10);
    glVertex2f (115, 32);
    glVertex2f (105, 42);
    glEnd();
    
    glColor3f (0.0,0.0,0.0);    // Building Window Row 1
    glBegin(GL_POLYGON);
    glVertex2f (50, -12);
    glVertex2f (72.5, -12);
    glVertex2f (72.5, 10);
    glVertex2f (50, 10);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f (77.5, -12);
    glVertex2f (100, -12);
    glVertex2f (100, 10);
    glVertex2f (77.5, 10);
    glEnd();
    
    glBegin(GL_POLYGON);        // Building Window Row 2
    glVertex2f (50, 15);
    glVertex2f (72.5, 15);
    glVertex2f (72.5, 37);
    glVertex2f (50, 37);
    glEnd();
    
    glBegin(GL_POLYGON);
    glVertex2f (77.5, 15);
    glVertex2f (100, 15);
    glVertex2f (100, 37);
    glVertex2f (77.5, 37);
    glEnd();


            /* Road */

    glColor3f (0.6,0.6,0.6);
    glBegin(GL_POLYGON);
    glVertex2f (-160, -60);
    glVertex2f (160, -60);
    glColor3f (0.3,0.3,0.3);
    glVertex2f (160, -15);
    glVertex2f (-160, -15);
    glEnd();
    
    glColor3f (1.0,1.0,1.0);    // White Road Line
    glLineWidth(10);
    glBegin(GL_LINES);
    glVertex2f (-160, -35.5);
    glVertex2f (-120, -35.5);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f (-110, -35.5);
    glVertex2f (-70, -35.5);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f (-60, -35.5);
    glVertex2f (-20, -35.5);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f (-10, -35.5);
    glVertex2f (30, -35.5);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f (40, -35.5);
    glVertex2f (80, -35.5);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f (90, -35.5);
    glVertex2f (130, -35.5);
    glEnd();
    
    glBegin(GL_LINES);
    glVertex2f (140, -35.5);
    glVertex2f (160, -35.5);
    glEnd();
    
    glColor3f (0.0,0.0,0.0);    // Road Borders
    glLineWidth(4);
    glBegin(GL_LINES);
    glVertex2f (-160, -15.5);
    glVertex2f (160, -15.5);
    glEnd();
    
    glLineWidth(6);
    glBegin(GL_LINES);
    glVertex2f (-160, -60);
    glVertex2f (160, -60);
    glEnd();

    /* don't wait!
    * start processing buffered OpenGL routines */

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