#include <iostream>
#include <stdlib.h>
#include <math.h>
#include <GL/glu.h>
#include <GL/glut.h>
static int posx=0;



//Initializes 3D rendering
void initRendering() {
	glEnable(GL_DEPTH_TEST);
}

//Called when the window is resized
void handleResize(int w, int h) {
	glViewport(0, 0, w, h);
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluPerspective(45.0, (double)w / (double)h, 1.0, 200.0);
}

float _angle = 0.0;
float _cameraAngle = 0.0;
float _ang_tri = 0.0;

//Draws the 3D scene
void drawScene() {
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
	glClearColor(1.0f, 1.0f, 1.0f, 0.0f);	// White Background

	glMatrixMode(GL_MODELVIEW); //Switch to the drawing perspective
	glLoadIdentity(); //Reset the drawing perspective
	glRotatef(-_cameraAngle, 0.0, 1.0, 0.0); //Rotate the camera
	glTranslatef(0.0, 0.0, -12.0); //Move forward 5 units

	glPushMatrix();
	glRotatef(45,0,45,0);
	glTranslatef(_angle,0.0,0.0);
	glTranslatef(posx,0.0,0.0);
	glRotatef(_angle, 0.0, 1.0, 0.0);





	glPushMatrix(); //Save the current state of transformations
	glRotatef(45,0,45,1);
	glTranslatef(1.0, -0.2, 1.0); //Move to the center of the triangle
	// //Rotate about the the vector (1, 2, 3)
    glColor3ub(255,255,255);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///Iner circle
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle


	glPushMatrix(); //Save the current state of transformations
	//glRotatef(90,0,90,1);
	glTranslatef(1.0, -0.2, 1.0); //Move to the center of the triangle
	//glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///outer circle
		float r=0.3;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle



	///2nd wheel

	glPushMatrix(); //Save the current state of transformations
	//glRotatef(90,0,90,1);
	glTranslatef(-1.0, -0.2, 1.0); //Move to the center of the triangle
	//glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(255,255,255);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///Iner circle
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle


	glPushMatrix(); //Save the current state of transformations
	//glRotatef(45,0,45,1);
	glTranslatef(-1.0, -0.2, 1.0); //Move to the center of the triangle
	//glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///outer circle
		float r=0.3;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle

	///oppo



	glPushMatrix(); //Save the current state of transformations
	//glRotatef(45,0,45,1);
	glTranslatef(1.0, -0.2, 2.0); //Move to the center of the triangle
	// //Rotate about the the vector (1, 2, 3)
    glColor3ub(255,255,255);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///Iner circle
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle


	glPushMatrix(); //Save the current state of transformations
	//glRotatef(90,0,90,1);
	glTranslatef(1.0, -0.2, 2.0); //Move to the center of the triangle
	//glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///outer circle
		float r=0.3;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle



	///2nd wheel

	glPushMatrix(); //Save the current state of transformations
	//glRotatef(90,0,90,1);
	glTranslatef(-1.0, -0.2, 2.0); //Move to the center of the triangle
	//glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(255,255,255);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///Iner circle
		float r=0.2;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle


	glPushMatrix(); //Save the current state of transformations
	//glRotatef(45,0,45,1);
	glTranslatef(-1.0, -0.2, 2.0); //Move to the center of the triangle
	//glRotatef(_angle, 0.0, 0.0, 1.0); //Rotate about the the vector (1, 2, 3)
    glColor3ub(0,0,0);
	glBegin(GL_POLYGON);
	for(int i=0;i<200;i++)
	{
		float pi=3.1416;
		float A=(i*2*pi)/100;              ///outer circle
		float r=0.3;
		float x = r * cos(A);
		float y = r * sin(A);
		glVertex2f(x,y );
	}
	glEnd();
	glPopMatrix(); //Undo the move to the center of the triangle








	glPushMatrix();
	glColor3f(0,1,255);
	//glRotatef(-45,0,-45,1);
	glTranslatef(0.0 ,0, 1.5);
	                                            ///body
    glScalef(3.0, 0.50,0.9 );
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(0,0,0);
    //glRotatef(-45,0,-45,1);
    glTranslatef(0.0 ,0.5, 1.5);          ///2nd body
    glScalef(2.0, 0.6, 0.9);
    glutSolidCube(1.0);
    glPopMatrix();



    glPushMatrix();
    glColor3f(1,255,0);                             ///door
    //glRotatef(-45,0,-45,1);
    glTranslatef(0.49 ,0.3, 1.5);
    glScalef(1.0, 1.03, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPushMatrix();
    glColor3f(255,0,0);                             ///2nd  door
    //glRotatef(-45,0,-45,1);
    glTranslatef(-0.49 ,0.3, 1.5);
    glScalef(1.0, 1.03, 1.0);
    glutSolidCube(1.0);
    glPopMatrix();

    glPopMatrix();



	glutSwapBuffers();
}
/*
void update(int value) {
	_angle += 0.1f;
	if (_angle > 20) {
		_angle -=40;
	}
	_ang_tri += 0.1f;
	if (_ang_tri > 360) {
		_ang_tri -= 360;
	}

	glutPostRedisplay(); //Tell GLUT that the display has changed

	//Tell GLUT to call update again in 25 milliseconds
	glutTimerFunc(1, update, 0);
}
*/
void keyboard(unsigned char key, int x, int y)
{
switch (key) {
case 'd': /* s key rotates at shoulder */
//shoulder = (shoulder + 5) % 360;
posx++;
glutPostRedisplay();
break;
case 'a':
//shoulder = (shoulder - 5) % 360;
posx--;
glutPostRedisplay();
break;

}
}

int main(int argc, char** argv) {
	//Initialize GLUT
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(1400, 700);
	glutInitWindowPosition(200,100);

	//Create the window
	glutCreateWindow("Transformations");
	initRendering();

	//Set handler functions
	glutDisplayFunc(drawScene);

	glutReshapeFunc(handleResize);

//	glutTimerFunc(25, update, 0); //Add a timer
	glutKeyboardFunc(keyboard);

	glutFullScreen();
	glutMainLoop();
	return 0;
}









