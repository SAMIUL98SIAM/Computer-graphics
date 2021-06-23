#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include<windows.h>
#include<mmsystem.h>
# define PI           3.14159265358979323846
using namespace std;

float _rain = 0.0;
float _nt = 0.0;
bool rainday = false;
bool night = false;


void myInit(void)
{
glClearColor(0.0, 1.0, 1.0, 1.0);
glMatrixMode(GL_PROJECTION);
gluOrtho2D(-1.0, 1.0, -0.8, 0.8 );

}

void building()
{
    //full body
 glBegin(GL_QUADS);

      glColor3ub(255, 255, 255);
      glVertex2f(-0.50f, 0.0f);

      glColor3ub(212, 212, 212);
      glVertex2f(0.50f, 0.0f);

      glColor3ub(212, 212, 212);
      glVertex2f(0.5f, 0.36f);

      glColor3ub(255, 255, 255);
      glVertex2f(-0.5f, 0.36f);
glEnd();

//full body 4th floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
      glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.345f);

      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.345f);

glEnd();

//full body 4th floor line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110,110,110);

      glVertex2f(-0.51f, 0.340f);
      glVertex2f(0.51f, 0.340f);

      glVertex2f(0.51f, 0.340f);
      glVertex2f(0.51f, 0.352f);

      glVertex2f(0.51f, 0.352f);
      glVertex2f(-0.51f, 0.352f);

      glVertex2f(-0.51f, 0.352f);
      glVertex2f(-0.51f, 0.340f);

glEnd();


//full body 4th floor line corner
glLineWidth(5.0);
glBegin(GL_LINES);

      glColor3ub(190, 190, 190);
      glVertex2f(-0.51f, 0.345f);
      glVertex2f(-0.50f, 0.33f);
      glVertex2f(0.51f, 0.345f);
      glVertex2f(0.50f, 0.33f);
glEnd();


//full body 3rd floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
       glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.29f);
      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.29f);

glEnd();
//full body 3rd floor outer line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110, 110, 110);
      glVertex2f(-0.51f, 0.28f);
      glVertex2f(0.51f, 0.28f);

       glVertex2f(0.51f, 0.28f);
      glVertex2f(0.51f, 0.295f);

      glVertex2f(0.51f, 0.295f);
      glVertex2f(-0.51f, 0.295f);

      glVertex2f(-0.51f, 0.295f);
      glVertex2f(-0.51f, 0.28f);

      glVertex2f(-0.51f, 0.28f);
      glVertex2f(-0.50f, 0.26f);
      glVertex2f(0.51f, 0.28f);
      glVertex2f(0.50f, 0.26f);



glEnd();



//full body 2nd floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
       glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.15f);
      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.15f);

glEnd();
//full body 2nd floor outer line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110, 110, 110);
      glVertex2f(-0.51f, 0.14f);
      glVertex2f(0.51f, 0.14f);

       glVertex2f(0.51f, 0.14f);
      glVertex2f(0.51f, 0.155f);

      glVertex2f(0.51f, 0.155f);
      glVertex2f(-0.51f, 0.155f);

      glVertex2f(-0.51f, 0.155f);
      glVertex2f(-0.51f, 0.14f);

glEnd();



//full body 1st floor inner line
glLineWidth(10.0);
glBegin(GL_LINES);
       glColor3ub(245, 245, 245);
      glVertex2f(-0.51f, 0.05f);
      glColor3ub(180, 180, 180);
      glVertex2f(0.51f, 0.05f);

glEnd();
//full body 1st floor outer line
glLineWidth(2.0);
glBegin(GL_LINES);

      glColor3ub(110, 110, 110);
      glVertex2f(-0.51f, 0.04f);
      glVertex2f(0.51f, 0.04f);

       glVertex2f(0.51f, 0.04f);
      glVertex2f(0.51f, 0.055f);

      glVertex2f(0.51f, 0.055f);
      glVertex2f(-0.51f, 0.055f);

      glVertex2f(-0.51f, 0.055f);
      glVertex2f(-0.51f, 0.04f);
glEnd();



