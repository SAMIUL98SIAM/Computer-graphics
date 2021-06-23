#include<cstdio>
#include <windows.h>  // for MS Windows
#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include <GL/gl.h>
#include <GL/glut.h>
#include<math.h>
# define PI           3.14159265358979323846
GLfloat position = 0.0f,tion=0.0f;
GLfloat speed = 0.01f,pstn=0.0f;
GLfloat pos = 0.0,spd=0.005f,dps=0.01f;
//GLfloat pos1 = 0.0,spd1=0.01Sf,dps1=0.01f;
GLfloat po=0.0,ima=0.0f;
GLfloat stnd=0.0f,st=0.003,stan=0.0;
 int i;
 int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;
	GLfloat radus =.05f,radis=0.01;


void update(int value) {

    if(position > 1.20)
        position = -1;

    position += speed;

    if(stnd > 1.20)
        stnd = -1;

    stnd += st;

    if(stan > 1.20)
        stan = -1;

    stan += st;

    if(ima > 1.60)
        ima = -1;

    ima += dps;

    if(pos < -1.40)
        pos = 1;

    pos -= spd;

    // if(pos1 < -1.40)
    //    pos1 = 1;

    //pos1 -= spd1;

    if(po > 1.40)
        po = -1;

    po += speed;

    if(tion > 1.40)
        tion = -1;

    tion += spd;

    if(pstn > 1.40)
        pstn = -1;

    pstn += spd;

	glutPostRedisplay();


	glutTimerFunc(100, update, 0);
}
void init() {
   glClearColor(0.0f, 0.0f, 0.0f, 1.0f);
}



void sky()
{
    	glClear(GL_COLOR_BUFFER_BIT);
//sky
	glBegin(GL_QUADS);
	glColor3ub(0,191,255);
	glVertex2f(-1,1);
	glVertex2f(1,1);
	glVertex2f(1,0.4);
	glVertex2f(-1,0.4);
	glEnd();

     // glLoadIdentity();
}
void cloue(){
	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;
//    int i;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	   glLoadIdentity();
//    int i;

	GLfloat xx=-.5f; GLfloat yy=.8f; //GLfloat radus =.05f;
	//int trianglAmount = 20;
	//GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(xx, yy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (radius * cos(i *  twicePi / triangleAmount)),
			    yy + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat aa=-.55f; GLfloat bb=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(aa, bb); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            aa + (radius * cos(i *  twicePi / triangleAmount)),
			    bb + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat cc=-.45f; GLfloat dd=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(cc, dd); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            cc + (radius * cos(i *  twicePi / triangleAmount)),
			    dd + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat ee=-.52f; GLfloat ff=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(ee, ff); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ee + (radius * cos(i *  twicePi / triangleAmount)),
			    ff+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat gg=-.6f; GLfloat hh=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 255);
		glVertex2f(gg, hh); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            gg + (radius * cos(i *  twicePi / triangleAmount)),
			    hh+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}
