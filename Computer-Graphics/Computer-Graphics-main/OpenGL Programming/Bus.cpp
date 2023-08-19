#include<windows.h>
#include<GL/glut.h>
#include<math.h>

GLfloat t = 0;
GLfloat x = 0;
GLfloat y = 0;
int flag = 0;

void Draw()
{
    glClear(GL_COLOR_BUFFER_BIT);

    // background color
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2d(100.0,100.0);
    glVertex2d(100.0,-100.0);
    glVertex2d(-100.0,-100.0);
    glVertex2d(-100.0,100.0);
    glEnd();


    // Upper white color left
    glColor3f(224,255,255);
    glBegin(GL_QUADS);
    glVertex2d(17.0,100.0);
    glVertex2d(10.0, 20.0);
    glVertex2d(-100.0, 20.0);
    glVertex2d(-100.0,100.0);
    glEnd();


    // upper white right color
    glColor3f(224,255,255);
    glBegin(GL_QUADS);
    glVertex2d(100.0,100.0);
    glVertex2d(100.0, 20.0);
    glVertex2d(50.0, 20.0);
    glVertex2d(45.0,100.0);
    glEnd();



    // lower white color left

    glColor3f(224,255,255);
    glBegin(GL_QUADS);
    glVertex2d(1,-100.0);
    glVertex2d(5.0, -30.0);
    glVertex2d(-100.0, -30.0);
    glVertex2d(-100.0,-100.0);
    glEnd();


    // lower white right color
    glColor3f(224,255,255);
    glBegin(GL_QUADS);
    glVertex2d(100,-30.0);
    glVertex2d(100.0, -100.0);
    glVertex2d(55.0, -100.0);
    glVertex2d(53.0,-30.0);
    glEnd();


    // bottom left part building

    glPushMatrix();
    glColor3f(255, 0, 255);
    glTranslatef(-50,-70,0);
    glScalef(3.5, 2, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // building border bottom
    glPushMatrix();
    glColor3f(0, 0, 255);
    glTranslatef(-50,-90,0);
    glScalef(3.5, 0.1, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // middle top part building
    glPushMatrix();
    glColor3f(255, 0, 0);
    glTranslatef(-50,-46,0);
    glScalef(1.5, .3, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // middle top lower border building
    glPushMatrix();
    glColor3f(0, 0, 255);
    glTranslatef(-50,-49.5,0);
    glScalef(1.5, .05, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // middle top lower part box building
    glPushMatrix();
    glColor3f(255, 0, 0);
    glTranslatef(-50,-70.1,0);
    glScalef(1.5, 2, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // middle Door lower border building
    glPushMatrix();
    glColor3f(0, 0, 255);
    glTranslatef(-50,-86.0,0);
    glScalef(0.5, 0.4, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // middle Door Black lower border building
    glPushMatrix();
    glColor3f(0, 0,0);
    glTranslatef(-54,-86.0,0);
    glScalef(0.3, 0.4, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();


    // middle top left part building
    glPushMatrix();
    glColor3f(255, 0, 0);
    glTranslatef(-75.0,-53,0);
    glScalef(1, .3, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // middle top left lower border building
    glPushMatrix();
    glColor3f(0, 0, 255);
    glTranslatef(-75.0,-56.5,0);
    glScalef(1.0, .05, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();


    //middle top Right part building
    glPushMatrix();
    glColor3f(255, 0, 0);
    glTranslatef(-25.0,-53,0);
    glScalef(1, .3, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    //middle top Right lower border building
    glPushMatrix();
    glColor3f(0, 0, 255);
    glTranslatef(-25.0,-56.5,0);
    glScalef(1.0, .05, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // ***** window draw start ******

    // window right upper left
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-29.0,-65.5,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window right upper right
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-20.0,-65.5,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window right bottom left
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-29.0,-80.0,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window right bottom right
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-20.0,-80.0,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();


    // window middle upper left
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-56.0,-58.5,0);
    glScalef(0.26, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window middle upper right
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-45.0,-58.5,0);
    glScalef(0.26, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window middle bottom left
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-56.0,-72.0,0);
    glScalef(0.26, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window middle bottom right
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-45.0,-72.0,0);
    glScalef(0.26, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window left upper left
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-79.0,-65.5,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window left upper right
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-70.0,-65.5,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window left bottom left
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-79.0,-80.0,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();

    // window left bottom right
    glPushMatrix();
    glColor3f(0, 0, 0);
    glTranslatef(-70.0,-80.0,0);
    glScalef(0.2, .5, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();


    // ****** window draw end ******


    // ********** upper tree draw  start ******
    // tree upper side


    // root upper
    glPushMatrix();
    glColor3f(255, 0, 0);
    glTranslatef(77.0, 50.0,0);
    glScalef(0.2, 1.2, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();


    // root lower top part 1
    glPushMatrix();
    glColor3f(0, 255, 0);
    glTranslatef(77.0, 60.0,0);
    glScalef(2, 4, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 5, 0);
    glVertex3f(5, 0, 0);
    glVertex3f(-5, 0, 0);
    glEnd();
    glPopMatrix();

    // root lower top part 2
    glPushMatrix();
    glColor3f(0, 255, 0);
    glTranslatef(77.0, 66.0,0);
    glScalef(1.7, 4, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 5, 0);
    glVertex3f(5, 0, 0);
    glVertex3f(-5, 0, 0);
    glEnd();
    glPopMatrix();

    // root lower top part 3
    glPushMatrix();
    glColor3f(0, 255, 0);
    glTranslatef(77.0, 73.0,0);
    glScalef(1.5, 3.5, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 5, 0);
    glVertex3f(5, 0, 0);
    glVertex3f(-5, 0, 0);
    glEnd();
    glPopMatrix();



    // ********** upper tree draw End



    // Bus Stop make

    // bus stop upper part
    glColor3f(0,0,255);
    glBegin(GL_QUADS);
    glVertex2d(-10.0,95.0);
    glVertex2d(-15.0, 77.0);
    glVertex2d(-65.0, 77.0);
    glVertex2d(-60.0, 95.0);
    glEnd();

    // border upper part
    glColor3f(255,255,255);
    glBegin(GL_LINES);
    glVertex2d(-63.0, 83.0);
    glVertex2d(-18.0, 83.0);
    glEnd();

    glColor3f(255,255,255);
    glBegin(GL_LINES);
    glVertex2d(-18.0, 83.0);
    glVertex2d(-15.0, 77.0);
    glEnd();

    glColor3f(255,255,255);
    glBegin(GL_LINES);
    glVertex2d(-18.0, 83.0);
    glVertex2d(-14.0, 95.0);
    glEnd();

// Road Center Direection left to right

    glEnable(GL_LINE_STIPPLE);
    glLineStipple(3,0x00ff);
    glPushMatrix();
    glBegin(GL_LINES);
    glColor3f(255, 255, 255);
    glVertex2i(-100, 0);
    glVertex2i(100, 0);

    glEnd();
    glDisable(GL_LINE_STIPPLE);


    glPopMatrix();

    // Road Center Direection Bottom to UP
    glPushMatrix();
    glEnable(GL_LINE_STIPPLE);
    glLineStipple(3,0x00ff);
    glBegin(GL_LINES);
    glColor3f(255, 255, 255);
    glVertex2i(30, -100);
    glVertex2i(30, 100);

    glEnd();
    glDisable(GL_LINE_STIPPLE);
    glPopMatrix();


    // bus stop lower part

    glColor3f(0,0,255);
    glBegin(GL_QUADS);
    glVertex2d(-10.0,45.0);
    glVertex2d(-15.0, 27.0);
    glVertex2d(-65.0, 27.0);
    glVertex2d(-60.0, 45.0);
    glEnd();

    // border lower

    glColor3f(255,255,255);
    glBegin(GL_LINES);
    glVertex2d(-63.0, 31.0);
    glVertex2d(-18.0, 31.0);
    glEnd();


    glColor3f(255,255,255);
    glBegin(GL_LINES);
    glVertex2d(-18.0, 31.0);
    glVertex2d(-15.0, 27.0);
    glEnd();

    glColor3f(255,255,255);
    glBegin(GL_LINES);
    glVertex2d(-18.0, 31.0);
    glVertex2d(-14.0, 45.0);
    glEnd();

    // bus stop left side part
    glColor3f(0,0,255);
    glBegin(GL_QUADS);
    glVertex2d(-15.0,77.0);
    glVertex2d(-15.0, 45.0);
    glVertex2d(-19.0, 45.0);
    glVertex2d(-19.0, 77.0);
    glEnd();

    // bus stop right side part
    glColor3f(0,0,255);
    glBegin(GL_QUADS);
    glVertex2d(-59.0,77.0);
    glVertex2d(-59.0, 45.0);
    glVertex2d(-55.0, 45.0);
    glVertex2d(-55.0, 77.0);
    glEnd();

    // bus stop back side
    glColor3f(244,0,0);
    glBegin(GL_QUADS);
    glVertex2d(-55.0,67.0);
    glVertex2d(-55.0, 50.0);
    glVertex2d(-19.0, 50.0);
    glVertex2d(-19.0, 67.0);
    glEnd();

    // bus stop branch
    glColor3f(0,0,0);
    glBegin(GL_QUADS);
    glVertex2d(-50.0,57.0);
    glVertex2d(-53.0, 49.0);
    glVertex2d(-26.0, 49.0);
    glVertex2d(-22.0, 57.0);
    glEnd();

    // bus stop branch lage
    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-50.0, 49.0);
    glVertex2d(-50.0, 45.0);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-47.0, 49.0);
    glVertex2d(-47.0, 45.0);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-28.0, 49.0);
    glVertex2d(-28.0, 45.0);
    glEnd();


    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-31.0, 49.0);
    glVertex2d(-31.0, 45.0);
    glEnd();



    // Bus Make

    // bus middle
    glColor3f(244,0,0);
    glPushMatrix();
    glTranslatef(t, x, y);
    glPushMatrix();
    glBegin(GL_QUADS);
    glVertex2d(-100,50.0);
    glVertex2d(-50.0, 50.0);
    glVertex2d(-50.0, 10.0);
    glVertex2d(-100.0, 10.0);
    glEnd();
    glPopMatrix();


    // bus middle Lines  part...

    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-93.0, 30.0);
    glVertex2d(-93.0, 40.0);
    glEnd();


    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-85.0, 30.0);
    glVertex2d(-85.0, 40.0);
    glEnd();


    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-78.0, 30.0);
    glVertex2d(-78.0, 40.0);
    glEnd();


    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-70.0, 30.0);
    glVertex2d(-70.0, 40.0);
    glEnd();



    glColor3f(0,0,0);
    glBegin(GL_LINES);
    glVertex2d(-63.0, 30.0);
    glVertex2d(-63.0, 50.0);
    glEnd();




    // bus upper left big
    glColor3f(255,255, 0);
    glBegin(GL_QUADS);
    glVertex2d(-100.0,50.0);
    glVertex2d(-97.0, 58.0);
    glVertex2d(-53.0, 58.0);
    glVertex2d(-55.0, 50.0);
    glEnd();

    // bus upper left right
    glColor3f(255,255, 0);
    glBegin(GL_QUADS);
    glVertex2d(-53.0, 58.0);
    glVertex2d(-50.0, 50.0);
    glVertex2d(-53.0, 43.0);
    glVertex2d(-55.0, 50.0);
    glEnd();




    // bus upper left right
    glColor3f(255,255, 0);
    glBegin(GL_QUADS);
    glVertex2d(-53.0, 58.0);
    glVertex2d(-50.0, 50.0);
    glVertex2d(-53.0, 43.0);
    glVertex2d(-55.0, 50.0);
    glEnd();


    // Bus bottom left part

    glColor3f(255,255, 0);
    glBegin(GL_QUADS);
    glVertex2d(-100.0, 30.0);
    glVertex2d(-55.0, 30.0);
    glVertex2d(-55.0, -5.0);
    glVertex2d(-100.0, -5.0);
    glEnd();


    // Bus bottom right part

    glColor3f(255,255, 0);
    glBegin(GL_QUADS);
    glVertex2d(-55.0, 30.0);
    glVertex2d(-50.0, 35.0);
    glVertex2d(-50.0, 2.0);
    glVertex2d(-55.0, -5.0);

    glEnd();



    // wheel left
    glColor3f(255,0,0);
    glBegin(GL_POLYGON);
    int i;
    float theta;

    for(i = 0; i <= 360; i++)
    {
        theta = i * 3.143/180;
        glVertex2f(5*cos(theta) - 90, 5*sin(theta) - 5);
    }
    glEnd();


    glColor3f(255,255,255);
    glBegin(GL_POLYGON);

    for(i = 0; i <= 360; i++)
    {
        theta = i * 3.143/180;
        glVertex2f(2*cos(theta) - 90, 2*sin(theta) - 5);
    }
    glEnd();


    glColor3f(255,0,0);
    glBegin(GL_POLYGON);

    for(i = 0; i <= 360; i++)
    {
        theta = i * 3.143/180;
        glVertex2f(5*cos(theta) - 68, 5*sin(theta) - 5);
    }
    glEnd();


    glColor3f(255,255,255);
    glBegin(GL_POLYGON);

    for(i = 0; i <= 360; i++)
    {
        theta = i * 3.143/180;
        glVertex2f(2*cos(theta) - 68, 2*sin(theta) - 5);
    }
    glEnd();
    glPopMatrix();



    // ******** Lower Tree draw Start **********

    // root lower
    glPushMatrix();
    glColor3f(255, 0, 0);
    glTranslatef(77.0,-80.0,0);
    glScalef(0.2, 1.2, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();



    // root upper
    glPushMatrix();
    glColor3f(255, 0, 0);
    glTranslatef(77.0,-80.0,0);
    glScalef(0.2, 1.2, 0);
    glRectf(-10.0, -10.0, 10.0, 10.0);
    glPopMatrix();
    glEnd();


    // root lower top part 1
    glPushMatrix();
    glColor3f(0, 255, 0);
    glTranslatef(77.0,-80.0,0);
    glScalef(2, 4, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 5, 0);
    glVertex3f(5, 0, 0);
    glVertex3f(-5, 0, 0);
    glEnd();
    glPopMatrix();

    // root lower top part 2
    glPushMatrix();
    glColor3f(0, 255, 0);
    glTranslatef(77.0,-73.0,0);
    glScalef(1.7, 4, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 5, 0);
    glVertex3f(5, 0, 0);
    glVertex3f(-5, 0, 0);
    glEnd();
    glPopMatrix();

    // root lower top part 3
    glPushMatrix();
    glColor3f(0, 255, 0);
    glTranslatef(77.0,-68.0,0);
    glScalef(1.7, 4, 0);
    glBegin(GL_TRIANGLES);
    glVertex3f(0, 5, 0);
    glVertex3f(5, 0, 0);
    glVertex3f(-5, 0, 0);
    glEnd();
    glPopMatrix();



    // ******** Lower Tree draw END **********


    glFlush();



}

void move()
{

    if(t <= 200)
    {


        t += 0.05;
    }
    else
    {
        t = 0;
    }

    glutPostRedisplay();
}

void Initialize()
{
    glClearColor(0.0f, 0.0f, 0.0f, 0.0f);
    glMatrixMode(GL_PROJECTION);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glOrtho(-100.0, 100.0, -100.0, 100.0, -25.0, 25.0);
}
int main(int Argc, char** Argv)
{
    glutInit(&Argc, Argv);

    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(1024,600);

    glutInitWindowPosition(100,100);

    glutCreateWindow("Bus Stop");

    Initialize();

    glutDisplayFunc(Draw);
    glutIdleFunc(move);

    glutMainLoop();

    return 0;
}
