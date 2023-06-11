#include <windows.h>
#include <GL/gl.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>

void ground()
{
    glBegin(GL_QUADS);
    glColor3ub(162, 189, 48);
    glVertex2f(0, 0);
    glVertex2f(0, 550);
    glVertex2f(1200, 550);
    glVertex2f(1200, 0);
    glEnd();
}

void drawLines()
{
    glColor3ub(255, 255, 255);
    glLineWidth(6);
    glBegin(GL_LINES);
    glVertex2f(0, 40);
    glVertex2f(1200, 40);
    glEnd();
}
void drawLinestwo()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(0, 160);
    glVertex2f(60, 160);
    glEnd();
}
void drawLinesthree()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(60, 160);
    glVertex2f(200, 330);
    glEnd();
}
void drawLines4()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(0, 330);
    glVertex2f(200, 330);
    glEnd();
}
void drawLinesmini1()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(0, 220);
    glVertex2f(60, 280);
    glEnd();
}
void drawLinesmini2()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(0, 280);
    glVertex2f(60, 280);
    glEnd();
}

void drawLinesmain2()
{
    glColor3ub(255, 255, 255);
    glLineWidth(6);
    glBegin(GL_LINES);
    glVertex2f(0, 450);
    glVertex2f(1200, 450);
    glEnd();
}
void drawLinest7()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1200, 140);
    glVertex2f(1140, 140);
    glEnd();
}
void drawLinest8()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1140, 140);
    glVertex2f(1000, 330);
    glEnd();
}
void drawLinest9()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1000, 330);
    glVertex2f(1200, 330);
    glEnd();
}

void drawLinestmini3()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1200, 240);
    glVertex2f(1140, 280);
    glEnd();
}
void drawLinestmini4()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(1140, 280);
    glVertex2f(1200, 280);
    glEnd();
}
void drawLinesmiddle1()
{
    glColor3ub(255, 255, 255);
    glLineWidth(3);
    glBegin(GL_LINES);
    glVertex2f(600, 40);
    glVertex2f(600, 450);
    glEnd();
}

void circle()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glColor4f(1.0, 1.0, 1.0, 0.5);


    ground();
    drawLines();
    drawLinestwo();
    drawLinesthree();
    drawLines4();
    drawLinesmini1();
    drawLinesmini2();
    drawLinesmain2();
    drawLinest7();
    drawLinest8();
    drawLinest9();
    drawLinestmini3();
    drawLinestmini4();
    drawLinesmiddle1();


    int fieldWidth = 1200;
    int fieldHeight = 550;
    int circleRadius = 80;
    int circleX = fieldWidth / 2;
    int circleY = fieldHeight / 2;

    glLineWidth(3);
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < 360; i++)
    {
        float theta = i * 3.142 / 180;
        glVertex2f(circleX + circleRadius * cos(theta), circleY + circleRadius * sin(theta));
    }
    glEnd();
    glFlush();
}
void road()
{
    glBegin(GL_QUADS);
    glColor3ub(152,149,142);
    glVertex2f(0, 550);
    glVertex2f(0, 600);
    glVertex2f(1200, 600);
    glVertex2f(1200, 550);
    glEnd();
}
void wall()
{
    glBegin(GL_QUADS);
    glColor3ub(236,228,203);
    glVertex2f(0, 600);
    glVertex2f(0, 700);
    glVertex2f(1200, 700);
    glVertex2f(1200, 600);
    glEnd();
}

float playerOneX = 300;
float playerOneY = 240;

float playerTwoX = 900;
float playerTwoY = 240;

void playerone()
{
    glBegin(GL_QUADS);
    glColor3ub(0,150,254);
    glVertex2f(playerOneX, playerOneY);
    glVertex2f(playerOneX + 80, playerOneY);
    glVertex2f(playerOneX + 80, playerOneY - 60);
    glVertex2f(playerOneX, playerOneY - 60);
    glEnd();
}

void playertwo()
{
    glBegin(GL_QUADS);
    glColor3ub(255,100,0);
    glVertex2f(playerTwoX, playerTwoY);
    glVertex2f(playerTwoX + 80, playerTwoY);
    glVertex2f(playerTwoX + 80, playerTwoY - 60);
    glVertex2f(playerTwoX, playerTwoY - 60);
    glEnd();
}






