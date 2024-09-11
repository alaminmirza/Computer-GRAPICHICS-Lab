#include <GL/gl.h>
#include <GL/glut.h>

float x_position = 0.0;
int state = 1;


void display(void)
{
/*  clear all pixels  */
    glClear (GL_COLOR_BUFFER_BIT);

/*  draw white polygon (rectangle) with corners at
 *  (0.25, 0.25, 0.0) and (0.75, 0.75, 0.0)
 */

    glLoadIdentity();



     //sky
   glColor3f (1.0, 1.0, 1.0);
    glBegin(GL_POLYGON);
        glVertex3f (-100, 20, 0.0);
        glVertex3f (100, 20,  0.0);
        glColor3f (0.1, 0.6, 1.0);
        glVertex3f (100, 100,  0.0);
        glVertex3f (-100, 100,  0.0);
    glEnd();

    //building 1
   glColor3f (0.3, 0.4, 0.1);
    glBegin(GL_POLYGON);
        glVertex3f (-100, 20, 0.0);
        glVertex3f (-90, 20,  0.0);
        glVertex3f (-90, 48,  0.0);
        glVertex3f (-100, 48,  0.0);
    glEnd();







        //building 1 shedding
   glColor3f (0.3, 0.3, 0.1);
    glBegin(GL_POLYGON);
        glVertex3f (-90, 20, 0.0);
        glVertex3f (-87, 20,  0.0);
        glVertex3f (-87, 45,  0.0);
        glVertex3f (-90, 48,  0.0);
    glEnd();


    // bulding 1 window 1

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-98, 22, 0.0);
        glVertex3f (-93, 22,  0.0);
        glVertex3f (-93, 28,  0.0);
        glVertex3f (-98, 28,  0.0);
    glEnd();


    // bulding 1 window 2

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-98, 30, 0.0);
        glVertex3f (-93, 30,  0.0);
        glVertex3f (-93, 36,  0.0);
        glVertex3f (-98, 36,  0.0);
    glEnd();





        // bulding 1 window 3

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-98, 38, 0.0);
        glVertex3f (-93, 38,  0.0);
        glVertex3f (-93, 44,  0.0);
        glVertex3f (-98, 44,  0.0);
    glEnd();




        //building 2

   glColor3f (0.3, 0.4, 0.1);
    glBegin(GL_POLYGON);
        glVertex3f (-80, 20, 0.0);
        glVertex3f (-65, 20,  0.0);
        glVertex3f (-65, 53,  0.0);
        glVertex3f (-80, 53,  0.0);
    glEnd();

    //building 2 shedding
 glColor3f (0.3, 0.3, 0);
    glBegin(GL_POLYGON);
        glVertex3f (-65, 20, 0.0);
        glVertex3f (-62, 20,  0.0);
        glVertex3f (-62, 50,  0.0);
        glVertex3f (-65, 53,  0.0);
    glEnd();




        // bulding 2 window 1

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-78, 22, 0.0);
        glVertex3f (-74, 22,  0.0);
        glVertex3f (-74, 28,  0.0);
        glVertex3f (-78, 28,  0.0);
    glEnd();


            // bulding 2 window 2

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-78, 30, 0.0);
        glVertex3f (-74, 30,  0.0);
        glVertex3f (-74, 36,  0.0);
        glVertex3f (-78, 36,  0.0);
    glEnd();



        // bulding 2 window 3

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-78, 38, 0.0);
        glVertex3f (-74, 38,  0.0);
        glVertex3f (-74, 44,  0.0);
        glVertex3f (-78, 44,  0.0);
    glEnd();



        // bulding 2 window 4

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-78, 46, 0.0);
        glVertex3f (-74, 46,  0.0);
        glVertex3f (-74, 52,  0.0);
        glVertex3f (-78, 52,  0.0);
    glEnd();





            // bulding 2 window 5

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-72, 22, 0.0);
        glVertex3f (-68, 22,  0.0);
        glVertex3f (-68, 28,  0.0);
        glVertex3f (-72, 28,  0.0);
    glEnd();



                // bulding 2 window 6

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-72, 30, 0.0);
        glVertex3f (-68, 30,  0.0);
        glVertex3f (-68, 36,  0.0);
        glVertex3f (-72, 36,  0.0);
    glEnd();


                    // bulding 2 window 7

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-72, 38, 0.0);
        glVertex3f (-68, 38,  0.0);
        glVertex3f (-68, 44,  0.0);
        glVertex3f (-72, 44,  0.0);
    glEnd();





                        // bulding 2 window 8

       glColor3f (0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex3f (-72, 46, 0.0);
        glVertex3f (-68, 46,  0.0);
        glVertex3f (-68, 52,  0.0);
        glVertex3f (-72, 52,  0.0);
    glEnd();
















     //water
   glColor3f (0.2, 1, 1);
    glBegin(GL_POLYGON);
        glVertex3f (-100, -60, 0.0);
        glVertex3f (100, -60,  0.0);
        glColor3f (0.1, 0.5, 0.8);
        glVertex3f (100, 20,  0.0);
        glVertex3f (-100, 20,  0.0);
    glEnd();



    glLoadIdentity();
    glTranslatef( x_position, 0.0, 0.0);

        //boat
    glColor3f (0.3, 0, 0.1);
    glBegin(GL_POLYGON);
        glVertex3f (30, -20, 0.0);
        glVertex3f (50, -20,  0.0);
        glVertex3f (58, -10,  0.0);
        glVertex3f (20, -10,  0.0);
    glEnd();



            //boat 2
    glColor3f (0.6, 1, 1);
    glBegin(GL_POLYGON);
        glVertex3f (25, -10, 0.0);
        glVertex3f (53, -10,  0.0);
        glVertex3f (51, -5,  0.0);
        glVertex3f (27, -5,  0.0);
    glEnd();


               //boat 3
    glColor3f (0.9, 0.2, 0.2);
    glBegin(GL_POLYGON);
        glVertex3f (32, -5, 0.0);
        glVertex3f (41, -5,  0.0);
        glVertex3f (41, 0,  0.0);
        glVertex3f (32, 0,  0.0);
    glEnd();


                 //boat  window 1

    glColor3f (0.1, 0, 0);
    glBegin(GL_POLYGON);
        glVertex3f (27, -9, 0.0);
        glVertex3f (29, -9,  0.0);
        glVertex3f (29, -6,  0.0);
        glVertex3f (27, -6,  0.0);
    glEnd();


        //boat  window 2

    glColor3f (0.1, 0, 0);
    glBegin(GL_POLYGON);
        glVertex3f (32, -9, 0.0);
        glVertex3f (34, -9,  0.0);
        glVertex3f (34, -6,  0.0);
        glVertex3f (32, -6,  0.0);
    glEnd();





        //boat  window 3

    glColor3f (0.1, 0, 0);
    glBegin(GL_POLYGON);
        glVertex3f (38, -9, 0.0);
        glVertex3f (40, -9,  0.0);
        glVertex3f (40, -6,  0.0);
        glVertex3f (38, -6,  0.0);
    glEnd();





            //boat  window 4
    glColor3f (0.1, 0, 0);
    glBegin(GL_POLYGON);
        glVertex3f (44, -9, 0.0);
        glVertex3f (46, -9,  0.0);
        glVertex3f (46, -6,  0.0);
        glVertex3f (44, -6,  0.0);
    glEnd();









     glLoadIdentity();


    //Grass
   glColor3f (0.1, 0.9, 0.4);
    glBegin(GL_POLYGON);
        glVertex3f (-100, -100, 0.0);
        glVertex3f (100, -100,  0.0);
        glVertex3f (100, -60,  0.0);
        glVertex3f (-100, -60,  0.0);
    glEnd();



/*  don't wait!
 *  start processing buffered OpenGL routines
 */
    glFlush ();
    glutSwapBuffers();
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



    if(x_position>100){
            x_position=-150;

}


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
    glutInitWindowSize (1000, 1000);
    glutInitWindowPosition (100, 100);
    glutCreateWindow ("hello");
    init ();
    glutDisplayFunc(display);

    glutReshapeFunc(reshape);

    glutTimerFunc(0, timer, 0);




    glutMainLoop();
    return 0;   /* ISO C requires main to return int. */
}