//middle top box
glBegin(GL_QUADS);

       glColor3ub(255,255,255);

      glVertex2f(-0.123f, 0.28f);
      glVertex2f(0.123f, 0.28f);
       glColor3ub(250,250,250);

      glVertex2f(0.123f, 0.38f);
       glColor3ub(250,250,250);

      glVertex2f(-0.123f, 0.38f);



   glEnd();
//middle top
glBegin(GL_QUADS);

      glColor3f(0.8f, 0.8f, 0.8f);

      glVertex2f(-0.14f, 0.28f);
      glVertex2f(0.14f, 0.28f);
      glVertex2f(0.14f, 0.37f);
      glVertex2f(-0.14f, 0.37f);

   glEnd();





//middle middle box
glBegin(GL_QUADS);

      glColor3f(0.1f, 0.1f, 0.1f);

      glVertex2f(-0.03f, 0.3f);
      glVertex2f(0.03f, 0.3f);
      glVertex2f(0.03f, 0.34f);
      glVertex2f(-0.03f, 0.34f);



   glEnd();

//middle pillar box
glBegin(GL_QUADS);


      glColor3ub(255,255,255);
      glVertex2f(-0.158f, 0.25f);

      glColor3ub(172,172,172);
      glVertex2f(0.158f, 0.25);
      glVertex2f(0.158f, 0.281f);

      glColor3ub(172,172,172);
      glVertex2f(-0.158f, 0.281f);



   glEnd();

//middle pillar box line
glLineWidth(5.0);
glBegin(GL_LINES);

      glColor3ub(255,255,255);
      glVertex2f(-0.16f, 0.278f);

      glColor3ub(180,180,180);
      glVertex2f(0.16f, 0.278f);
   glEnd();


   //middle pillar box 2 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.110f, 0.22f);
      glVertex2f(-.095f, 0.22f);
      glVertex2f(-.090f, 0.25f);
      glVertex2f(-.115f, 0.25f);
   glEnd();
//middle pillar box 2 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.110f, 0.038f);
      glVertex2f(-.095f, 0.038f);
      glVertex2f(-.095f, 0.22f);
      glVertex2f(-.110f, 0.22f);
   glEnd();

    //middle pillar box 3 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.06f, 0.22f);
      glVertex2f(-.045f, 0.22f);
      glVertex2f(-.040f, 0.25f);
      glVertex2f(-.065f, 0.25f);
   glEnd();
//middle pillar box 3 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.06f, 0.038f);
      glVertex2f(-.045f, 0.038f);
      glVertex2f(-.045f, 0.22f);
      glVertex2f(-.06f, 0.22f);
   glEnd();

   //middle pillar box 4 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.03f, 0.22f);
      glVertex2f(-.015f, 0.22f);
      glVertex2f(-.010f, 0.25f);
      glVertex2f(-.035f, 0.25f);
   glEnd();
//middle pillar box 4 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.03f, 0.038f);
      glVertex2f(-.015f, 0.038f);
      glVertex2f(-.015f, 0.22f);
      glVertex2f(-.03f, 0.22f);
   glEnd();

   //middle pillar box 5 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);

      glVertex2f(0.03f, 0.22f);
      glVertex2f(0.015f, 0.22f);
      glVertex2f(0.010f, 0.25f);
      glVertex2f(0.035f, 0.25f);
   glEnd();
//middle pillar box 5 middle

glBegin(GL_POLYGON);

      glColor3ub(177,177,177);

      glVertex2f(0.03f, 0.038f);
      glVertex2f(0.015f, 0.038f);
      glVertex2f(0.015f, 0.22f);
      glVertex2f(0.03f, 0.22f);
   glEnd();


//middle pillar box 6 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);

      glVertex2f(0.06f, 0.22f);
      glVertex2f(0.045f, 0.22f);
      glVertex2f(0.040f, 0.25f);
      glVertex2f(0.065f, 0.25f);
   glEnd();
//middle pillar box 6 middle

glBegin(GL_POLYGON);

      glColor3ub(177,177,177);

      glVertex2f(0.06f, 0.038f);
      glVertex2f(0.045f, 0.038f);
      glVertex2f(0.045f, 0.22f);
      glVertex2f(0.06f, 0.22f);
   glEnd();