void sun(){

GLfloat ggg=0; GLfloat hhh=0.8, rads=0.1;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(255, 255, 0);
		glVertex2f(ggg, hhh); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ggg + (rads * cos(i *  twicePi / triangleAmount)),
			    hhh+ (rads * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void road(){

 //road
    glBegin(GL_QUADS);
    glColor3ub(178,190,181);
    glVertex2f(-1,-0.99);
    glVertex2f(1,-0.99);
    glVertex2f(1,-0.83);
    glVertex2f(-1,-0.83);
    glEnd();


     //road lines
    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.9,-0.91);
    glVertex2f(-0.7,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.5,-0.91);
    glVertex2f(-0.3,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(-0.1,-0.91);
    glVertex2f(0.1,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.3,-0.91);
    glVertex2f(0.5,-0.91);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255,255,255);
    glVertex2f(0.7,-0.91);
    glVertex2f(0.9,-0.91);
    glEnd();
}

void truck(){

glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-0.95,-0.89);
	glVertex2f(-0.87,-0.89);
	glVertex2f(-0.87,-0.84);
	glVertex2f(-0.95,-0.84);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(255,0,0);
	glVertex2f(-0.87,-0.89);
	glVertex2f(-0.85,-0.89);
	glVertex2f(-0.85,-0.85);
	glVertex2f(-0.87,-0.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(-0.858,-0.87);
	glVertex2f(-0.85,-0.87);
	glVertex2f(-0.85,-0.86);
	glVertex2f(-0.858,-0.86);
	glEnd();


	GLfloat pp=-.89,qq=-.889,radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(pp,qq); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            pp + (radis * cos(i *  twicePi / triangleAmount)),
			    qq + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat ppp=-.93,qqq=-.889;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(ppp,qqq); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ppp + (radis * cos(i *  twicePi / triangleAmount)),
			    qqq + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void lorry(){
  glBegin(GL_QUADS);
	glColor3ub(32,178,170);
	glVertex2f(0.65,-0.91);
	glVertex2f(0.57,-0.91);
	glVertex2f(0.57,-0.96);
	glVertex2f(0.65,-0.96);
	glEnd();
	glBegin(GL_QUADS);
	glColor3ub(32,178,170);
	glVertex2f(0.57,-0.925);
	glVertex2f(0.57,-0.96);
	glVertex2f(0.55,-0.96);
	glVertex2f(0.55,-0.925);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,255);
	glVertex2f(0.55,-0.935);
	glVertex2f(0.558,-0.935);
	glVertex2f(0.558,-0.945);
	glVertex2f(0.55,-0.945);
	glEnd();

	GLfloat ccc=.63,ddd=-.96;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(ccc,ddd); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ccc + (radis * cos(i *  twicePi / triangleAmount)),
			    ddd + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j=.59,n=-.96;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(j,n); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j + (radis * cos(i *  twicePi / triangleAmount)),
			    n + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void car(){


glBegin(GL_QUADS);
	glColor3ub(139,26,26 );
	glVertex2f(-0.57,-0.85);
	glVertex2f(-0.48,-0.85);
	glVertex2f(-0.48,-0.89);
	glVertex2f(-0.57,-0.89);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(139,26,26 );
	glVertex2f(-0.56,-0.85);
	glVertex2f(-0.56,-0.840);
	glVertex2f(-0.51,-0.840);
	glVertex2f(-0.51,-0.85);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(255,255,255 );
	glVertex2f(-0.49,-0.865);
	glVertex2f(-0.48,-0.865);
	glVertex2f(-0.48,-0.876);
	glVertex2f(-0.49,-0.876);
	glEnd();

    GLfloat ss=-.55,tt=-.889;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(ss,tt); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ss + (radis * cos(i *  twicePi / triangleAmount)),
			    tt + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat sss=-.52,ttt=-.889;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(sss,ttt); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            sss + (radis * cos(i *  twicePi / triangleAmount)),
			    ttt + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	}


	void river(){

	 glBegin(GL_QUADS);
    glColor3ub(32,178,170);
    glVertex2f(-1,0.4);
    glVertex2f(1,0.4);
    glVertex2f(1,-0.8);
    glVertex2f(-1,-0.8);
    glEnd();
	}

	void forest(){
	 glBegin(GL_POLYGON);
    glColor3ub(69,189,46);
    glVertex2f(-1,-0.6);
    glVertex2f(0,-0.25);
    glVertex2f(-0.3,-0.82);
    glVertex2f(-1,-0.82);
    glEnd();

      glBegin(GL_POLYGON);
   glColor3ub(65,189,46);
    glVertex2f(-0.3,-0.82);
    glVertex2f(1,-0.82);
    glVertex2f(1,-0.45);
    glVertex2f(-0.4,-0.4);
    glEnd();
	}

void forestopsitside(){
//another side
glBegin(GL_TRIANGLES);
	glColor3ub(85,107,47);
	glVertex2f(-.7,.4);
    glVertex2f(-.3,.4);
    glVertex2f(-.5,.6);
    glEnd();
    glBegin(GL_TRIANGLES);
	glColor3ub(85,107,47);
	glVertex2f(-.3,.4);
    glVertex2f(-.0,.4);
    glVertex2f(-.18,.6);
    glEnd();


GLfloat radism1;
      GLfloat m1=-.9,n1=0.32;radism1=0.3;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m1,n1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m1 + (radism1 * cos(i *  twicePi / triangleAmount)),
			    n1 + (radism1 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat radism2;
      GLfloat m2=-.5,n2=0.4;radism2=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m1,n1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m2 + (radism2 * cos(i *  twicePi / triangleAmount)),
			    n2 + (radism2 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat radism199;
      GLfloat m199=-.3,n199=0.4;radism199=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m1,n1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m199 + (radism199 * cos(i *  twicePi / triangleAmount)),
			    n199 + (radism199 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat radism3;
      GLfloat m3=-.0,n3=0.39;radism3=0.18;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m3,n3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m3 + (radism3 * cos(i *  twicePi / triangleAmount)),
			    n3 + (radism3 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat radism4;
      GLfloat m4=.2,n4=0.39;radism4=0.18;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m3,n3); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m4 + (radism4 * cos(i *  twicePi / triangleAmount)),
			    n4 + (radism4 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat radism5;
      GLfloat m5=.50,n5=0.4;radism5=0.2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m5,n5); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m5 + (radism5 * cos(i *  twicePi / triangleAmount)),
			    n5 + (radism5 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat radism6;
      GLfloat m6=.80,n6=0.4;radism6=0.2;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m6,n6); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m6 + (radism6 * cos(i *  twicePi / triangleAmount)),
			    n6 + (radism6 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat radism7;
      GLfloat m7=.9,n7=0.4;radism7=0.12;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,100,0);
		glVertex2f(m7,n7); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m7 + (radism7 * cos(i *  twicePi / triangleAmount)),
			    n7 + (radism7 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();







     glBegin(GL_POLYGON);
    glColor3ub(50,205,50);
    glVertex2f(-1,0.4);
    glVertex2f(-1,.037);
    glVertex2f(-0.8,.001);
    glVertex2f(-0.5,.1);
    glVertex2f(-0.3,.2);
    glVertex2f(0.2,0.2);
    glVertex2f(0.5,0.2);
    glVertex2f(0.7,0.2);
    glVertex2f(0.9,0.2);

    glVertex2f(1,.22);
    glVertex2f(1,.4);

    glEnd();


}
void boat(){

 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.1f, -0.20f);
	glVertex2f(-0.05f, -0.25f);
	glVertex2f(0.05f, -0.25f);
    glVertex2f(0.1f, -0.2f);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(255, 153, 0);
	glVertex2f(-0.03,-0.2);
	glVertex2f(0.03f,-0.2f);
	glVertex2f(0.015f, -0.18f);
	glVertex2f(-0.015f, -0.18f);

	glEnd();
}
void boat1(){

glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.45f, 0.15f);
	glVertex2f(-0.4,0.1);
	glVertex2f(-0.3,0.1);
    glVertex2f(-0.25,0.15);
    glEnd();

	glBegin(GL_LINES);
	glLineWidth(2);
	glVertex2f(-0.42,0.1);
	glVertex2f(-0.42,0.2);



	glEnd();
}

void boat2(){
 glBegin(GL_POLYGON);
	glColor3ub(0,0,0);
	glVertex2f(-0.1f, -0.0f);
	glVertex2f(-0.05f, -0.05f);
	glVertex2f(0.05f, -0.05f);
    glVertex2f(0.1f, -0.0f);
    glEnd();

	glBegin(GL_POLYGON);
	glColor3ub(205,38,38);
	glVertex2f(-0.03,-0.0);
	glVertex2f(0.03f,-0.0f);
	glVertex2f(0.015f, 0.02f);
	glVertex2f(-0.015f, 0.02f);


	glEnd();

}

void tree1(){

 glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(0.6,-0.5);
    glVertex2f(0.62,-0.45);
    glVertex2f(0.63,-0.49);
    glVertex2f(0.64,-0.45);
    glVertex2f(0.65,-0.5);
    glVertex2f(0.64,-0.2);
    glVertex2f(0.61,-0.2);

    glEnd();
 glLoadIdentity();

GLfloat radism8;
      GLfloat m8=.6,n8=-.1;radism8=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m8,n8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m8 + (radism8 * cos(i *  twicePi / triangleAmount)),
			    n8 + (radism8 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat radism9;
      GLfloat m9=.7,n9=-.15;radism9=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m8,n8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m9 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n9 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat radism10;
      GLfloat m10=.75,n10=-.05;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,128,0);
		glVertex2f(m8,n8); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m10 + (radism10 * cos(i *  twicePi / triangleAmount)),
			    n10 + (radism10 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	//GLfloat radism10;
      GLfloat m11=.5,n11=0.05;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m11,n11); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m11 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n11 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	    GLfloat m12=.6,n12=0.1;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m12,n12); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m12 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n12 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	   GLfloat m13=.55,n13=-0.18;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m13,n13); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m13 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n13 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	  GLfloat m14=.64,n14=-0.08;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m14,n14); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m14 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n14 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

//Tree

	 glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(0.1,-0.5);
    glVertex2f(0.12,-0.45);
    glVertex2f(0.13,-0.49);
    glVertex2f(0.14,-0.45);
    glVertex2f(0.15,-0.5);
    glVertex2f(0.14,-0.2);
    glVertex2f(0.11,-0.2);

    glEnd();
   GLfloat m15=.04,n15=-0.15;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m15,n15); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m15 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n15 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	  GLfloat m16=.2,n16=-0.15;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m16,n16); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m16 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n16 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m17=.1,n17=-0.1;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m17,n17); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m17 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n17 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
		GLfloat m18=.3,n18=-0.05;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m18,n18); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m18 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n18 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat m19=.0,n19=-0.05;radism10=0.1;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m19,n19); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m19 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n19 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	GLfloat m20=.12,n20=-0.0;radism10=0.13;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m20,n20); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m20 + (radism9 * cos(i *  twicePi / triangleAmount)),
			    n20 + (radism9 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




   glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(-0.2,-0.5);
    glVertex2f(-0.22,-0.45);
    glVertex2f(-0.23,-0.49);
    glVertex2f(-0.24,-0.45);
    glVertex2f(-0.25,-0.5);
    glVertex2f(-0.24,-0.2);
    glVertex2f(-0.21,-0.2);

glEnd();



    GLfloat radism101;
   GLfloat m21=-.3,n21=-0.15;radism101=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m21,n21); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m21 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n21 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();




		GLfloat m24=-.3,n24=-0.05;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m24,n24); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m24 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n24 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		GLfloat m23=-0.18,n23=-0.05;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m23,n23); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m23 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n23 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m25=-0.18,n25=-0.13;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m25,n25); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m25 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n25 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m26=-0.2,n26=-0.18;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m25,n25); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m26 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n26 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


	 glBegin(GL_POLYGON);
    glColor3ub(210,105,30);
    glVertex2f(-0.7,-0.6);
    glVertex2f(-0.72,-0.55);
    glVertex2f(-0.73,-0.59);
    glVertex2f(-0.74,-0.55);
    glVertex2f(-0.75,-0.6);
    glVertex2f(-0.74,-0.3);
    glVertex2f(-0.71,-0.3);
    	glEnd();

    	GLfloat m27=-0.8,n27=-0.3;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m27,n27); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m27 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n27 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

		GLfloat m28=-0.65,n28=-0.3;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m28,n28); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m28 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n28 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m29=-0.72,n29=-0.27;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m29,n29); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m29 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n29 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	GLfloat m30=-0.65,n30=-0.18;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m30,n30); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m30 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n30 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m31=-0.8,n31=-0.18;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m31,n31); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m31 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n31 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m32=-0.72,n32=-0.1;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m32,n32); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m32 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n32 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m33=-0.72,n33=-0.15;radism10=0.07;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(23,145,15);
		glVertex2f(m33,n33); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m33 + (radism101 * cos(i *  twicePi / triangleAmount)),
			    n33 + (radism101 * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
	//glFlush();
}