void cloud()
{
    glClearColor(121 / 255.0, 208 / 255.0, 254 / 255.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    ground();
    drawLines();
    drawLinestwo();
    drawLinesthree();
    drawLines4();
    drawLinesmini1();
    drawLinesmini2();



    drawLinesmain2();
    drawLinest7();
    drawLinest8();
    drawLinest9();
    drawLinestmini3();
    drawLinestmini4();

    drawLinesmiddle1();

    circle();

    road();

    wall();

    playerone();
    playertwo();


    float radius1 = 40;
    float radius2 = 50;
    float centerX = 500;
    float centerY = 800;

    glColor3ub(255,255,255);

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX, centerY);
    for (int i = 0; i <= 180; i++)
    {
        float theta = i * 3 * 3.142 / 180;
        float x = radius1 * cosf(theta);
        float y = radius1 * sinf(theta);
        glVertex2f(x + centerX, y + centerY);
    }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX + radius1 / 2, centerY + radius1 / 2);
    for (int i = 0; i <= 180; i++)
    {
        float theta = i * 3* 3.142 / 180;
        float x = radius2 * cosf(theta);
        float y = radius2 * sinf(theta);
        glVertex2f(x + centerX + radius1 / 2, y + centerY + radius1 / 2);
    }
    glEnd();

    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(centerX - radius1 / 2, centerY + radius1 / 2);
    for (int i = 0; i <= 180; i++)
    {
        float theta = i * 3 * 3.142 / 180;
        float x = radius2 * cosf(theta);
        float y = radius2 * sinf(theta);
        glVertex2f(x + centerX - radius1 / 2, y + centerY + radius1 / 2);
    }
    glEnd();


//    glFlush();
}


float birdx = 900;
int state= 1;

void bird()
{
    glBegin(GL_QUADS);
    glColor3ub(255,255,255);
    glVertex2f(birdx, birdx-100);
    glVertex2f(birdx + 80, birdx-100);
    glVertex2f(birdx-10, birdx-110);

    glVertex2f(birdx-20, birdx-120);

    glEnd();


}
void timer(int);

void timer(int)
{
    glutPostRedisplay();
    glutTimerFunc(1000/60,timer,0);
    switch(state)
    {
    case 1:
        if(birdx<1160)
            birdx += 5;
        else
            state = -1;
        break;
    case -1:
        if(birdx>40)
            birdx-= 5;

        else
            state =1;
        break;

    }
}



bool showCloud = false;

void keyboard(unsigned char key, int x, int y)
{
    switch (key)
    {
    case 'c':
        showCloud = !showCloud;
        glutPostRedisplay();
        break;
    case 'g':
        playerOneX -= 10;
        glutPostRedisplay();
        break;
    case 'j':
        playerOneX += 10;
        glutPostRedisplay();
        break;
    case 'y':
        playerOneY += 10;
        glutPostRedisplay();
        break;
    case 'h':
        playerOneY -= 10;
        glutPostRedisplay();
        break;
    case 'a':
        playerTwoX -= 10;
        glutPostRedisplay();
        break;
    case 'd':
        playerTwoX += 10;
        glutPostRedisplay();
        break;
    case 'w':
        playerTwoY += 10;
        glutPostRedisplay();
        break;
    case 's':
        playerTwoY -= 10;
        glutPostRedisplay();
        break;
    }
}

void init()
{
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0, 1200, 0, 900);
    glMatrixMode(GL_MODELVIEW);
}


void display()
{
    glClearColor(121 / 255.0, 208 / 255.0, 254 / 255.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);

    ground();
    drawLines();
    drawLinestwo();
    drawLinesthree();
    drawLines4();
    drawLinesmini1();
    drawLinesmini2();

    drawLinesmain2();
    drawLinest7();
    drawLinest8();
    drawLinest9();
    drawLinestmini3();
    drawLinestmini4();

    drawLinesmiddle1();

    circle();

    road();

    wall();
    playerone();
    playertwo();

    bird();


    if (showCloud)
        cloud();

    glutSwapBuffers();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGBA);
    glutInitWindowSize(1200, 800);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("FootballGround");
    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);
    glutTimerFunc(1000,timer,0);
    glutIdleFunc(display);
    glutMainLoop();

    return 0;
}