//middle pillar box 7 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);

      glVertex2f(0.110f, 0.22f);
      glVertex2f(0.095f, 0.22f);
      glVertex2f(0.090f, 0.25f);
      glVertex2f(0.115f, 0.25f);
   glEnd();
//middle pillar box 7 middle

glBegin(GL_POLYGON);

      glColor3ub(177,177,177);

      glVertex2f(0.110f, 0.038f);
      glVertex2f(0.095f, 0.038f);
      glVertex2f(0.095f, 0.22f);
      glVertex2f(0.110f, 0.22f);
   glEnd();


//middle pillar box 8 top

glBegin(GL_POLYGON);

      glColor3ub(177,180,180);

      glVertex2f(0.14f, 0.22f);
      glVertex2f(0.125f, 0.22f);
      glVertex2f(0.120, 0.25f);
      glVertex2f(0.145f, 0.25f);
   glEnd();
//middle pillar box 8 middle

glBegin(GL_POLYGON);

     glColor3ub(177,180,180);
      glVertex2f(0.14f, 0.048f);
      glVertex2f(0.125f, 0.048f);
      glVertex2f(0.125, 0.22f);

      glVertex2f(0.14f, 0.22f);
   glEnd();



//middle pillar box 8 bottom

glBegin(GL_POLYGON);

      glColor3ub(80, 80, 80);

      glVertex2f(.144f, 0.036f);
      glVertex2f(.121f, 0.036f);
      glVertex2f(.121, 0.048f);

      glVertex2f(.144f, 0.048f);
   glEnd();

   //middle pillar box 1 top

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.14f, 0.22f);
      glVertex2f(-.125f, 0.22f);
      glVertex2f(-.120, 0.25f);

      glVertex2f(-.145f, 0.25f);
   glEnd();
//middle pillar box 1 middle

glBegin(GL_POLYGON);

      glColor3f(0.81, 0.81f, 0.81f);

      glVertex2f(-.14f, 0.048f);
      glVertex2f(-.125f, 0.048f);
      glVertex2f(-.125, 0.22f);

      glVertex2f(-.14f, 0.22f);
   glEnd();

//middle pillar box 1 bottom

glBegin(GL_POLYGON);

      glColor3f(0.0f, 0.0f, 1.0f);

      glVertex2f(-.144f, 0.036f);
      glVertex2f(-.121f, 0.036f);
      glVertex2f(-.121, 0.048f);

      glVertex2f(-.144f, 0.048f);
   glEnd();


// 4th floor left window outer border

float wx1,wx2,wy1,wy2;
wx1=-0.47; wx2=-0.44; wy1=0.3;wy2=0.335;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(wx1, wy1);
          glVertex2f(wx2, wy1);
          glVertex2f(wx2, wy2);
          glVertex2f(wx1, wy2);

          wx1=wx1+0.05;
          wx2=wx2+0.05;

       }

   glEnd();

// 4th floor left window inner border

glColor3ub(54,54,54);
float wix1=-0.467, wix2=-0.443, wiy1=0.301, wiy2=0.329;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(wix1, wiy1);
          glVertex2f(wix2, wiy1);
          glVertex2f(wix2, wiy2);
          glVertex2f(wix1, wiy2);

          wix1=wix1+0.05;
          wix2=wix2+0.05;

       }

   glEnd();

// 4th floor left window inner line

float wlx=-.454,wly1=0.301,wly2=0.3295;
glColor3ub(255,255,255);
glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(wlx, wly1);
            glVertex2f(wlx, wly2);

            wlx=wlx+0.05;
        }

glEnd();


// 4th floor right window outer border

float wxr1=0.17,wxr2=0.14,wyr1=0.3,wyr2=0.335;
glColor3ub(180,180,180);
glBegin(GL_QUADS);

    for(int i=0; i<7; i++)
    {
      glVertex2f(wxr1, wyr1);
      glVertex2f(wxr2, wyr1);
      glVertex2f(wxr2, wyr2);
      glVertex2f(wxr1, wyr2);

      wxr1=wxr1+0.05;
      wxr2=wxr2+0.05;

    }


   glEnd();


// 4th floor right window inner border

