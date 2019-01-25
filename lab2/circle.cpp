// C program to demonstrate 
// drawing a circle using 
// OpenGL 
#include<stdio.h> 
#include<GL/glut.h> 
#include<math.h> 
#define pi 3.142857 
  
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
    glBegin(GL_POINTS); 
    float x, y, i; 
      
    // iterate y up to 2*pi, i.e., 360 degree 
    // with small increment in angle as 
    // glVertex2i just draws a point on specified co-ordinate 
    for ( i = 0; i < 11; i ++) 
    { 
        // let 200 is radius of circle and as, 
        // circle is defined as x=r*cos(i) and y=r*sin(i) 
        x = 200 *cos(i*(2*pi)/11); 
        y = 200 *sin(i*(2*pi)/11); 
          
        glVertex2i(x, y); 
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
    glutCreateWindow("Circle Drawing"); 
    myInit(); 
      
    glutDisplayFunc(display); 
    glutMainLoop(); 
} 