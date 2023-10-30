#ifndef FAN_H // Define the header 
#define FAN_H

#include <GL/glut.h>  // reference imported glut and opengl and math resources 
#include <GL/freeglut_ext.h>
#include <math.h>

#define DEF_D 5

class Fan {  // Create a class
	private:
		float rotationAngle = 0.0f;   //create a private rotation varaible 

	public:  // Create a public class 
		
		void drawFan();   // Call two methods

		void rotateFan();

};

#endif