float wixr1=0.168,wixr2=0.146,wiyr1=0.301,wiyr2=0.329;
 glColor3ub(54,54,54);
glBegin(GL_QUADS);

     for(int i=0; i<7; i++)
     {
          glVertex2f(wixr1, wiyr1);
          glVertex2f(wixr2, wiyr1);
          glVertex2f(wixr2, wiyr2);
          glVertex2f(wixr1, wiyr2);

          wixr1=wixr1+0.05;
          wixr2=wixr2+0.05;


     }
glEnd();

// 4th floor right window inner line

float wlxr=0.157,wlyr1=0.301,wlyr2=0.3295;
glLineWidth(2.0);
glColor3ub(255,255,255);
glBegin(GL_LINES);

    for(int i=0; i<7; i++)
    {

      glVertex2f(wlxr, wlyr1);
      glVertex2f(wlxr, wlyr2);

      wlxr=wlxr+0.05;
    }

glEnd();


//.......................

// 2nd floor left window outer border

float w2x1,w2x2,w2y1,w2y2;
w2x1=-0.47; w2x2=-0.44; w2y1=0.097;w2y2=0.132;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w2x1, w2y1);
          glVertex2f(w2x2, w2y1);
          glVertex2f(w2x2, w2y2);
          glVertex2f(w2x1, w2y2);

          w2x1=w2x1+0.05;
          w2x2=w2x2+0.05;

       }

   glEnd();

// 2nd floor left window inner border

glColor3ub(54,54,54);
float w2ix1=-0.466, w2ix2=-0.444, w2iy1=0.098, w2iy2=0.127;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w2ix1, w2iy1);
          glVertex2f(w2ix2, w2iy1);
          glVertex2f(w2ix2, w2iy2);
          glVertex2f(w2ix1, w2iy2);

          w2ix1=w2ix1+0.05;
          w2ix2=w2ix2+0.05;

       }

   glEnd();

// 2nd floor left window inner line

float w2x3=-.455,w2y3=0.098,w22y3=0.127;
glColor3ub(255,255,255);
glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w2x3, w2y3);
            glVertex2f(w2x3, w22y3);

            w2x3=w2x3+0.05;
        }

glEnd();

//.................................

// 2nd floor right window outer border

float w2rx1=0.17f,w2rx2=.14f,w2ry1= 0.097f,w2ry2=0.132f;
glColor3ub(180,180,180);
glBegin(GL_QUADS);

    for(int i=0; i<7; i++)
    {
      glVertex2f(w2rx1, w2ry1);
      glVertex2f(w2rx2, w2ry1);
      glVertex2f(w2rx2, w2ry2);
      glVertex2f(w2rx1, w2ry2);

      w2rx1=w2rx1+0.05;
      w2rx2=w2rx2+0.05;

    }


   glEnd();


// 2nd floor right window inner border

float w22rx1=0.168f,w22rx2=.146f,w22ry1=0.098f,w22ry2=0.127f;
 glColor3ub(54,54,54);
glBegin(GL_QUADS);

     for(int i=0; i<7; i++)
     {
          glVertex2f(w22rx1, w22ry1);
          glVertex2f(w22rx2, w22ry1);
          glVertex2f(w22rx2, w22ry2);
          glVertex2f(w22rx1, w22ry2);

          w22rx1=w22rx1+0.05;
          w22rx2=w22rx2+0.05;


     }
glEnd();

// 2nd floor right window inner line

float w222xr=.157f,w222yr1=0.098f,w222yr2=0.127f;
glLineWidth(2.0);
glColor3ub(255,255,255);
glBegin(GL_LINES);

    for(int i=0; i<7; i++)
    {

      glVertex2f(w222xr, w222yr1);
      glVertex2f(w222xr, w222yr2);

      w222xr=w222xr+0.05;
    }

glEnd();

//....................................................................

// 1st floor left window outer border

float w1x1,w1x2,w1y1,w1y2;
w1x1=-0.47; w1x2=-0.44; w1y1=0.005;w1y2=0.035;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w1x1, w1y1);
          glVertex2f(w1x2, w1y1);
          glVertex2f(w1x2, w1y2);
          glVertex2f(w1x1, w1y2);

          w1x1=w1x1+0.05;
          w1x2=w1x2+0.05;

       }

   glEnd();

