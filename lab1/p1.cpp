#include <GL/glut.h>

void init2D(float r, float g, float b)
{
	glClearColor(r,g,b,0.0);  
	glMatrixMode (GL_PROJECTION);
	gluOrtho2D (0.0, 200.0, 0.0, 150.0);
}

void display(void)
{
	glClear(GL_COLOR_BUFFER_BIT);
	glColor3f(0.0, 1.0, 12.0);

	//draw two points
	glBegin(GL_POINTS);
	for(int i = 0; i < 10; i++)
	{
		glVertex2i(10+5*i,110);
	}
	glEnd();

	//draw a line
	glBegin(GL_LINES);
		glVertex2i(10,10);
		glVertex2i(100 ,100);
	glEnd();

	//draw a triangle
	glBegin(GL_TRIANGLES);
	glVertex2f(70.0,10.0);
    glVertex2f(80.0,15.0);
    glVertex2f(90.0,50.0);
    glEnd();

    //draw a ploygon
    glBegin(GL_POLYGON);
        glVertex2f(100 , 50);
        glVertex2f(130 , 90);
        glVertex2f(150 , 50);
        glVertex2f(170 , 90);
    glEnd();

    //draw a rectangle
    glBegin(GL_POLYGON);
        glVertex2i(50,90);
        glVertex2i(100,90);
        glVertex2i(100,150);
        glVertex2i(50,150);
    glEnd();

	glFlush();
}

int main(int argc,char *argv[])
{
	glutInit(&argc,argv);
	glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
	glutInitWindowSize (1000, 1000);
	glutInitWindowPosition (500, 500);
	glutCreateWindow ("points and lines");
	init2D(0.0,0.0,0.0);
	glutDisplayFunc(display);
	glutMainLoop();
}