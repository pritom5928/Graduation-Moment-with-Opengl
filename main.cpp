#include<windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include<math.h>

static float	tp3	=  0;

void circle(GLfloat rx,GLfloat ry,GLfloat x,GLfloat y)
{
    int i=0;
    float angle;
    GLfloat PI = 2.0f * 3.1416;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x,y);
    for(i=0;i<100;i++)
    {
        angle = 2 * PI * i /100;
        glVertex2f(x+(cos(angle)*rx),y+(sin(angle)*ry));
    }
    glEnd();

}

void sun()
{
    glColor3f(0.9, 0.9, 0.0);
    circle(10.0, 16.0, 260.0, 260.0);
}
void cloud_move_right(GLfloat t){
    tp3=tp3+t;
    if(tp3>600)
        tp3 = 0;
    glutPostRedisplay();
}
void make_cloud(int x, int y)
{
    glColor3f(1.0,1.0,1.0);

    circle(8, 8, x+10, y);
    circle(8,8, x+20, y);
    circle(8,8, x+12, y+6);
    circle(8,8, x+12, y-6);
    circle(8, 8, x+18, y+5);
    circle(8,8, x+18, y-5);


}

void cloud()
{
    glPushMatrix();

    glTranslatef(tp3,0,0);
    make_cloud(200, 280);
    make_cloud(280, 250);
    make_cloud(80, 260);
    make_cloud(-100, 270);
    make_cloud(-50, 280);
    make_cloud(-150, 260);
    make_cloud(150, 285);
    make_cloud(-200, 275);
    glPopMatrix();

    cloud_move_right(.08);
}
void building()
{
     glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.4);
        glVertex2f(80.0, 100.0);
        glVertex2f(80.0, 200.0);
        glVertex2f(220.0,200.0);
        glVertex2f(220.0, 100.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.7, 0.4);
        glVertex2f(80.0, 100.0);
        glVertex2f(80.0, 200.0);
        glVertex2f(88.0,200.0);
        glVertex2f(88.0, 100.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.1, 0.7, 0.4);
        glVertex2f(212.0, 100.0);
        glVertex2f(212.0, 200.0);
        glVertex2f(220.0,200.0);
        glVertex2f(220.0, 100.0);
    glEnd();

     glBegin(GL_POLYGON);
    glColor3f(0.6, 0.7, 0.1);
        glVertex2f(80.0, 130.0);
        glVertex2f(80.0, 135.0);
        glVertex2f(220.0,135.0);
        glVertex2f(220.0, 130.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.7, 0.1);
        glVertex2f(80.0, 160.0);
        glVertex2f(80.0, 165.0);
        glVertex2f(220.0, 165.0);
        glVertex2f(220.0, 160.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.4, 0.2);
        glVertex2f(100.0, 100.0);
        glVertex2f(100.0, 130.0);
        glVertex2f(120.0,130.0);
        glVertex2f(120.0, 100.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.4, 0.2);
        glVertex2f(180.0, 100.0);
        glVertex2f(180.0, 130.0);
        glVertex2f(200.0,130.0);
        glVertex2f(200.0, 100.0);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.5);
        glVertex2f(100.0, 100.0);
        glVertex2f(100.0, 130.0);
        glVertex2f(106.0,122.0);
        glVertex2f(106.0, 108.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.5);
        glVertex2f(114.0, 108.0);
        glVertex2f(114.0, 122.0);
        glVertex2f(120.0,130.0);
        glVertex2f(120.0, 100.0);
    glEnd();




    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.5);
        glVertex2f(180.0, 100.0);
        glVertex2f(180.0, 130.0);
        glVertex2f(186.0,122.0);
        glVertex2f(186.0, 108.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.5);
        glVertex2f(194.0, 108.0);
        glVertex2f(194.0, 122.0);
        glVertex2f(200.0,130.0);
        glVertex2f(200.0, 100.0);
    glEnd();

    glColor3f(0.3, 0.5, 0.9);
    circle(8,10, 80, 200);
    glColor3f(0.3, 0.5, 0.9);
    circle(8,10, 220, 200);
    glColor3f(0.3, 0.5, 0.9);
    circle(5,8, 94, 200);
    glColor3f(0.3, 0.5, 0.9);
    circle(5,8, 206, 200);
    glColor3f(0.3, 0.5, 0.9);
    circle(12,8, 115, 200);
    glColor3f(0.3, 0.5, 0.9);
    circle(12,8, 185, 200);

}
void sky()
{
    glBegin(GL_POLYGON);
    glColor3f(0.3, 0.5, 0.9);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 300.0);
        glVertex2f(300.0, 300.0);
        glVertex2f(300.0, 0.0);
    glEnd();
}
void banner()
{
    glColor3f(0.9, 1.0, 0.7);
    circle(6.0,6.0,135.0,180.0);

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.4);
        glVertex2f(123.0, 174.0);
        glVertex2f(123.0, 186.0);
        glVertex2f(135.0, 186.0);
        glVertex2f(135.0, 174.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.4);
        glVertex2f(136.0, 177.0);
        glVertex2f(136.0, 183.0);
        glVertex2f(139.0, 180.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.9, 1.0, 0.7);
        glVertex2f(146.0, 174.0);
        glVertex2f(146.0, 186.0);
        glVertex2f(150.0, 186.0);
        glVertex2f(150.0, 174.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.4);
        glVertex2f(147.0, 176.0);
        glVertex2f(147.0, 184.0);
        glVertex2f(149.0, 184.0);
        glVertex2f(149.0, 176.0);
    glEnd();


    glColor3f(0.9, 1.0, 0.7);
    circle(4.0, 10.0, 160.0, 184.0);

    glColor3f(0.0, 0.6, 0.4);
    circle(3.0, 8.0, 160.0, 184.0);

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.4);
        glVertex2f(156.0, 186.0);
        glVertex2f(156.0, 196.0);
        glVertex2f(164.0, 196.0);
        glVertex2f(164.0, 186.0);
    glEnd();


    /*glColor3f(1.0, 0.0, 0.0);
    circle(5.0,7.0,162.0,180.0);
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.6, 0.4);
        glVertex2f(158.0, 184.0);
        glVertex2f(158.0, 195.0);
        glVertex2f(166.0, 195.0);
        glVertex2f(166.0, 184.0);
    glEnd();
    glColor3f(0.0, 0.6, 0.4);
    circle(3.0,5.0,162.0,182.0);
*/



}
void field()
{
    /* to left side */
    glColor3f(0.9,0.9,0.5);

    circle(10.0, 8.0, 0.0, 90.0);
    circle(10.0, 8.0, 5.0, 95.0);
    circle(10.0, 8.0, 10.0, 100.0);
    circle(10.0, 8.0, 20.0, 100.0);
    circle(10.0, 8.0, 25.0, 110.0);
    circle(10.0, 8.0, 35.0, 110.0);
    circle(10.0, 8.0, 0.0, 85.0);
    circle(10.0, 8.0, 5.0, 80.0);
    circle(10.0, 8.0, 10.0, 75.0);
    circle(10.0, 8.0, 15.0, 70.0);
    circle(10.0, 8.0, 40.0, 90.0);
    circle(10.0, 8.0, 30.0, 95.0);
    circle(12.0, 8.0, 20.0, 90.0);
    circle(10.0, 8.0, 50.0, 95.0);
    circle(12.0, 12.0, 45.0, 95.0);
    circle(10.0, 8.0, 35.0, 65.0);
    circle(10.0, 8.0, 30.0, 65.0);
    circle(19.0, 19.0, 30.0, 75.0);
    circle(15.0, 15.0, 50.0, 75.0);
    circle(15.0, 15.0, 50.0, 95.0);




    /* to right side */
    glColor3f(0.9,0.9,0.5);

    circle(10.0, 8.0, 300.0, 90.0);
    circle(10.0, 8.0, 295.0, 95.0);
    circle(10.0, 8.0, 290.0, 100.0);
    circle(10.0, 8.0, 280.0, 100.0);
    circle(10.0, 8.0, 275.0, 110.0);
    circle(10.0, 8.0, 265.0, 110.0);
    circle(10.0, 8.0, 300.0, 85.0);
    circle(10.0, 8.0, 295.0, 80.0);
    circle(10.0, 8.0, 290.0, 75.0);
    circle(10.0, 8.0, 285.0, 70.0);
    circle(10.0, 8.0, 260.0, 90.0);
    circle(10.0, 8.0, 270.0, 95.0);
    circle(12.0, 8.0, 280.0, 90.0);
    circle(10.0, 8.0, 250.0, 95.0);
    circle(12.0, 12.0, 255.0, 95.0);
    circle(10.0, 8.0, 265.0, 65.0);
    circle(10.0, 8.0, 270.0, 65.0);
    circle(19.0, 19.0, 270.0, 75.0);
    circle(15.0, 15.0, 250.0, 75.0);
    circle(15.0, 15.0, 250.0, 95.0);

}
void tree()
{
    /* left most tree leaf */
    glColor3f(0.4, 0.6, 0.0);
    circle(5.0, 7.0, 18.0, 97.0);
    circle(6.0, 8.0, 20.0, 100.0);
    circle(5.0, 9.0, 22.0, 103.0);
    circle(6.0, 8.0, 24.0, 103.0);
    circle(6.0, 6.0, 26.0, 98.0);


    /* left tree leaf */
    glColor3f(0.4, 0.6, 0.0);
     circle(5.0, 7.0, 38.0, 97.0);
    circle(6.0, 8.0, 40.0, 100.0);
    circle(5.0, 9.0, 42.0, 103.0);
    circle(6.0, 8.0, 44.0, 103.0);
    circle(6.0, 6.0, 46.0, 98.0);

    /* right most tree leaf */
    glColor3f(0.4, 0.6, 0.0);
    circle(5.0, 7.0, 282.0, 97.0);
    circle(6.0, 8.0, 280.0, 100.0);
    circle(5.0, 9.0, 278.0, 103.0);
    circle(6.0, 8.0, 276.0, 103.0);
    circle(6.0, 6.0, 274.0, 98.0);

    /* right tree leaf */
     glColor3f(0.4, 0.6, 0.0);
     circle(5.0, 7.0, 262.0, 97.0);
    circle(6.0, 8.0, 260.0, 100.0);
    circle(5.0, 9.0, 258.0, 103.0);
    circle(6.0, 8.0, 256.0, 103.0);
    circle(6.0, 6.0, 254.0, 98.0);




    /* left most tree */
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(20.0, 75.0);
        glVertex2f(20.0, 95.0);
        glVertex2f(25.0, 95.0);
        glVertex2f(25.0, 75.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(20.0, 95.0);
        glVertex2f(17.0, 99.0);
        glVertex2f(22.5, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(22.5, 95.0);
        glVertex2f(28.0, 99.0);
        glVertex2f(25.0, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(21.0, 95.0);
        glVertex2f(22.5, 99.0);
        glVertex2f(24.0, 95.0);
    glEnd();


    /* left tree */
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(40.0, 75.0);
        glVertex2f(40.0, 95.0);
        glVertex2f(45.0, 95.0);
        glVertex2f(45.0, 75.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(40.0, 95.0);
        glVertex2f(37.0, 99.0);
        glVertex2f(42.5, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(42.5, 95.0);
        glVertex2f(48.0, 99.0);
        glVertex2f(45.0, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(41.0, 95.0);
        glVertex2f(42.5, 99.0);
        glVertex2f(44.0, 95.0);
    glEnd();


    /* right most tree */

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(280.0, 75.0);
        glVertex2f(280.0, 95.0);
        glVertex2f(275.0, 95.0);
        glVertex2f(275.0, 75.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(280.0, 95.0);
        glVertex2f(283.0, 99.0);
        glVertex2f(277.5, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(277.5, 95.0);
        glVertex2f(272.0, 99.0);
        glVertex2f(275.0, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(279.0, 95.0);
        glVertex2f(277.5, 99.0);
        glVertex2f(276.0, 95.0);
    glEnd();


    /* right tree */

     glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(260.0, 75.0);
        glVertex2f(260.0, 95.0);
        glVertex2f(255.0, 95.0);
        glVertex2f(255.0, 75.0);
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(260.0, 95.0);
        glVertex2f(263.0, 99.0);
        glVertex2f(257.5, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(257.5, 95.0);
        glVertex2f(252.0, 99.0);
        glVertex2f(255.0, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.3, 0.1);
        glVertex2f(259.0, 95.0);
        glVertex2f(257.5, 99.0);
        glVertex2f(256.0, 95.0);
    glEnd();



}
void road()
{
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.4);
        glVertex2f(0.0, 0.0);
        glVertex2f(0.0, 70.0);
        glVertex2f(300.0, 70.0);
        glVertex2f(300.0, 0.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.6);
        glVertex2f(0.0, 5.0);
        glVertex2f(0.0, 65.0);
        glVertex2f(300.0, 65.0);
        glVertex2f(300.0, 5.0);
    glEnd();


    /* divider line */
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(0.0, 30.0);
        glVertex2f(0.0, 34.0);
        glVertex2f(5.0, 34.0);
        glVertex2f(5.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(15.0, 30.0);
        glVertex2f(15.0, 34.0);
        glVertex2f(20.0, 34.0);
        glVertex2f(20.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(30.0, 30.0);
        glVertex2f(30.0, 34.0);
        glVertex2f(35.0, 34.0);
        glVertex2f(35.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(45.0, 30.0);
        glVertex2f(45.0, 34.0);
        glVertex2f(50.0, 34.0);
        glVertex2f(50.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(60.0, 30.0);
        glVertex2f(60.0, 34.0);
        glVertex2f(65.0, 34.0);
        glVertex2f(65.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(75.0, 30.0);
        glVertex2f(75.0, 34.0);
        glVertex2f(80.0, 34.0);
        glVertex2f(80.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(90.0, 30.0);
        glVertex2f(90.0, 34.0);
        glVertex2f(95.0, 34.0);
        glVertex2f(95.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(105.0, 30.0);
        glVertex2f(105.0, 34.0);
        glVertex2f(110.0, 34.0);
        glVertex2f(110.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(120.0, 30.0);
        glVertex2f(120.0, 34.0);
        glVertex2f(125.0, 34.0);
        glVertex2f(125.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(135.0, 30.0);
        glVertex2f(135.0, 34.0);
        glVertex2f(140.0, 34.0);
        glVertex2f(140.0, 30.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(150.0, 30.0);
        glVertex2f(150.0, 34.0);
        glVertex2f(155.0, 34.0);
        glVertex2f(155.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(165.0, 30.0);
        glVertex2f(165.0, 34.0);
        glVertex2f(170.0, 34.0);
        glVertex2f(170.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(180.0, 30.0);
        glVertex2f(180.0, 34.0);
        glVertex2f(185.0, 34.0);
        glVertex2f(185.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(195.0, 30.0);
        glVertex2f(195.0, 34.0);
        glVertex2f(200.0, 34.0);
        glVertex2f(200.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(210.0, 30.0);
        glVertex2f(210.0, 34.0);
        glVertex2f(215.0, 34.0);
        glVertex2f(215.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(225.0, 30.0);
        glVertex2f(225.0, 34.0);
        glVertex2f(230.0, 34.0);
        glVertex2f(230.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(240.0, 30.0);
        glVertex2f(240.0, 34.0);
        glVertex2f(245.0, 34.0);
        glVertex2f(245.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(255.0, 30.0);
        glVertex2f(255.0, 34.0);
        glVertex2f(260.0, 34.0);
        glVertex2f(260.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(270.0, 30.0);
        glVertex2f(270.0, 34.0);
        glVertex2f(275.0, 34.0);
        glVertex2f(275.0, 30.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.5, 0.5, 0.3);
        glVertex2f(285.0, 30.0);
        glVertex2f(285.0, 34.0);
        glVertex2f(290.0, 34.0);
        glVertex2f(290.0, 30.0);
    glEnd();

}

void stairs()
{
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.4, 0.3);
        glVertex2f(75.0, 95.0);
        glVertex2f(80.0, 100.0);
        glVertex2f(220.0, 100.0);
        glVertex2f(225.0, 95.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.4, 0.4);
        glVertex2f(70.0, 90.0);
        glVertex2f(75.0, 95.0);
        glVertex2f(225.0, 95.0);
        glVertex2f(230.0, 90.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.4, 0.5);
        glVertex2f(65.0, 85.0);
        glVertex2f(70.0, 90.0);
        glVertex2f(230.0, 90.0);
        glVertex2f(235.0, 85.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.5, 0.4);
        glVertex2f(60.0, 80.0);
        glVertex2f(65.0, 85.0);
        glVertex2f(235.0, 85.0);
        glVertex2f(240.0, 80.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.6, 0.5, 0.5);
        glVertex2f(55.0, 75.0);
        glVertex2f(60.0, 80.0);
        glVertex2f(240.0, 80.0);
        glVertex2f(245.0, 75.0);
    glEnd();
      glBegin(GL_POLYGON);
    glColor3f(0.6, 0.5, 0.6);
        glVertex2f(50.0, 70.0);
        glVertex2f(55.0, 75.0);
        glVertex2f(245.0, 75.0);
        glVertex2f(250.0, 70.0);
    glEnd();


}

void student()
{
    /* for left most */
    /* head */
    glColor3f(0.7, 0.6, 0.2);
    circle(3.0, 5.0, 90.0, 50.0);
    /* left eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 89.0, 51.5);
    /* right eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 91.0, 51.5);
    /* mouth */
    glColor3f(1.0, 1.0, 1.0);
    circle(1.2, 1.5, 90.0, 48.5);
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(88.8, 48.5);
        glVertex2f(88.8, 50.0);
        glVertex2f(91.2, 50.0);
        glVertex2f(91.2, 48.5);
    glEnd();

    /* body */
     glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(89.3, 43.0);
        glVertex2f(89.3, 44.8);
        glVertex2f(90.6, 44.8);
        glVertex2f(90.6, 43.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(87.0, 38.0);
        glVertex2f(87.0, 43.0);
        glVertex2f(93.0, 43.0);
        glVertex2f(93.0, 38.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(87.0, 32.0);
        glVertex2f(88.0, 38.0);
        glVertex2f(92.0, 38.0);
        glVertex2f(93.0, 32.0);
    glEnd();
     /* leg */

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(88.5, 28.0);
        glVertex2f(88.5, 32.0);
        glVertex2f(89.5, 32.0);
        glVertex2f(89.5, 28.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(90.5, 28.0);
        glVertex2f(90.5, 32.0);
        glVertex2f(91.5, 32.0);
        glVertex2f(91.5, 28.0);
    glEnd();

     /* snickers */
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(87.0, 26.0);
        glVertex2f(88.5, 28.0);
        glVertex2f(89.5, 28.0);
        glVertex2f(89.5, 26.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(90.5, 26.0);
        glVertex2f(90.5, 28.0);
        glVertex2f(91.5, 28.0);
        glVertex2f(93.0, 26.0);
    glEnd();

      /* hand */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(84.0, 41.0);
        glVertex2f(84.0, 44.0);
        glVertex2f(87.0, 42.0);
        glVertex2f(87.0, 39.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(93.0, 39.0);
        glVertex2f(93.0, 42.0);
        glVertex2f(96.0, 42.0);
        glVertex2f(96.0, 39.0);
    glEnd();

    /* near cap */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(83.0, 42.0);
        glVertex2f(85.8, 53.0);
        glVertex2f(86.8, 52.0);
        glVertex2f(84.0, 41.0);
    glEnd();

    /* right hand */

    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(95.5, 42.0);
        glVertex2f(96.5, 42.0);
        glVertex2f(97.0, 32.0);
        glVertex2f(96.0, 32.0);
    glEnd();




    /* for 2nd left most */
    /* head */
    glColor3f(0.7, 0.6, 0.2);
    circle(3.0, 5.0, 120.0, 50.0);
    /* left eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 119.0, 51.5);
    /* right eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 121.0, 51.5);
    /* mouth */
    glColor3f(1.0, 1.0, 1.0);
    circle(1.2, 1.5, 120.0, 48.5);
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(118.8, 48.5);
        glVertex2f(118.8, 50.0);
        glVertex2f(121.2, 50.0);
        glVertex2f(121.2, 48.5);
    glEnd();
    /* body */
     glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(119.3, 43.0);
        glVertex2f(119.3, 44.8);
        glVertex2f(120.6, 44.8);
        glVertex2f(120.6, 43.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(117.0, 38.0);
        glVertex2f(117.0, 43.0);
        glVertex2f(123.0, 43.0);
        glVertex2f(123.0, 38.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(117.0, 32.0);
        glVertex2f(118.0, 38.0);
        glVertex2f(122.0, 38.0);
        glVertex2f(123.0, 32.0);
    glEnd();

    /* leg */

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(118.5, 28.0);
        glVertex2f(118.5, 32.0);
        glVertex2f(119.5, 32.0);
        glVertex2f(119.5, 28.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(120.5, 28.0);
        glVertex2f(120.5, 32.0);
        glVertex2f(121.5, 32.0);
        glVertex2f(121.5, 28.0);
    glEnd();

    /* snickers */
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(117.0, 26.0);
        glVertex2f(118.5, 28.0);
        glVertex2f(119.5, 28.0);
        glVertex2f(119.5, 26.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(120.5, 26.0);
        glVertex2f(120.5, 28.0);
        glVertex2f(121.5, 28.0);
        glVertex2f(123.0, 26.0);
    glEnd();

    /* hand */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(114.0, 41.0);
        glVertex2f(114.0, 44.0);
        glVertex2f(117.0, 42.0);
        glVertex2f(117.0, 39.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(123.0, 39.0);
        glVertex2f(123.0, 42.0);
        glVertex2f(126.0, 42.0);
        glVertex2f(126.0, 39.0);
    glEnd();

    /* near cap */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(113.0, 42.0);
        glVertex2f(115.8, 53.0);
        glVertex2f(116.8, 52.0);
        glVertex2f(114.0, 41.0);
    glEnd();

    /* right hand */

    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(125.5, 42.0);
        glVertex2f(126.5, 42.0);
        glVertex2f(127.0, 32.0);
        glVertex2f(126.0, 32.0);
    glEnd();



    /* middle */
    /* head */
    glColor3f(0.7, 0.6, 0.2);
    circle(3.0, 5.0, 150.0, 50.0);

    /* left eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 149.0, 51.5);
    /* right eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 151.0, 51.5);

    /* mouth */
    glColor3f(1.0, 1.0, 1.0);
    circle(1.2, 1.5, 150.0, 48.5);
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(148.8, 48.5);
        glVertex2f(148.8, 50.0);
        glVertex2f(151.2, 50.0);
        glVertex2f(151.2, 48.5);
    glEnd();

     /* body */
     glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(149.3, 43.0);
        glVertex2f(149.3, 44.8);
        glVertex2f(150.6, 44.8);
        glVertex2f(150.6, 43.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(147.0, 38.0);
        glVertex2f(147.0, 43.0);
        glVertex2f(153.0, 43.0);
        glVertex2f(153.0, 38.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(147.0, 32.0);
        glVertex2f(148.0, 38.0);
        glVertex2f(152.0, 38.0);
        glVertex2f(153.0, 32.0);
    glEnd();

    /* leg */

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(148.5, 28.0);
        glVertex2f(148.5, 32.0);
        glVertex2f(149.5, 32.0);
        glVertex2f(149.5, 28.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(150.5, 28.0);
        glVertex2f(150.5, 32.0);
        glVertex2f(151.5, 32.0);
        glVertex2f(151.5, 28.0);
    glEnd();

    /* snickers */
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(147.0, 26.0);
        glVertex2f(148.5, 28.0);
        glVertex2f(149.5, 28.0);
        glVertex2f(149.5, 26.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(150.5, 26.0);
        glVertex2f(150.5, 28.0);
        glVertex2f(151.5, 28.0);
        glVertex2f(153.0, 26.0);
    glEnd();

      /* hand */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(144.0, 41.0);
        glVertex2f(144.0, 44.0);
        glVertex2f(147.0, 42.0);
        glVertex2f(147.0, 39.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(153.0, 39.0);
        glVertex2f(153.0, 42.0);
        glVertex2f(156.0, 42.0);
        glVertex2f(156.0, 39.0);
    glEnd();

    /* near cap */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(143.0, 42.0);
        glVertex2f(145.8, 53.0);
        glVertex2f(146.8, 52.0);
        glVertex2f(144.0, 41.0);
    glEnd();


    /* right hand */

    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(155.5, 42.0);
        glVertex2f(156.5, 42.0);
        glVertex2f(157.0, 32.0);
        glVertex2f(156.0, 32.0);
    glEnd();

    /* right 2nd most */
    /* head */
    glColor3f(0.7, 0.6, 0.2);
    circle(3.0, 5.0, 180.0, 50.0);

    /* left eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 179.0, 51.5);
    /* right eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 181.0, 51.5);

    /* mouth */
    glColor3f(1.0, 1.0, 1.0);
    circle(1.2, 1.5, 180.0, 48.5);
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(178.8, 48.5);
        glVertex2f(178.8, 50.0);
        glVertex2f(181.2, 50.0);
        glVertex2f(181.2, 48.5);
    glEnd();

     /* body */
     glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(179.3, 43.0);
        glVertex2f(179.3, 44.8);
        glVertex2f(180.6, 44.8);
        glVertex2f(180.6, 43.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(177.0, 38.0);
        glVertex2f(177.0, 43.0);
        glVertex2f(183.0, 43.0);
        glVertex2f(183.0, 38.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(177.0, 32.0);
        glVertex2f(178.0, 38.0);
        glVertex2f(182.0, 38.0);
        glVertex2f(183.0, 32.0);
    glEnd();

    /* leg */

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(178.5, 28.0);
        glVertex2f(178.5, 32.0);
        glVertex2f(179.5, 32.0);
        glVertex2f(179.5, 28.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(180.5, 28.0);
        glVertex2f(180.5, 32.0);
        glVertex2f(181.5, 32.0);
        glVertex2f(181.5, 28.0);
    glEnd();

    /* snickers */
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(177.0, 26.0);
        glVertex2f(178.5, 28.0);
        glVertex2f(179.5, 28.0);
        glVertex2f(179.5, 26.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(180.5, 26.0);
        glVertex2f(180.5, 28.0);
        glVertex2f(181.5, 28.0);
        glVertex2f(183.0, 26.0);
    glEnd();

      /* hand */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(174.0, 41.0);
        glVertex2f(174.0, 44.0);
        glVertex2f(177.0, 42.0);
        glVertex2f(177.0, 39.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(183.0, 39.0);
        glVertex2f(183.0, 42.0);
        glVertex2f(186.0, 42.0);
        glVertex2f(186.0, 39.0);
    glEnd();

    /* near cap */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(173.0, 42.0);
        glVertex2f(175.8, 53.0);
        glVertex2f(176.8, 52.0);
        glVertex2f(174.0, 41.0);
    glEnd();


    /* right hand */

    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(185.5, 42.0);
        glVertex2f(186.5, 42.0);
        glVertex2f(187.0, 32.0);
        glVertex2f(186.0, 32.0);
    glEnd();

    /* right most */

    /* head */
    glColor3f(0.7, 0.6, 0.2);
    circle(3.0, 5.0, 210.0, 50.0);
    /* left eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 209.0, 51.5);
    /* right eye */
    glColor3f(0.0, 0.0, 0.0);
    circle(0.4, 0.8, 211.0, 51.5);
    /* mouth */
    glColor3f(1.0, 1.0, 1.0);
    circle(1.2, 1.5, 210.0, 48.5);
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(208.8, 48.5);
        glVertex2f(208.8, 50.0);
        glVertex2f(211.2, 50.0);
        glVertex2f(211.2, 48.5);
    glEnd();
    /* body */
     glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(209.3, 43.0);
        glVertex2f(209.3, 44.8);
        glVertex2f(210.6, 44.8);
        glVertex2f(210.6, 43.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(207.0, 38.0);
        glVertex2f(207.0, 43.0);
        glVertex2f(213.0, 43.0);
        glVertex2f(213.0, 38.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(207.0, 32.0);
        glVertex2f(208.0, 38.0);
        glVertex2f(212.0, 38.0);
        glVertex2f(213.0, 32.0);
    glEnd();

    /* leg */

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(208.5, 28.0);
        glVertex2f(208.5, 32.0);
        glVertex2f(209.5, 32.0);
        glVertex2f(209.5, 28.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(210.5, 28.0);
        glVertex2f(210.5, 32.0);
        glVertex2f(211.5, 32.0);
        glVertex2f(211.5, 28.0);
    glEnd();

    /* snickers */
    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(207.0, 26.0);
        glVertex2f(208.5, 28.0);
        glVertex2f(209.5, 28.0);
        glVertex2f(209.5, 26.0);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3f(0.4, 0.0, 0.0);
        glVertex2f(210.5, 26.0);
        glVertex2f(210.5, 28.0);
        glVertex2f(211.5, 28.0);
        glVertex2f(213.0, 26.0);
    glEnd();

    /* hand */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(204.0, 41.0);
        glVertex2f(204.0, 44.0);
        glVertex2f(207.0, 42.0);
        glVertex2f(207.0, 39.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(213.0, 39.0);
        glVertex2f(213.0, 42.0);
        glVertex2f(216.0, 42.0);
        glVertex2f(216.0, 39.0);
    glEnd();

    /* near cap */
    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(203.0, 42.0);
        glVertex2f(205.8, 53.0);
        glVertex2f(206.8, 52.0);
        glVertex2f(204.0, 41.0);
    glEnd();

    /* right hand */

    glBegin(GL_POLYGON);
    glColor3f(0.7, 0.6, 0.2);
        glVertex2f(215.5, 42.0);
        glVertex2f(216.5, 42.0);
        glVertex2f(217.0, 32.0);
        glVertex2f(216.0, 32.0);
    glEnd();


}

void hat()
{
    /* hat */
    /* left most student */
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(86.5, 53.0);
        glVertex2f(86.5, 57.0);
        glVertex2f(93.5, 57.0);
        glVertex2f(93.5, 53.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(85.5, 59.0);
        glVertex2f(90.0, 61.0);
        glVertex2f(94.5, 59.0);
        glVertex2f(90.0, 57.0);
    glEnd();


    /* hat */
    /* 2nd left most student */
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(116.5, 53.0);
        glVertex2f(116.5, 57.0);
        glVertex2f(123.5, 57.0);
        glVertex2f(123.5, 53.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(115.5, 59.0);
        glVertex2f(120.0, 61.0);
        glVertex2f(124.5, 59.0);
        glVertex2f(120.0, 57.0);
    glEnd();


    /* hat */
    /* middle student */
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(146.5, 53.0);
        glVertex2f(146.5, 57.0);
        glVertex2f(153.5, 57.0);
        glVertex2f(153.5, 53.0);
    glEnd();

      glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(145.5, 59.0);
        glVertex2f(150.0, 61.0);
        glVertex2f(154.5, 59.0);
        glVertex2f(150.0, 57.0);
    glEnd();

    /* hat */
    /* 2nd right most student */
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(176.5, 53.0);
        glVertex2f(176.5, 57.0);
        glVertex2f(183.5, 57.0);
        glVertex2f(183.5, 53.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(175.5, 59.0);
        glVertex2f(180.0, 61.0);
        glVertex2f(184.5, 59.0);
        glVertex2f(180.0, 57.0);
    glEnd();

    /* hat */
    /* right most student */
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(206.5, 53.0);
        glVertex2f(206.5, 57.0);
        glVertex2f(213.5, 57.0);
        glVertex2f(213.5, 53.0);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3f(0.0, 0.0, 0.0);
        glVertex2f(205.5, 59.0);
        glVertex2f(210.0, 61.0);
        glVertex2f(214.5, 59.0);
        glVertex2f(210.0, 57.0);
    glEnd();
}

static float	pr=  0.0;
void hatMove(){
pr=pr+0.1;
    if(pr>100)
        pr = 0;
        glutPostRedisplay();
}

void hati()
{
    hatMove();
    for(int i=0;i<1;i++)
     {

     glPushMatrix();
     glTranslatef(0,pr,0);
     hat();
     glPopMatrix();

    }
}


void myDisplay()
{
    glClear(GL_COLOR_BUFFER_BIT);

    sky();


    sun();

    cloud();

    building();

    field();

    stairs();

    road();

    banner();

    tree();

    hati();

    student();




    glFlush();
}
void init()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
	glOrtho(0,300,0,300,0,500);
}

int main()
{
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1500,600); // Size of the window
    glutInitWindowPosition(0, 0); // location of the window
    glutCreateWindow("Demo Application"); // Create window with this name
    init(); // call initialize function
    glutDisplayFunc(myDisplay); // call display function
    glutMainLoop();//ager command gulo k execute kore
    return 0;
}