// 1st floor left window inner border

glColor3ub(54,54,54);
float w11x1=-0.467f, w11x2=-0.443f, w11y1=0.007f, w11y2=0.03f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w11x1, w11y1);
          glVertex2f(w11x2, w11y1);
          glVertex2f(w11x2, w11y2);
          glVertex2f(w11x1, w11y2);

          w11x1=w11x1+0.05;
          w11x2=w11x2+0.05;

       }

   glEnd();

// 1st floor left window inner line

float w11lx=-.454f,wl11y1=0.007f,wl11y2=0.03f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w11lx, wl11y1);
            glVertex2f(w11lx, wl11y2);

            w11lx=w11lx+0.05;
        }

glEnd();


//........................................................................................................................................................


// 1st floor right window outer border

float w1rx1,w1rx2,w1ry1,w1ry2;
w1rx1=0.17; w1rx2=0.14; w1ry1=0.005;w1ry2=0.035;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w1rx1, w1ry1);
          glVertex2f(w1rx2, w1ry1);
          glVertex2f(w1rx2, w1ry2);
          glVertex2f(w1rx1, w1ry2);

          w1rx1=w1rx1+0.05;
          w1rx2=w1rx2+0.05;

       }

   glEnd();

// 1st floor right window inner border

glColor3ub(54,54,54);
float w11rx1=0.168f, w11rx2=0.146f, w11ry1=0.007f, w11ry2=0.03f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w11rx1, w11ry1);
          glVertex2f(w11rx2, w11ry1);
          glVertex2f(w11rx2, w11ry2);
          glVertex2f(w11rx1, w11ry2);

          w11rx1=w11rx1+0.05;
          w11rx2=w11rx2+0.05;

       }

   glEnd();

// 1st floor right window inner line

float w11lrx=.157f,wl11ry1=0.007f,wl11ry2=0.03f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w11lrx, wl11ry1);
            glVertex2f(w11lrx, wl11ry2);

            w11lrx=w11lrx+0.05;
        }

glEnd();


//.....................................................................................................

// 3rd floor left window outer border

float w3x1,w3x2,w3y1,w3y2;
w3x1=-0.47; w3x2=-0.44; w3y1=0.17f;w3y2=0.265f;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w3x1, w3y1);
          glVertex2f(w3x2, w3y1);
          glVertex2f(w3x2, w3y2);
          glVertex2f(w3x1, w3y2);

          w3x1=w3x1+0.05;
          w3x2=w3x2+0.05;

       }

   glEnd();

// 3rd floor left window inner border

glColor3ub(54,54,54);
float w33x1=-0.467f, w33x2=-0.443f, w33y1=0.177f, w33y2=0.260f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w33x1, w33y1);
          glVertex2f(w33x2, w33y1);
          glVertex2f(w33x2, w33y2);
          glVertex2f(w33x1, w33y2);

          w33x1=w33x1+0.05;
          w33x2=w33x2+0.05;

       }

   glEnd();

   //3rd floor window 1 left inner middle x line

   glLineWidth(2.0);
   glColor3ub(255,255,255);
   float x1=-0.467f, x2=-0.443f, y1=0.238f;
   glBegin(GL_LINES);

          for(int j=0; j<7;j++ ){
             glVertex2f(x1, y1);
             glVertex2f(x2, y1);

             x1=x1+0.05;
             x2=x2+0.05;
          }

   glEnd();

// 3rd floor left window inner line

float w333x=-.454f,w333y1=0.177f,w333y2=0.260f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w333x, w333y1);
            glVertex2f(w333x, w333y2);

            w333x=w333x+0.05;
        }

glEnd();


// 3rd floor right window outer border

float w3rx1,w3rx2,w3ry1,w3ry2;
w3rx1=0.17; w3rx2=0.14; w3ry1=0.17f;w3ry2=0.265f;
glColor3ub(180,180,180);
glBegin(GL_QUADS);
       for(int j=0; j<7;j++)
       {
          glVertex2f(w3rx1, w3ry1);
          glVertex2f(w3rx2, w3ry1);
          glVertex2f(w3rx2, w3ry2);
          glVertex2f(w3rx1, w3ry2);

          w3rx1=w3rx1+0.05;
          w3rx2=w3rx2+0.05;

       }

   glEnd();




