///Three way traffic
#include<iostream>
#include <GL/glut.h>
#include <math.h>
using namespace std;
float _move = 0.0f;
float _move1 = 0.0f;
float _move2 = 0.0f;
float _angle=90;
float Y_trans=-60;
int tR1=200,tR2=200,tR3=200;
int tG1=300,tG2=300,tG3=300;
int tY1=40,tY2=40,tY3=40;
int round1=1;
int r1=0,g1=1,r2=0,g2=1,r3=1,g3=1;///For color choosing

void myInit (void);
void traffic_signal(float x,float y,float z);
void circle(float x,float y,float z);
void myDisplay(void);
void road();
void car1();
void update(int value);
void car(float x,float y,float z);
void keyboard(unsigned char key, int x, int y);
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB);
    glutInitWindowSize (1280, 720);
    glutInitWindowPosition (00, 0);
    glutCreateWindow ("Three way traffic");
    glutDisplayFunc(myDisplay);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(20, update, 0);
//    glutFullScreen();
    myInit ();
    glutMainLoop();
}
void myDisplay(void)
{
    glClear (GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    road();

    ///car1 call
    glPushMatrix();
//    glRotatef(180,0,1,0);
    glTranslatef(-(_move), 0.0f, 0.0f);
    car(1.0,0.0,0.0);
    glPopMatrix();

    ///car2 call
    glPushMatrix();
    glRotatef(180,0,1,0);
    glTranslatef(-_move1, 130.0f, 0.0f);
    car(0.0,.0,1.0);
    glPopMatrix();

    ///car3 call
    glPushMatrix();
    if(_move2>=500)
    {
        if(_angle==0 )
        {
            glRotatef(0,0,0,-1);
            glTranslatef(-_move2,Y_trans, 0.0f);
        }
        else
        {
            _angle-=5;
            Y_trans+=3.333333;
            glRotatef(_angle,0,0,-1);
            glTranslatef(-_move2, Y_trans, 0.0f);

        }
    }
    else
    {
        glRotatef(_angle,0,0,-1);
        glTranslatef(-_move2, Y_trans, 0.0f);
    }
    car(136.0/255,0.0,21.0/255);
    glPopMatrix();
    glEnd();

    ///1st traffic signal
    glPushMatrix();
    glRotatef(90,0,0,1);
    glTranslatef(40,-140,0);
    if(r1==1 && g1==1)
    {
        tY1--;
        if(tY1==0)
        {
            g1=0;
            tG1=300;
        }
    }
    else if(r1==1)
    {
        tR1--;
        if(tR1==0)
        {
            g1=1;
            r1=0;
            round1=2;
        }
    }
    else if(g1==1)
    {
        tG1--;
        tY1=85;
        tR1=200;
        if(tG1==0)
        {
            r1=1;
            g1=1;
        }
    }

    traffic_signal(r1,g1,0);
    glPopMatrix();

    ///2nd traffic signal
    glPushMatrix();
    glRotatef(-90,0,0,1);
    glTranslatef(-140,-50,0);
    if(r2==1 && g2==1)
    {
        tY2--;
        if(tY2==0)
        {
            g2=0;
            tG2=300;
        }
    }
    else if(r2==1)
    {
        tR2--;
        if(tR2==0)
        {
            g2=1;
            r2=0;
        }
    }
    else if(g2==1)
    {
        tG2--;
        tY2=85;
        tR2=200;
        if(tG2==0)
        {
            r2=1;
            g2=1;
        }
    }
    traffic_signal(r2,g2,0);
    glPopMatrix();
    ///3rd traffic signal
    glPushMatrix();
    if(r3==1 && g3==1)
    {
        tY3--;
        if(tY3==0)
        {
            g3=0;
            tG3=300;
        }
    }
    else if(r3==1)
    {
        tR3--;
        if(tR3==0)
        {
            g3=1;
            r3=0;
        }
    }
    else if(g3==1)
    {
        tG3--;
        tY3=85;
        tR3=200;
        if(tG3==0)
        {
            r3=1;
            g3=1;
        }
    }
    traffic_signal(r3,g3,0);
    glPopMatrix();




    glutSwapBuffers();

}

void update(int value)
{

    //_move1 += 5;
    if(r1==1)
    {
        if(g1==1 && tY1!=0)
        {
            if(_move<=240)
            {

                _move += 5;

            }
//            else
        }
        else
        {
            if(_move<=240 )
            {
                _move += 5;
            }
        }
    }
    else if(g1==1)
    {
        _move +=5;
    }
    if(_move>=1280.0)
    {
        _move =-640.0;
    }
    ///2nd car move functionality
    if(r2==1)
    {
        if(g2==1 && tY2!=0)
        {
            if(_move1<=340)
            {
                _move1 += 5;
            }
        }
        else
        {
            if(_move1<=340)
            {
                _move1 += 5;
            }
        }
    }
    else if(g2==1)
    {
        _move1 +=5;

    }
    if(_move1>=1280.0)
    {
        _move1 =-640;
    }

    ///3rd Move functionality
    if(r3==1)
    {
        if(g3==1 && tY3!=0)
        {
            if(_move2<=380)
            {
                _move2 += 5;
            }
        }
        else
        {
            if(_move2<=380)
            {
                _move2 += 5;
            }
        }
    }
    else if(g3==1)
    {
        _move2 +=5;

    }
    if(_move2>=1280.0)
    {
        _move2 =-640;
        _angle=90;
        Y_trans=-60;
    }
    glutPostRedisplay(); //Notify GLUT that the display has changed

    glutTimerFunc(20, update, 0); //Notify GLUT to call update again in 20 milliseconds
}
void traffic_signal(float x,float y,float z)
{
    ///Traffic
    glPushMatrix();
    glColor3f(195/255.0,195/255.0,195/255.0);
    glBegin(GL_POLYGON);
    glVertex2f(-130,-80);
    glVertex2f(-120,-80);
    glVertex2f(-120,10);
    glVertex2f(-120,10);
    glVertex2f(-150,10);
    glVertex2f(-150,-80);
    glVertex2f(-140,-80);
    glVertex2f(-140,-140);
    glVertex2f(-130,-140);
    glEnd();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-135, -10.0, 00.0);
    if(x==1)
    {
        if(y!=1)
        {
            circle(x,0,0);
        }

        else
        {
            circle(0,0,0);
        }
    }
    else
    {
        circle(0,0,0);
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-135, -35.0, 00.0);
    if(x==y)
    {
        circle(x,y,0);

    }
    else
    {
        circle(0,0,0);
    }
    glPopMatrix();

    glPushMatrix();
    glTranslatef(-135, -60.0, 00.0);
    if(y==1 )
    {
        if(x==1)
        {
            circle(0,0,0);
        }

        else
        {
            circle(0,y,0);
        }
    }
    else
    {
        circle(0,0,0);
    }

    glPopMatrix();
}
void circle(float x,float y,float z)
{
    glColor3f(x,y,z);
    glBegin(GL_POLYGON);
    for(int i=0; i<200; i++)
    {
        float pi=3.1416;
        float A=(i*2*pi)/50 ;
        float r=10;
        float x = r * cos(A);
        float y = r * sin(A);
        glVertex2f(x,y );
    }
    glEnd();
}
void car(float x,float y,float z)
{
    ///car main body structure
    glColor3f(x,y,z);

    glBegin(GL_POLYGON);
    glVertex2f(633,-20);
    glVertex2f(635,17.5);
    glVertex2f(636,35);
    glVertex2f(633,55);
    glVertex2f(632,57);
    glVertex2f(628,58);///
    glVertex2f(625,60);
    glVertex2f(555,60);///straight
    glVertex2f(535,58);
    glVertex2f(515,62);//
    glVertex2f(495,62);
    glVertex2f(485,60);
    glVertex2f(465,60);
    glVertex2f(462,60);
    glVertex2f(459,58);
    glVertex2f(457,57);
    glVertex2f(454,55);
    glVertex2f(453,35);
    glVertex2f(451,17.5);
    glVertex2f(454,-20);///
    glVertex2f(457,-22);
    glVertex2f(459,-23);
    glVertex2f(462,-25);
    glVertex2f(465,-25);
    glVertex2f(485,-25);
    glVertex2f(495,-27);
    glVertex2f(515,-27);
    glVertex2f(535,-23);
    glVertex2f(555,-25);
    glVertex2f(625,-25);
    glVertex2f(628,-23);
    glVertex2f(630,-22);
    glVertex2f(633,-20);
    glEnd();

    ///Car back part
    glColor3f(21.0/255,35.0/255,40.0/255);
    glBegin(GL_POLYGON);
    glVertex2f(620,-13);
    glVertex2f(620,50);
    glVertex2f(570,42);
    glVertex2f(570,-5);
    glEnd();

    glColor3f(190/255.0,231/255.0,241/255.0);
    glBegin(GL_POLYGON);
    glVertex2f(618,-9);
    glVertex2f(618,48);
    glVertex2f(572,40);
    glVertex2f(572,-3);
    glEnd();
///Car forward part
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(460,44);
    glVertex2f(460,-9);
    glVertex2f(500,-15);
    glVertex2f(495,-10);
    glVertex2f(495,43);
    glVertex2f(500,48);
    glEnd();

    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(462,42);
    glVertex2f(462,-7);
    glVertex2f(498,-13);
    glVertex2f(493,-8);
    glVertex2f(493,41);
    glVertex2f(498,46);
    glEnd();
    ///Car looking Glass
    glBegin(GL_POLYGON);
    glVertex2f(498,60);
    glVertex2f(506,60);
    glVertex2f(504,68);
    glVertex2f(499,68);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(498,-26);
    glVertex2f(506,-26);
    glVertex2f(506,-34);
    glVertex2f(500,-34);
    glEnd();

    ///Car Forward Glass part
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
    glVertex2f(504,-11);
    glVertex2f(532,-7);
    glVertex2f(532,42);
    glVertex2f(504,46);
    glEnd();
    glColor3f(190/255.0,231/255.0,241/255.0);
    glBegin(GL_POLYGON);
    glVertex2f(506,-9);
    glVertex2f(530,-5);
    glVertex2f(530,40);
    glVertex2f(506,44);
    glEnd();

    ///Car window glass part
    ///Right
    glColor3f(21.0/255,35.0/255,40.0/255);
    glBegin(GL_POLYGON);
    glVertex2f(505,55);
    glVertex2f(580,55);
    glVertex2f(565,45);
    glVertex2f(535,45);
    glEnd();

    ///Left
    glColor3f(21.0/255,35.0/255,40.0/255);
    glBegin(GL_POLYGON);
    glVertex2f(505,-22);
    glVertex2f(580,-22);
    glVertex2f(565,-12);
    glVertex2f(535,-12);
    glEnd();



    ///Car light
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(454,33);
    glVertex2f(458,36);
    glVertex2f(458,42);
    glVertex2f(454,42);
    glEnd();
    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
    glVertex2f(454,1);
    glVertex2f(458,1);
    glVertex2f(458,-8);
    glVertex2f(454,-5);
    glEnd();

}
void road()
{
    //road
    glColor3f(26/255.0, 26/255.0,26/255.0);
//    glColor3f(0.0,0.0,0.0);

    glBegin(GL_POLYGON);
    glVertex2f(200,-60);
    glVertex2f(640,-60);
    glVertex2f(640,240);
    glVertex2f(-640,240);
    glVertex2f(-640,-60);
    glVertex2f(-100,-60);
    glVertex2f(-100,-360);
    glVertex2f(200,-360);
    glEnd();

    //glScalef(1.0,0.5,0);
    glBegin(GL_POLYGON);
    glColor3f(1.0,1.0,1.0);
    glVertex2f(-600,87);
    glVertex2f(-560,87);
    glVertex2f(-560,93);
    glVertex2f(-600,93);
    glEnd();

    glBegin(GL_POLYGON);
//    glColor3f(1.0,1.0,1.0);
    glVertex2f(-520,87);
    glVertex2f(-480,87);
    glVertex2f(-480,93);
    glVertex2f(-520,93);
    glEnd();

    glBegin(GL_POLYGON);
//    glColor3f(1.0,1.0,1.0);
    glVertex2f(-440,87);
    glVertex2f(-400,87);
    glVertex2f(-400,93);
    glVertex2f(-440,93);
    glEnd();

    glBegin(GL_POLYGON);
//    glColor3f(1.0,1.0,1.0);
    glVertex2f(-360,87);
    glVertex2f(-320,87);
    glVertex2f(-320,93);
    glVertex2f(-360,93);
    glEnd();

    glBegin(GL_POLYGON);
//    glColor3f(1.0,1.0,1.0);
    glVertex2f(-280,87);
    glVertex2f(-240,87);
    glVertex2f(-240,93);
    glVertex2f(-280,93);
    glEnd();

    glBegin(GL_POLYGON);
//    glColor3f(1.0,1.0,1.0);
    glVertex2f(-200,87);
    glVertex2f(-160,87);
    glVertex2f(-160,93);
    glVertex2f(-200,93);
    glEnd();

    glBegin(GL_POLYGON);
//    glColor3f(1.0,1.0,1.0);
    glVertex2f(-120,87);
    glVertex2f(-80,87);
    glVertex2f(-80,93);
    glVertex2f(-120,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(-40,87);
    glVertex2f(0,87);
    glVertex2f(0,93);
    glVertex2f(-40,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(40,87);
    glVertex2f(80,87);
    glVertex2f(80,93);
    glVertex2f(40,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(120,87);
    glVertex2f(160,87);
    glVertex2f(160,93);
    glVertex2f(120,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(200,87);
    glVertex2f(240,87);
    glVertex2f(240,93);
    glVertex2f(200,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(280,87);
    glVertex2f(320,87);
    glVertex2f(320,93);
    glVertex2f(280,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(360,87);
    glVertex2f(400,87);
    glVertex2f(400,93);
    glVertex2f(360,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(440,87);
    glVertex2f(480,87);
    glVertex2f(480,93);
    glVertex2f(440,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(520,87);
    glVertex2f(560,87);
    glVertex2f(560,93);
    glVertex2f(520,93);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(600,87);
    glVertex2f(640,87);
    glVertex2f(640,93);
    glVertex2f(600,93);
    glEnd();

    ///road downside
    glBegin(GL_POLYGON);
    glVertex2f(53,-60);
    glVertex2f(47,-60);
    glVertex2f(47,-100);
    glVertex2f(53,-100);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(53,-140);
    glVertex2f(47,-140);
    glVertex2f(47,-180);
    glVertex2f(53,-180);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(53,-220);
    glVertex2f(47,-220);
    glVertex2f(47,-260);
    glVertex2f(53,-260);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(53,-300);
    glVertex2f(47,-300);
    glVertex2f(47,-340);
    glVertex2f(53,-340);
    glEnd();

    ///Stop Line Downside
    glColor3f(1,40/255.0,20/255.0);
    glBegin(GL_POLYGON);
    glVertex2f(-100,-60);
    glVertex2f(-100,-66);
    glVertex2f(46,-66);
    glVertex2f(46,-60);
    glEnd();

    ///Stop Line Upper site
    glBegin(GL_POLYGON);
    glVertex2f(-100,240);
    glVertex2f(-100,93);
    glVertex2f(-106,93);
    glVertex2f(-106,240);
    glEnd();
//    glBegin(GL_POLYGON);
//    glVertex2f(-112,240);
//    glVertex2f(-112,93);
//    glVertex2f(-118,93);
//    glVertex2f(-118,240);
//    glEnd();


    ///Stop Line Right site
    glBegin(GL_POLYGON);
    glVertex2f(200,87);
    glVertex2f(200,-60);
    glVertex2f(206,-60);
    glVertex2f(206,87);
    glEnd();
}
void myInit (void)
{
    glClearColor(0.0, 136/255.0, 34/255.0, 0.0);
    glColor3f(0.0f, 1.0f, 0.0f);
    glPointSize(4.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-640.0, 640.0, -360.0, 360.0);
}

void keyboard(unsigned char key, int x, int y) {
   switch (key) {
      case 27:     // ESC key
         exit(0);
         break;
   }
}
