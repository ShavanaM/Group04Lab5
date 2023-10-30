
#include "human.h"

void Human::drawHuman() {

	//Head
	glColor3f(1,0.7,0.3);
	glPushMatrix();
	glTranslatef(0.0, 0.9, 0.0);
	glutSolidSphere(0.2, 20, 20);
	glPopMatrix();

	// Body
	glColor3f(0.9, 0, 0.1);
	glPushMatrix();
	glTranslatef(0.0, 0.4, 0.0);
	glScalef(0.6, 0.7, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	// Left Leg
	glColor3f(0.3, 0, 0.7);
	glPushMatrix();
	glTranslatef(-0.15, -0.2, 0.0);
	glScalef(0.2, 0.6, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	// Right Leg
	glColor3f(0.3,0,0.7);
	glPushMatrix();
	glTranslatef(0.15,-0.2, 0.0);
	glScalef(0.2, 0.6, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	// Left Arm
	glColor3f(1, 0.7, 0.3);
	glPushMatrix();
	glTranslatef(-0.35, 0.4, 0.0);
	glScalef(0.2, 0.6, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

	// Right Arm
	glColor3f(1, 0.7, 0.3);
	glPushMatrix();
	glTranslatef(0.35, 0.4, 0.0);
	glScalef(0.2, 0.6, 0.2);
	glutSolidCube(1.0);
	glPopMatrix();

}