// 3rd floor right window inner border

glColor3ub(54,54,54);
float w33rx1=0.168f, w33rx2=0.146f, w33ry1=0.177f, w33ry2=0.260f;
glBegin(GL_QUADS);


        for(int j=0; j<7;j++)
       {
          glVertex2f(w33rx1, w33ry1);
          glVertex2f(w33rx2, w33ry1);
          glVertex2f(w33rx2, w33ry2);
          glVertex2f(w33rx1, w33ry2);

          w33rx1=w33rx1+0.05;
          w33rx2=w33rx2+0.05;

       }

   glEnd();

   //3rd floor window 1 left inner middle x line

   glLineWidth(2.0);
   glColor3ub(255,255,255);
   float rx1=0.168f, rx2=0.146f, ry1=0.238f;
   glBegin(GL_LINES);

          for(int j=0; j<7;j++ ){
             glVertex2f(rx1, y1);
             glVertex2f(rx2, y1);

             rx1=rx1+0.05;
             rx2=rx2+0.05;
          }

   glEnd();

// 3rd floor right window inner line

float w333rx=.157f,w333ry1=0.177f,w333ry2=0.260f;
glColor3ub(255,255,255);

glLineWidth(2.0);
glBegin(GL_LINES);

        for(int i=0; i<7; i++)
        {
            glVertex2f(w333rx, w333ry1);
            glVertex2f(w333rx, w333ry2);

            w333rx=w333rx+0.05;
        }

glEnd();






//Stair
glBegin(GL_POLYGON);

      glColor3f(0.8f, 0.8f, 0.8f);

      glVertex2f(-0.22f, -0.01f);
      glVertex2f(0.22f, -0.01f);
      glVertex2f(0.15f, 0.06f);
      glVertex2f(-0.15f, 0.06f);
   glEnd();

//Stair lines
float stx1=-0.22, stx2=0.22, sty=-0.01;
glBegin(GL_LINES);
glColor3ub(255,255,255);

  for(int i=0; i<5; i++)
  {
      glVertex2f(stx1, sty);
      glVertex2f(stx2, sty);

      sty=sty+0.015;
      stx1=stx1+0.015;
      stx2=stx2-0.015;


  }

glEnd();


}

