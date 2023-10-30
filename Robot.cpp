#include "robot.h"
//#include <GL\freeglut_std.h>

void  Robot:: drawRobot() {

    // Draw the head of the robot.
    glColor3f(0.4,0.8,0.8);
    glPushMatrix();
    glTranslatef(0.0, 1.0, 0.0);
    glutSolidSphere(0.5, 20, 20);
    glPopMatrix();

    // Draw the body of the robot.
    glColor3f(0,0,0);
    glPushMatrix();
    glTranslatef(0.0, 0.0, 0.0);
    glScalef(1.5, 2.5, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();

    // Draw the left arm of the robot.
    glColor3f(0.5,0.5,0.5);
    glPushMatrix();
    glTranslatef(-1.0, 0.0, 0.0);
    glScalef(0.5, 1.5, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();

    // Draw the right arm of the robot.
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(1.0, 0.0, 0.0);
    glScalef(0.5, 1.5, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();

    // Draw the left leg of the robot.
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(-0.5, -2.0, 0.0);
    glScalef(0.5, 1.5, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();

    // Draw the right leg of the robot.
    glColor3f(0.5, 0.5, 0.5);
    glPushMatrix();
    glTranslatef(0.5, -2.0, 0.0);
    glScalef(0.5, 1.5, 0.5);
    glutSolidCube(1.0);
    glPopMatrix();
}
   
