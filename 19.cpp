// C program to demonstrate 
// drawing a circle using 
// OpenGL 
#include<stdio.h> 
#include<GL/glut.h> 
#include<math.h> 
#define PI 3.142857 

double r=100;
int sides=19;
  
// function to initialize 
void myInit (void) 
{ 
    // making background color black as first  
    glClearColor(0.0, 0.0, 0.0, 1.0);  
    glColor3f(1.0, 1.0, 0.0);   
    glPointSize(1.0); 
    // setting window dimension in X- and Y- direction 
    gluOrtho2D(-780, 780, -420, 420); 
} 
  
void display (void)  
{ 
   // glClear(GL_COLOR_BUFFER_BIT); 
    glBegin(GL_POLYGON);
    for(int i=0;i<=sides;i++){
	    double angle=i*2*PI/sides;
	    glVertex2d(r*cos(angle),r*sin(angle));	
    }
	glEnd();
    glFlush();
} 
  
int main (int argc, char** argv) 
{ 
    glutInit(&argc, argv); 
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); 
      
    // giving window size in X- and Y- direction 
    glutInitWindowSize(1366, 768); 
    glutInitWindowPosition(0, 0); 
  
    // Giving name to window 
    glutCreateWindow("Hendecagon Drawing"); 
    myInit(); 
      
    glutDisplayFunc(display); 
    glutMainLoop(); 
} 