void grassANDroad()
{
       //Road base
glBegin(GL_POLYGON);

      glColor3ub(145,145,145);

      glVertex2f(-1.0f, 0.0f);
      glVertex2f(-1.0f, -0.2f);
      glVertex2f(1.0f, -0.2f);

      glVertex2f(1.0f, 0.0f);
   glEnd();

 //grass side

glBegin(GL_POLYGON);

      glColor3ub(32,164,71);

      glVertex2f(-1.0f, -0.2f);
      glVertex2f(-1.0f, -1.0);
      glVertex2f(1.0f, -1.0f);
      glVertex2f(1.0f, -0.2f);
   glEnd();


//Road base left right
glBegin(GL_POLYGON);

      glColor3ub(145,145,145);

      glVertex2f(-0.8f, -0.16f);
      glVertex2f(-1.2f, -1.0f);
      glVertex2f(1.2f, -1.0f);
      glVertex2f(0.8f, -0.16f);

   glEnd();

//grass middle
glBegin(GL_POLYGON);

      glColor3ub(32,164,71);

      glVertex2f(-0.5f, -0.26f);
      glVertex2f(-0.8f, -1.0);
      glVertex2f(0.8f, -1.0f);
      glVertex2f(0.5f, -0.26);
   glEnd();


//road borders
glLineWidth(6.0);
glBegin(GL_LINES);

      glColor3ub(255,255,255);

      glVertex2f(-0.5f, -0.26f);//middle grass left border
      glVertex2f(-0.8f, -1.0);
      glVertex2f(-0.503f, -.26f);//middle grass middle border
      glVertex2f(0.503f, -0.26f);
      glVertex2f(0.5f, -0.26f);//middle grass right border
      glVertex2f(0.8f, -1.0f);


      glVertex2f(-0.822f, -0.2f);//left grass right border
      glVertex2f(-1.2f, -1.0f);
      glVertex2f(-0.82f, -0.2f);//left grass upper border
      glVertex2f(-1.0f, -0.2f);


      glVertex2f(0.82f, -0.2f);//right grass left border
      glVertex2f(1.2f, -1.0f);
      glVertex2f(0.82f, -0.2f);//right grass upper border
      glVertex2f(1.0f, -0.2f);

      glVertex2f(-1.0f, -0.005f);//building front road border
      glVertex2f(1.0f, -0.005f);

    glEnd();

//Road lines
    float x1,x2,y, a,b;
    x1=-1.0; x2=-0.92; y=-0.0999;
    glLineWidth(6.0);

    glBegin(GL_LINES);

            for(int i =0; i<17; i++)
            {
                glVertex2f(x1,y );
                glVertex2f(x2,y);

                x1=x1+.12;
                x2=x2+.12;
            }

    glEnd();

//Tent quad
      glBegin(GL_POLYGON);

      glColor3ub(180,159,41);

      glVertex2f(0.2f, -0.4f);
      glVertex2f(0.28f, -0.555f);
      glVertex2f(0.55f, -0.52f);

      glVertex2f(0.48f, -0.38);


      glEnd();


//Tent triangle
      glBegin(GL_POLYGON);

      glColor3ub(126,79,52);

      glVertex2f(0.2f, -0.4f);
      glVertex2f(0.28f, -0.555f);
      glVertex2f(0.10f, -0.52f);

       glVertex2f(0.2f, -0.4f);


      glEnd();
//Tent triangle middle
      glBegin(GL_POLYGON);

      glColor3ub(61,37,24);

      glVertex2f(0.2f, -0.4f);
      glVertex2f(0.132f, -0.5290f);
      glVertex2f(0.22f, -0.541f);

       glVertex2f(0.2f, -0.4f);


      glEnd();




//Tent triangle line
      glBegin(GL_LINES);

      glColor3ub(0,0,0);//front left

      glVertex2f(0.22f, -0.38f);

      glVertex2f(0.08f, -0.52f);



      glColor3ub(0,0,0);//front right

      glVertex2f(0.18f, -0.38f);
      glVertex2f(0.30f, -0.57f);


      glColor3ub(0,0,0);//back right

      glVertex2f(0.46f, -0.35f);
      glVertex2f(0.58f, -0.55f);

      glVertex2f(0.50f, -0.365f);
      glVertex2f(0.48f, -0.385f);

      glEnd();




}
void Circle(GLfloat cx, GLfloat cy,GLfloat cz, GLfloat radius,int r,int g,int b)
{
	int triangleAmount = 40; //# of triangles used to draw circle
	GLfloat twicePi = 2.0f * 3.1416;
    int counter=0;
    glColor3ub(r,g,b);
	glBegin(GL_TRIANGLE_FAN);
		glVertex3f(cx, cy,cz); // center of circle
		for(int i = 0; i <= triangleAmount;i++) {
			counter+=1;
			glVertex3f(
		            cx + (radius * cos(i *  twicePi / triangleAmount)),
			    cy + (radius * sin(i * twicePi / triangleAmount)),cz
			);
		}
	glEnd();
}

//car movement
GLfloat position = 0.0f;
GLfloat speed = 0.078f;