void tree2(){

  glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(0.74,0.28);
     glVertex2f(0.9,0.28);
     glVertex2f(0.8155,0.35);
      glEnd();

     glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(0.76,0.31);
     glVertex2f(0.88,0.31);
     glVertex2f(0.8155,0.38);
      glEnd();


     glBegin(GL_QUADS);
     glColor3ub(139,90,43);
     glVertex2f(0.81,0.2);
     glVertex2f(0.82,0.2);
     glVertex2f(0.82,0.28);
     glVertex2f(0.81,0.28);
     glEnd();

      //2

    glBegin(GL_TRIANGLES);
     glColor3ub(107,142,35);
     glVertex2f(0.56,0.32);
     glVertex2f(0.67,0.32);
     glVertex2f(0.62,0.38);
      glEnd();

       glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(0.58,0.35);
     glVertex2f(0.65,0.35);
     glVertex2f(0.617,0.4);
      glEnd();


     glBegin(GL_QUADS);
     glColor3ub(139,90,43);
     glVertex2f(0.61,0.25);
     glVertex2f(0.62,0.25);
     glVertex2f(0.62,0.32);
     glVertex2f(0.61,0.32);
     glEnd();


     //3


      glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(0.22,0.31);
     glVertex2f(0.418,0.31);
     glVertex2f(0.3155,0.37);
      glEnd();


      glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(0.26,0.346);
     glVertex2f(0.38,0.346);
     glVertex2f(0.3155,0.399);
      glEnd();

     glBegin(GL_QUADS);
     glColor3ub(139,90,43);
     glVertex2f(0.31,0.25);
     glVertex2f(0.32,0.25);
     glVertex2f(0.32,0.32);
     glVertex2f(0.31,0.32);
     glEnd();

     //4

      glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(-0.20,0.32);
     glVertex2f(-0.43,0.32);
     glVertex2f(-0.3155,0.38);
      glEnd();


       glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(-0.22,0.35);
     glVertex2f(-0.40,0.35);
     glVertex2f(-0.3155,0.399);
      glEnd();

     glBegin(GL_QUADS);
     glColor3ub(139,90,43);
     glVertex2f(-0.31,0.25);
     glVertex2f(-0.32,0.25);
     glVertex2f(-0.32,0.32);
     glVertex2f(-0.31,0.32);
     glEnd();


    //5

     glBegin(GL_TRIANGLES);
     glColor3ub(107,142,35);
     glVertex2f(-0.95,0.22);
     glVertex2f(-0.69,0.22);
     glVertex2f(-0.8155,0.35);
      glEnd();


      glBegin(GL_TRIANGLES);
     glColor3ub(0,139,0);
     glVertex2f(-0.95,0.26);
     glVertex2f(-0.70,0.26);
     glVertex2f(-0.82,0.37);
      glEnd();

     glBegin(GL_QUADS);
     glColor3ub(139,90,43);
     glVertex2f(-0.81,0.05);
     glVertex2f(-0.83,0.05);
     glVertex2f(-0.83,0.22);
     glVertex2f(-0.81,0.22);
     glEnd();
}