void update(int value) {

    if(position > 1.0)
        position = -1.2f;

    position += speed;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void car()
{
    glColor3ub(255,0,0);
    glPushMatrix();
    glTranslatef(position,0,0);
    glBegin(GL_POLYGON);

    glVertex3f(-0.3,-0.07,0);
    glVertex3f(-0.15,-0.07,0);
     glVertex3f(-0.15,-0.035,0);
    glVertex3f(-0.18,-0.035,0);
    glVertex3f(-0.20,-0.02,0);
    glVertex3f(-0.25,-0.02,0);
    glVertex3f(-0.27,-0.035,0);
     glVertex3f(-0.3,-0.035,0);
      glVertex3f(-0.27,-0.035,0);
      glVertex3f(-0.3,-0.07,0);
    glEnd();

    //car window
    glColor3ub(0,0,0);
    glBegin(GL_POLYGON);

    //car window left
    glVertex3f(-0.255,-0.038,0);
    glVertex3f(-0.235,-0.038,0);
    glVertex3f(-0.241,-0.030,0);
    glVertex3f(-0.248,-0.030,0);
    glVertex3f(-0.255,-0.035,0);
    glEnd();

     //car window right
    glBegin(GL_POLYGON);
    glVertex3f(-0.221,-0.038,0);
    glVertex3f(-0.20,-0.038,0);
    glVertex3f(-0.209,-0.030,0);
    glVertex3f(-0.216,-0.030,0);
    glVertex3f(-0.221,-0.035,0);
    glEnd();

    glColor3ub(185,0,0);
    glLineWidth(1.0);
    glBegin(GL_LINES);
    glVertex2f(-0.27,-.04);
    glVertex2f(-0.18,-.04);
    glEnd();

    //Wheels
    //backbumper
     Circle(-0.26f,-0.070f,0.0f,0.010f,0,0,0);
     //front bumper
    Circle(-0.199f,-0.07f,0.0f,0.01f,0,0,0);
glPopMatrix();

    //handle
 /*   glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex3i(115,70,0);
    glVertex3i(135,70,0);
    glVertex3i(135,75,0);
    glVertex3i(115,75,0);
    glEnd();

    glColor3ub(0,0,0);
    glBegin(GL_QUADS);
    glVertex3i(45,70,0);
    glVertex3i(65,70,0);
    glVertex3i(65,75,0);
    glVertex3i(45,75,0);
    glEnd();
*/
}

void Rain(int value){

if(rainday){

    _rain += 0.01f;

    glBegin(GL_POINTS);
    for(int i=1;i<=1000;i++)
    {
        int x=rand(),y=rand();
        x%=1000; y%=1000;
        glBegin(GL_LINES);
        glColor3f(1.0, 1.0, 1.0);
        glVertex2d(x,y);
        glVertex2d(x+5,y+5);
        glEnd();
    }

	glutPostRedisplay();
	glutTimerFunc(5, Rain, 0);

    glFlush();

}
}
void Night(int value){

if(night){

   /* glBegin(GL_QUADS);
	glColor3f(0.10, 0.10, 0.10);
	glVertex2i(0,1000);
	glVertex2i(1000,1000);
	glVertex2i(1000,0);
	glVertex2i(0,0);
	glEnd();*/

    glClearColor(0.0,0.0,0.0,0.0);
	glutPostRedisplay();
    glutTimerFunc(5, Night, 0);
    glFlush();

}
}

void myKeyboard(unsigned char key, int x, int y){
	switch (key)
	{

    case 'r':
        rainday = true;
        Rain(_rain);
        sndPlaySound("River.wav",SND_ASYNC|SND_LOOP);
        //sndPlaySound("River.wav",SND_MEMORY|SND_ASYNC);
        break;

    case 'e':
        rainday = false;
		sndPlaySound(NULL,SND_ASYNC);
        break;

    case 'n':
        night = true;
        Night(_nt);
        break;

    case 'b':
        night = false;
        glClearColor(0.0,0.5,0.8,1.0);
        break;

    case 27:     // ESC key
        exit(0);
        break;

	default:
	break;
	}
}

void myDisplay(void)
{

glClear(GL_COLOR_BUFFER_BIT);
glLoadIdentity();

building();
grassANDroad();
car();



glFlush();  // Render now


}




int main(int iArgc, char** cppArgv)

{


glutInit(&iArgc, cppArgv); // initialize the toolkit

glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); // set the display mode

glutInitWindowSize(2000,1200); // set window size

glutInitWindowPosition(50, 100); // set window upper left corner position on screen

glutCreateWindow("A Heist in Royal Mint of Spain"); // open the screen window (Title: My First Attempt)

// register the callback functions

glutDisplayFunc(myDisplay);

myInit(); // additional initializations as necessary
glutTimerFunc(1000, update, 0);

glutMainLoop(); // go into a endless loop

return 0;

}