void railline(){


	glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glLineWidth(5.0);
     glVertex2f(.95,-.68);
     glVertex2f(.95,-0.82);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.9,-.68);
     glVertex2f(.9,-0.82);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.85,-.68);
     glVertex2f(.85,-0.82);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.8,-.68);
     glVertex2f(.8,-0.82);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.75,-.68);
     glVertex2f(.75,-0.82);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.7,-.68);
     glVertex2f(.7,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.65,-.68);
     glVertex2f(.65,-0.82);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.6,-.68);
     glVertex2f(.6,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.55,-.68);
     glVertex2f(.55,-0.82);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.5,-.68);
     glVertex2f(.5,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.45,-.68);
     glVertex2f(.45,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.4,-.68);
     glVertex2f(.4,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.35,-.68);
     glVertex2f(.35,-0.82);
     glEnd();


     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.3,-.68);
     glVertex2f(.3,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.3,-.68);
     glVertex2f(.3,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.25,-.68);
     glVertex2f(.25,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.2,-.68);
     glVertex2f(.2,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.15,-.68);
     glVertex2f(.15,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.1,-.68);
     glVertex2f(.1,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.05,-.68);
     glVertex2f(.05,-0.82);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(.0,-.68);
     glVertex2f(.0,-0.82);
     glEnd();

      glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.05,-.68);
     glVertex2f(-.05,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.95,-.68);
     glVertex2f(-.95,-0.82);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.9,-.68);
     glVertex2f(-.9,-0.82);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.85,-.68);
     glVertex2f(-.85,-0.82);
     glEnd();
           glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.8,-.68);
     glVertex2f(-.8,-0.82);
     glEnd();
          glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.75,-.68);
     glVertex2f(-.75,-0.82);
     glEnd();
      glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.7,-.68);
     glVertex2f(-.7,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.65,-.68);
     glVertex2f(-.65,-0.82);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.6,-.68);
     glVertex2f(-.6,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.55,-.68);
     glVertex2f(-.55,-0.82);
     glEnd();
     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.5,-.68);
     glVertex2f(-.5,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.45,-.68);
     glVertex2f(-.45,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.4,-.68);
     glVertex2f(-.4,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.35,-.68);
     glVertex2f(-.35,-0.82);
     glEnd();


     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.3,-.68);
     glVertex2f(-.3,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.3,-.68);
     glVertex2f(-.3,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.25,-.68);
     glVertex2f(-.25,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.2,-.68);
     glVertex2f(-.2,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.15,-.68);
     glVertex2f(-.15,-0.82);
     glEnd();

     glBegin(GL_LINES);
     glColor3ub(128,136,137);
     glVertex2f(-.1,-.68);
     glVertex2f(-.1,-0.82);
     glEnd();

	 glBegin(GL_LINES);
     glColor3ub(75,48,32);
     glVertex2f(-1,-0.79);
     glVertex2f(1,-0.79);
     glEnd();


	 glBegin(GL_LINES);
     glColor3ub(75,48,32);
     glVertex2f(-1,-0.71);
     glVertex2f(1,-0.71);
     glEnd();

}
void train(){

glBegin(GL_TRIANGLES);
      glColor3ub(100,26,26);
      glVertex2f(0.6,-0.79);
      glVertex2f(0.6,-0.7);
      glVertex2f(0.57,-0.745);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(0,0,128);
    // glVertex2f(0.6,-0.79);
      glVertex2f(0.6,-0.7);
      glVertex2f(0.65,-0.7);
      glVertex2f(0.65,-0.79);
      glVertex2f(0.6,-0.79);
      glEnd();

      glBegin(GL_QUADS);
      glColor3ub(0,0,128);
    // glVertex2f(0.6,-0.79);

       glVertex2f(0.65,-0.65);
       glVertex2f(0.65,-0.79);
       glVertex2f(0.75,-0.79);
       glVertex2f(0.75,-0.65);
       glEnd();
       //window
       glBegin(GL_QUADS);
       glColor3ub(255,250,205);
       glVertex2f(0.68,-0.68);
       glVertex2f(0.72,-0.68);
       glVertex2f(0.72,-0.72);
       glVertex2f(0.68,-0.72);
       glEnd();

       glBegin(GL_QUADS);
       glColor3ub(0,0,205);
       glVertex2f(0.76,-0.68);
       glVertex2f(0.76,-0.79);
       glVertex2f(0.9,-0.79);
       glVertex2f(0.9,-0.68);
       glEnd();

       //window

        glBegin(GL_QUADS);
       glColor3ub(255,250,205);
       glVertex2f(0.79,-0.7);
       glVertex2f(0.88,-0.7);
       glVertex2f(0.88,-0.73);
       glVertex2f(0.79,-0.73);
       glEnd();

       glBegin(GL_QUADS);
       glColor3ub(0,0,205);
       glVertex2f(0.91,-0.68);
       glVertex2f(0.91,-0.79);
       glVertex2f(1.05,-0.79);
       glVertex2f(1.05,-0.68);
       glEnd();

        //window

        glBegin(GL_QUADS);
       glColor3ub(255,250,205);
       glVertex2f(0.93,-0.7);
       glVertex2f(1.02,-0.7);
       glVertex2f(1.02,-0.73);
       glVertex2f(0.93,-0.73);


    glEnd();
    GLfloat radisT;
    GLfloat m34=0.65,n34=-0.78;radisT=0.02;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(m34,n34); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m34 + (radisT * cos(i *  twicePi / triangleAmount)),
			    n34 + (radisT * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m35=0.72,n35=-0.78;radisT=0.02;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(m35,n35); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m35 + (radisT * cos(i *  twicePi / triangleAmount)),
			    n35 + (radisT * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m36=0.8,n36=-0.78;radisT=0.02;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(m36,n36); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m36 + (radisT * cos(i *  twicePi / triangleAmount)),
			    n36 + (radisT * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m37=0.86,n37=-0.78;radisT=0.02;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(m37,n37); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m37 + (radisT * cos(i *  twicePi / triangleAmount)),
			    n37 + (radisT * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m38=0.93,n38=-0.78;radisT=0.02;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(m38,n38); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m38 + (radisT * cos(i *  twicePi / triangleAmount)),
			    n38 + (radisT * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat m39=1.02,n39=-0.78;radisT=0.02;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(m39,n39); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            m39 + (radisT * cos(i *  twicePi / triangleAmount)),
			    n39 + (radisT * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void bird(){

 glLineWidth(2.5);
  glBegin(GL_LINES);
  glColor3ub(47,79,79);
  glVertex2f(0.2f,0.8f);
  glVertex2f(0.18f,0.77f);

  glColor3ub(47,79,79);
  glVertex2f(0.18f,0.77f);
  glVertex2f(0.15f,0.79f);

  glColor3ub(47,79,79);
  glVertex2f(0.13f,0.8f);
  glVertex2f(0.11f,0.77f);

  glColor3ub(47,79,79);
  glVertex2f(0.11f,0.77f);
  glVertex2f(0.08f,0.79f);

  glEnd();
}


void car2(){
glBegin(GL_QUADS);
	glColor3ub(255 ,0, 0);
	glVertex2f(-0.57,-0.91);
	glVertex2f(-0.5,-0.91);
	glVertex2f(-0.5,-0.96);
	glVertex2f(-0.57,-0.96);
	glEnd();

	glBegin(GL_QUADS);
	glColor3ub(205,92,92);
    glVertex2f(-0.518,-0.89);
	glVertex2f(-0.518,-0.91);
	glVertex2f(-0.557,-0.91);
	glVertex2f(-0.557,-0.89);

	glEnd();

	 glBegin(GL_QUADS);
	glColor3ub(255 ,255, 255);
	glVertex2f(-0.57,-0.93);
	glVertex2f(-0.55,-0.93);
	glVertex2f(-0.55,-0.942);
	glVertex2f(-0.57,-0.942);
	glEnd();



	GLfloat ccc1=-.55,ddd1=-.96;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
	glColor3ub(0,0,0);
		glVertex2f(ccc1,ddd1); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ccc1 + (radis * cos(i *  twicePi / triangleAmount)),
			    ddd1 + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat j221=-.52,n221=-.96;//radis=0.01;
	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(j221,n221); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            j221 + (radis * cos(i *  twicePi / triangleAmount)),
			    n221 + (radis * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}
void plane(){


 glBegin(GL_QUADS);
      glColor3f(1.0f, 0.0f, 0.0f);
      glVertex2f(0.0f, 0.63f);
      glVertex2f( 0.1f, 0.63f);
      glVertex2f( 0.05f,  0.65f);
      glVertex2f(0.0f,  0.65f);
       glEnd();

    glBegin(GL_TRIANGLES);
   glColor3ub(0.0f, 0.0f, 1.0f);
   glVertex2f(0.0f,0.65f);
   glVertex2f(0.03f, 0.65f);
   glVertex2f(0.0f, 0.67f);
   glEnd();


}

void house_day(){


//house1

    glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(-0.6,0.35);
	glVertex2f(-0.58,0.35);
	glVertex2f(-0.56,0.32);
	glVertex2f(-0.62,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(-0.61,0.32);
	glVertex2f(-0.57,0.32);
	glVertex2f(-0.57,0.28);
	glVertex2f(-0.61,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(-0.60,0.31);
	glVertex2f(-0.585,0.31);
	glVertex2f(-0.585,0.28);
	glVertex2f(-0.60,0.28);

	glEnd();

	// house 2

	 glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(-0.55,0.35);
	glVertex2f(-0.52,0.35);
	glVertex2f(-0.5,0.32);
	glVertex2f(-0.58,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(-0.56,0.32);
	glVertex2f(-0.51,0.32);
	glVertex2f(-0.51,0.28);
	glVertex2f(-0.56,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(-0.55,0.31);
	glVertex2f(-0.52,0.31);
	glVertex2f(-0.52,0.28);
	glVertex2f(-0.55,0.28);

	glEnd();

 //house 3

	 glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(0.55,0.35);
	glVertex2f(0.52,0.35);
	glVertex2f(0.5,0.32);
	glVertex2f(0.58,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(0.56,0.32);
	glVertex2f(0.51,0.32);
	glVertex2f(0.51,0.28);
	glVertex2f(0.56,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.55,0.31);
	glVertex2f(0.52,0.31);
	glVertex2f(0.52,0.28);
	glVertex2f(0.55,0.28);

	glEnd();

	//house 4

    glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(0.46,0.35);
	glVertex2f(0.49,0.35);
	glVertex2f(0.51,0.32);
	glVertex2f(0.44,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(0.45,0.32);
	glVertex2f(0.50,0.32);
	glVertex2f(0.50,0.28);
	glVertex2f(0.45,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(0,0,0);
    glVertex2f(0.46,0.31);
	glVertex2f(0.49,0.31);
	glVertex2f(0.49,0.28);
	glVertex2f(0.46,0.28);

	glEnd();

}
void skynight(){
glBegin(GL_QUADS);
	glColor3ub(70,130,180);
	glVertex2f(-1,1);
	glVertex2f(1,1);
	glVertex2f(1,0.4);
	glVertex2f(-1,0.4);
	glEnd();


}

void skyrain(){

    glBegin(GL_QUADS);
	glColor3ub(70,130,180);
	glVertex2f(-1,1);
	glVertex2f(1,1);
	glVertex2f(1,0.4);
	glVertex2f(-1,0.4);
	glEnd();

      glLoadIdentity();
    int i;

	GLfloat x=.5f; GLfloat y=.8f; GLfloat radius =.05f;
	int triangleAmount = 20;
	GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(x, y); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat a=.55f; GLfloat b=.78f;
//    int i;
	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(a, b); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            a + (radius * cos(i *  twicePi / triangleAmount)),
			    b + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat c=.45f; GLfloat d=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(c, d); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            c + (radius * cos(i *  twicePi / triangleAmount)),
			    d + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat e=.52f; GLfloat f=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(e, f); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            e + (radius * cos(i *  twicePi / triangleAmount)),
			    f+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat g=.6f; GLfloat h=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(g, h); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            g + (radius * cos(i *  twicePi / triangleAmount)),
			    h+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	   glLoadIdentity();
//    int i;

	GLfloat xx=-.5f; GLfloat yy=.8f; GLfloat radus =.05f;
	//int trianglAmount = 20;
	//GLfloat twicePi = 2.0f * PI;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(xx, yy); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            xx + (radus * cos(i *  twicePi / triangleAmount)),
			    yy + (radus * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

GLfloat aa=-.55f; GLfloat bb=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(aa, bb); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            aa + (radius * cos(i *  twicePi / triangleAmount)),
			    bb + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat cc=-.45f; GLfloat dd=.78f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(cc, dd); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            cc + (radius * cos(i *  twicePi / triangleAmount)),
			    dd + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat ee=-.52f; GLfloat ff=.75f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(ee, ff); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ee + (radius * cos(i *  twicePi / triangleAmount)),
			    ff+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

	GLfloat gg=-.6f; GLfloat hh=.77f;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(47,79,79);
		glVertex2f(gg, hh); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            gg + (radius * cos(i *  twicePi / triangleAmount)),
			    hh+ (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();

}

void star(){


glPointSize(2);
glBegin(GL_POINTS);
	glColor3ub(255,255,255);

	glVertex2f(-0.9,0.9);
	glVertex2f(-0.8,0.8);
	glVertex2f(-0.85,0.95);
    glVertex2f(-0.75,0.85);
    glVertex2f(-0.55,0.85);
    glVertex2f(-0.25,0.85);
    glVertex2f(-0.25,0.75);
    glVertex2f(-0.0,0.75);
    glVertex2f(0.25,0.85);
    glVertex2f(0.275,0.75);
    glVertex2f(0.0,0.75);
    glVertex2f(0.9,0.91);
	glVertex2f(0.82,0.82);
	glVertex2f(0.875,0.95);
    glVertex2f(0.75,0.815);
    glVertex2f(0.55,0.815);



glEnd();




}


void moon(){

GLfloat ggg=0.5; GLfloat hhh=0.8, rads=0.1;

	glBegin(GL_TRIANGLE_FAN);
	    glColor3ub(240,230,140);
		glVertex2f(ggg, hhh); // center of circle
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            ggg + (rads * cos(i *  twicePi / triangleAmount)),
			    hhh+ (rads * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();


}

void house_night(){

//house1

    glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(-0.6,0.35);
	glVertex2f(-0.58,0.35);
	glVertex2f(-0.56,0.32);
	glVertex2f(-0.62,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(-0.61,0.32);
	glVertex2f(-0.57,0.32);
	glVertex2f(-0.57,0.28);
	glVertex2f(-0.61,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(255,215,0);
    glVertex2f(-0.60,0.31);
	glVertex2f(-0.585,0.31);
	glVertex2f(-0.585,0.28);
	glVertex2f(-0.60,0.28);

	glEnd();

	// house 2

	 glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(-0.55,0.35);
	glVertex2f(-0.52,0.35);
	glVertex2f(-0.5,0.32);
	glVertex2f(-0.58,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(-0.56,0.32);
	glVertex2f(-0.51,0.32);
	glVertex2f(-0.51,0.28);
	glVertex2f(-0.56,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(255,215,0);
    glVertex2f(-0.55,0.31);
	glVertex2f(-0.52,0.31);
	glVertex2f(-0.52,0.28);
	glVertex2f(-0.55,0.28);

	glEnd();

 //house 3

	 glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(0.55,0.35);
	glVertex2f(0.52,0.35);
	glVertex2f(0.5,0.32);
	glVertex2f(0.58,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(0.56,0.32);
	glVertex2f(0.51,0.32);
	glVertex2f(0.51,0.28);
	glVertex2f(0.56,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(255,215,0);
    glVertex2f(0.55,0.31);
	glVertex2f(0.52,0.31);
	glVertex2f(0.52,0.28);
	glVertex2f(0.55,0.28);

	glEnd();

	//house 4

    glBegin(GL_QUADS);
	glColor3ub(139,69,19);
    glVertex2f(0.46,0.35);
	glVertex2f(0.49,0.35);
	glVertex2f(0.51,0.32);
	glVertex2f(0.44,0.32);

	glEnd();


	  glBegin(GL_QUADS);
	glColor3ub(205,133,63);
    glVertex2f(0.45,0.32);
	glVertex2f(0.50,0.32);
	glVertex2f(0.50,0.28);
	glVertex2f(0.45,0.28);

	glEnd();

	  glBegin(GL_QUADS);
	glColor3ub(255,215,0);
    glVertex2f(0.46,0.31);
	glVertex2f(0.49,0.31);
	glVertex2f(0.49,0.28);
	glVertex2f(0.46,0.28);

	glEnd();


}

void rain(){

     glPointSize( 2.5 );
      glBegin(GL_POINTS);

	glColor3ub(139,212,235);
	//glPointSize(100);

	glVertex2f(-0.9,0.9);
	glVertex2f(-0.8,0.8);
	glVertex2f(-0.85,0.95);
    glVertex2f(-0.75,0.85);
    glVertex2f(-0.55,0.85);
    glVertex2f(-0.25,0.85);
    glVertex2f(-0.25,0.75);
    glVertex2f(-0.0,0.75);
    glVertex2f(0.25,0.85);
    glVertex2f(0.275,0.75);
    glVertex2f(0.0,0.75);
    glVertex2f(0.9,0.91);
	glVertex2f(0.82,0.82);
	glVertex2f(0.875,0.95);
    glVertex2f(0.75,0.815);
    glVertex2f(0.55,0.815);

	glVertex2f(-0.7,0.9);
	glVertex2f(-0.6,0.8);
	glVertex2f(-0.5,0.95);
    glVertex2f(-0.4,0.85);
    glVertex2f(-0.55,0.85);
    glVertex2f(-0.25,0.85);
    glVertex2f(-0.2,0.75);
    glVertex2f(-0.0,0.75);
    glVertex2f(0.2,0.85);
    glVertex2f(0.275,0.75);
    glVertex2f(0.0,0.75);
    glVertex2f(0.6,0.91);
	glVertex2f(0.8,0.82);
	glVertex2f(0.75,0.95);
    glVertex2f(0.78,0.815);
    glVertex2f(0.5,0.815);

	glVertex2f(-0.9,-0.9);
	glVertex2f(-0.8,-0.8);
	glVertex2f(-0.85,-0.95);
    glVertex2f(-0.75,-0.85);
    glVertex2f(-0.55,-0.85);
    glVertex2f(-0.25,-0.85);
    glVertex2f(-0.25,-0.75);
    glVertex2f(-0.0,-0.75);
     glVertex2f(0.25,-0.85);
    glVertex2f(0.275,-0.75);
    glVertex2f(0.0,-0.75);
    glVertex2f(0.9,-0.91);
	glVertex2f(0.82,-0.82);
	glVertex2f(0.875,-0.95);
    glVertex2f(0.75,-0.815);
    glVertex2f(0.55,-0.815);

	glVertex2f(-0.7,-0.9);
	glVertex2f(-0.6,-0.8);
	glVertex2f(-0.5,-0.95);
    glVertex2f(-0.4,-0.85);
    glVertex2f(-0.55,-0.85);
    glVertex2f(-0.25,-0.85);
    glVertex2f(-0.2,-0.75);
    glVertex2f(-0.0,-0.75);
     glVertex2f(0.2,-0.85);
    glVertex2f(0.275,-0.75);
    glVertex2f(0.0,-0.75);
    glVertex2f(0.6,-0.91);
	glVertex2f(0.8,-0.82);
	glVertex2f(0.75,-0.95);
    glVertex2f(0.78,-0.815);
    glVertex2f(0.5,-0.815);

    glVertex2f(-0.9,0.49);
	glVertex2f(-0.8,0.48);
	glVertex2f(-0.85,0.45);
    glVertex2f(-0.75,0.45);
    glVertex2f(-0.55,0.45);
    glVertex2f(-0.25,0.45);
    glVertex2f(-0.25,0.45);
    glVertex2f(-0.0,0.45);
     glVertex2f(0.25,0.845);
    glVertex2f(0.275,0.65);
    glVertex2f(0.0,0.75);
    glVertex2f(0.9,0.651);
	glVertex2f(0.82,0.22);
	glVertex2f(0.875,0.45);
    glVertex2f(0.75,0.415);
    glVertex2f(0.55,0.415);

	glVertex2f(-0.7,0.49);
	glVertex2f(-0.6,0.48);
	glVertex2f(-0.5,0.45);
    glVertex2f(-0.4,0.45);
    glVertex2f(-0.55,0.485);
    glVertex2f(-0.25,0.845);
    glVertex2f(-0.2,0.475);
    glVertex2f(-0.0,0.475);
     glVertex2f(0.2,0.485);
    glVertex2f(0.275,0.475);
    glVertex2f(0.0,0.475);
    glVertex2f(0.6,0.491);
	glVertex2f(0.8,0.482);
	glVertex2f(0.75,0.495);
    glVertex2f(0.78,0.4815);
    glVertex2f(0.5,0.4815);

	glVertex2f(-0.9,-0.49);
	glVertex2f(-0.8,-0.48);
	glVertex2f(-0.85,-0.495);
    glVertex2f(-0.75,-0.485);
    glVertex2f(-0.55,-0.485);
    glVertex2f(-0.25,-0.485);
    glVertex2f(-0.25,-0.475);
    glVertex2f(-0.0,-0.475);
     glVertex2f(0.25,-0.485);
    glVertex2f(0.275,-0.475);
    glVertex2f(0.0,-0.475);
    glVertex2f(0.9,-0.491);
	glVertex2f(0.82,-0.482);
	glVertex2f(0.875,-0.495);
    glVertex2f(0.75,-0.815);
    glVertex2f(0.55,-0.4815);

	glVertex2f(-0.7,-0.49);
	glVertex2f(-0.6,-0.48);
	glVertex2f(-0.5,-0.945);
    glVertex2f(-0.4,-0.854);
    glVertex2f(-0.55,-0.854);
    glVertex2f(-0.25,-0.485);
    glVertex2f(-0.2,-0.754);
    glVertex2f(-0.0,-0.475);
     glVertex2f(0.2,-0.685);
    glVertex2f(0.275,-0.375);
    glVertex2f(0.0,-0.475);
    glVertex2f(0.6,-0.981);
	glVertex2f(0.8,-0.182);
	glVertex2f(0.75,-0.295);
    glVertex2f(0.78,-0.6815);
    glVertex2f(0.5,-0.6815);



	glVertex2f(-0.99,0.29);
	glVertex2f(-0.58,0.38);
	glVertex2f(-0.785,0.295);
    glVertex2f(-0.175,0.385);
    glVertex2f(-0.355,0.685);
    glVertex2f(-0.235,0.585);
    glVertex2f(-0.425,0.575);
    glVertex2f(-0.10,0.275);
    glVertex2f(0.725,0.585);
    glVertex2f(0.7275,0.975);
    glVertex2f(0.10,0.375);
    glVertex2f(0.29,0.191);
	glVertex2f(0.782,0.382);
	glVertex2f(0.875,0.295);
    glVertex2f(0.475,0.2815);
    glVertex2f(0.155,0.1815);

	glVertex2f(-0.27,0.29);
	glVertex2f(-0.46,0.38);
	glVertex2f(-0.45,0.495);
    glVertex2f(-0.54,0.585);
    glVertex2f(-0.655,0.685);
    glVertex2f(-0.725,0.85);
    glVertex2f(-0.92,0.275);
    glVertex2f(-0.10,0.75);
    glVertex2f(0.2,0.85);
    glVertex2f(0.275,0.575);
    glVertex2f(0.10,0.175);
    glVertex2f(0.6,0.91);
	glVertex2f(0.8,0.182);
	glVertex2f(0.175,0.95);
    glVertex2f(0.78,0.1815);
    glVertex2f(0.15,0.815);

	glVertex2f(-0.19,-0.9);
	glVertex2f(-0.18,-0.8);
	glVertex2f(-0.85,-0.195);
    glVertex2f(-0.75,-0.185);
    glVertex2f(-0.155,-0.85);
    glVertex2f(-0.25,-0.185);
    glVertex2f(-0.125,-0.75);
    glVertex2f(-0.0,-0.175);
     glVertex2f(0.215,-0.85);
    glVertex2f(0.275,-0.175);
    glVertex2f(0.10,-0.575);
    glVertex2f(0.93,-0.391);
	glVertex2f(0.382,-0.82);
	glVertex2f(0.875,-0.395);
    glVertex2f(0.375,-0.815);
    glVertex2f(0.355,-0.815);

	glVertex2f(-0.107,-0.9);
	glVertex2f(-0.106,-0.8);
	glVertex2f(-0.0105,-0.95);
    glVertex2f(-0.014,-0.85);
    glVertex2f(-0.355,-0.585);
    glVertex2f(-0.525,-0.585);
    glVertex2f(-0.2,-0.75);
    glVertex2f(-0.0,-0.75);
     glVertex2f(0.2,-0.85);
    glVertex2f(0.275,-0.75);
    glVertex2f(0.0,-0.75);
    glVertex2f(0.6,-0.91);
	glVertex2f(0.8,-0.82);
	glVertex2f(0.75,-0.95);
    glVertex2f(0.78,-0.815);
    glVertex2f(0.5,-0.815);

    glVertex2f(-0.9,0.49);
	glVertex2f(-0.8,0.48);
	glVertex2f(-0.85,0.45);
    glVertex2f(-0.75,0.45);
    glVertex2f(-0.55,0.45);
    glVertex2f(-0.25,0.45);
    glVertex2f(-0.25,0.45);
    glVertex2f(-0.0,0.45);
     glVertex2f(0.25,0.845);
    glVertex2f(0.275,0.65);
    glVertex2f(0.0,0.75);
    glVertex2f(0.9,0.651);
	glVertex2f(0.82,0.22);
	glVertex2f(0.875,0.45);
    glVertex2f(0.75,0.415);
    glVertex2f(0.55,0.415);

	glVertex2f(-0.17,0.49);
	glVertex2f(-0.16,0.48);
	glVertex2f(-0.15,0.45);
    glVertex2f(-0.4,0.45);
    glVertex2f(-0.55,0.485);
    glVertex2f(-0.25,0.845);
    glVertex2f(-0.2,0.475);
    glVertex2f(-0.20,0.475);
     glVertex2f(0.2,0.485);
    glVertex2f(0.275,0.475);
    glVertex2f(0.20,0.475);
    glVertex2f(0.6,0.491);
	glVertex2f(0.8,0.482);
	glVertex2f(0.75,0.495);
    glVertex2f(0.78,0.4815);
    glVertex2f(0.5,0.4815);

	glVertex2f(-0.9,-0.49);
	glVertex2f(-0.8,-0.48);
	glVertex2f(-0.85,-0.495);
    glVertex2f(-0.75,-0.485);
    glVertex2f(-0.55,-0.485);
    glVertex2f(-0.25,-0.485);
    glVertex2f(-0.25,-0.475);
    glVertex2f(-0.0,-0.475);
     glVertex2f(0.25,-0.485);
    glVertex2f(0.275,-0.475);
    glVertex2f(0.0,-0.475);
    glVertex2f(0.9,-0.491);
	glVertex2f(0.82,-0.482);
	glVertex2f(0.875,-0.495);
    glVertex2f(0.75,-0.815);
    glVertex2f(0.55,-0.4815);

	glVertex2f(-0.7,-0.49);
	glVertex2f(-0.6,-0.48);
	glVertex2f(-0.5,-0.945);
    glVertex2f(-0.4,-0.854);
    glVertex2f(-0.55,-0.854);
    glVertex2f(-0.25,-0.485);
    glVertex2f(-0.2,-0.754);
    glVertex2f(-0.0,-0.475);
     glVertex2f(0.2,-0.685);
    glVertex2f(0.275,-0.375);
    glVertex2f(0.0,-0.475);
    glVertex2f(0.6,-0.981);
	glVertex2f(0.8,-0.182);
	glVertex2f(0.75,-0.295);
    glVertex2f(0.78,-0.6815);
    glVertex2f(0.5,-0.6815);



glEnd();



}



 void displayday()
 {
     sky();
     sun();
     glPushMatrix();
     glTranslatef(po,0.0f, 0.0f);
     plane();
     glPopMatrix();
     river();
      forestopsitside();
     forest();
     glPushMatrix();
     glTranslatef(po,0.0f, 0.0f);
     boat();
     glPopMatrix();

     boat1();
     house_day();
     glPushMatrix();
	 glTranslatef(pos,0.0f, 0.0f);
     boat2();
     glPopMatrix();
     tree2();

     forest();
      tree1();
     railline();
      glPushMatrix();
      glTranslatef(pos,0.0f, 0.0f);
     train();
      glPopMatrix();
     road();
     glPushMatrix();
     glTranslatef(po,0.0f, 0.0f);
     car();
     glPopMatrix();
      glPushMatrix();
     glTranslatef(pos,0.0f, 0.0f);
     car2();
     glPopMatrix();
     glPushMatrix();
     glTranslatef(ima,0.0f, 0.0f);
     truck();
     glPopMatrix();
     glPushMatrix();
     glTranslatef(pos,0.0f, 0.0f);
     lorry();
     glPopMatrix();
      glPushMatrix();
     glTranslatef(pos,0.0f, 0.0f);
     bird();
     glPopMatrix();

     glFlush();
 }

 void displaynight(){

      skynight();
      moon();
    // sun();
    star();
     glPushMatrix();
     glTranslatef(po,0.0f, 0.0f);
     plane();
     glPopMatrix();
     river();
      forestopsitside();
     forest();
     glPushMatrix();

     boat1();
     house_night();
     glPushMatrix();

     tree2();

     forest();
      tree1();
     railline();
      glPushMatrix();
      glTranslatef(pos,0.0f, 0.0f);
     train();
      glPopMatrix();
     road();
     glPushMatrix();
     glTranslatef(po,0.0f, 0.0f);
     car();
     glPopMatrix();
      glPushMatrix();
     glTranslatef(pos,0.0f, 0.0f);
     car2();
     glPopMatrix();
     glPushMatrix();
     glTranslatef(ima,0.0f, 0.0f);
     truck();
     glPopMatrix();
     glPushMatrix();
     glTranslatef(pos,0.0f, 0.0f);
     lorry();
     glPopMatrix();


     glFlush();


 }


 void displayrain(){

      skyrain();
      //moon();
    // sun();
   // star();
     glPushMatrix();
     glTranslatef(po,0.0f, 0.0f);
     plane();
     glPopMatrix();
     river();
      forestopsitside();
     forest();
     glPushMatrix();

     boat1();
     house_night();
     glPushMatrix();

     tree2();

     forest();
      tree1();
     railline();
      glPushMatrix();
      glTranslatef(pos,0.0f, 0.0f);
     train();
      glPopMatrix();
     road();
     glPushMatrix();
     glTranslatef(po,0.0f, 0.0f);
     car();
     glPopMatrix();
      glPushMatrix();
     glTranslatef(pos,0.0f, 0.0f);
     car2();
     glPopMatrix();
     glPushMatrix();
     glTranslatef(ima,0.0f, 0.0f);
     truck();
     glPopMatrix();
     glPushMatrix();
     glTranslatef(pos,0.0f, 0.0f);
     lorry();

     glPopMatrix();
     glPushMatrix();
     glTranslatef(0.0f,pos, 0.0f);
     rain();
          glPopMatrix();


     glFlush();


 }
 void handleKeypress(unsigned char key, int x, int y) {
	switch (key) {
	    case  'd':
	        glutDestroyWindow(1);
	        glutInitWindowSize(1240, 750);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("Highway Roadside View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayday);
          //  PlaySound(TEXT("bird-2.wav"), NULL, SND_ASYNC);
            break;
            break;
        case 'r':
            glutDestroyWindow(1);
	        glutInitWindowSize(1240, 750);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("Highway Roadside View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayrain);
           // PlaySound(TEXT("rain-07.wav"), NULL, SND_ASYNC);
            break;
         case 'n':
            glutDestroyWindow(1);
	        glutInitWindowSize(1240, 750);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("Highway Roadside View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displaynight);
           // PlaySound(TEXT("cricket-2.wav"), NULL, SND_ASYNC);
          //  glutPostRedisplay();
            break;
        case  'D':
	        glutDestroyWindow(1);
	        glutInitWindowSize(1240, 750);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("Highway Roadside View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayday);
           // PlaySound(TEXT("bird-2.wav"), NULL, SND_ASYNC);
            break;
            break;
        case 'R':
            glutDestroyWindow(1);
	        glutInitWindowSize(1240, 750);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("Highway Roadside View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displayrain);
          //  PlaySound(TEXT("rain-07.wav"), NULL, SND_ASYNC);
            break;
         case 'N':
            glutDestroyWindow(1);
	        glutInitWindowSize(1240, 750);
            glutInitWindowPosition((glutGet(GLUT_SCREEN_WIDTH)-1240)/2,(glutGet(GLUT_SCREEN_HEIGHT)-750)/2);
            glutCreateWindow("Highway Roadside View");
            glutKeyboardFunc(handleKeypress);
            glutDisplayFunc(displaynight);
          //  PlaySound(TEXT("cricket-2.wav"), NULL, SND_ASYNC);
           // glutPostRedisplay();


    }
}


int main(int argc, char** argv)
{
	glutInit(&argc, argv);
   glutInitWindowSize(720, 520);
   glutInitWindowPosition(80, 80);
   glutCreateWindow("Highway Roadside View");
   glutDisplayFunc(displayday);
   glutKeyboardFunc(handleKeypress);

   init();
   //PlaySound("a.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
	glutTimerFunc(100, update, 0);
   glutMainLoop();       // Enter the event-processing loop
	return 0;
}

