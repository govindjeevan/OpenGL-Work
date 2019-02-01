#include <GL/glut.h>  // GLUT, include glu.h and gl.h
#include<math.h> 

/* Initialize OpenGL Graphics */
void initGL() {
   // Set "clearing" or background color
   glClearColor(0.0f, 1.0f, 1.0f, 1.0f); // Black and opaque

}
 
/* Handler for window-repaint event. Call back when the window first appears and
   whenever the window needs to be re-painted. */
void display() {
   glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer with current clearing color
 
    float stripe=2.0/3;
   // Define shapes enclosed within a pair of glBegin and glEnd
   glBegin(GL_QUADS);              // Each set of 4 vertices form a quad
      glColor3f(1.0f, 0.6f, 0.012f); // Red
      glVertex2f(-1.0f, 1.0-stripe);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1.0f, 1.0-stripe);     //  so that the normal (front-face) is facing you
      glVertex2f(1.0f, 1.0f);
      glVertex2f(-1.0f, 1.0f);
 
      glColor3f(1.0f, 1.0f, 1.0f); // White
      glVertex2f(1.0f, 1.0-2*stripe);
      glVertex2f(-1.0f, 1.0-2*stripe);
      glVertex2f(-1.0f, 1.0-stripe);     // Define vertices in counter-clockwise (CCW) order
      glVertex2f(1.0f, 1.0-stripe);     //  so that the normal (front-face) is facing you
 
      glColor3f(0.075, 0.533, 0); // Green
      glVertex2f(1.0f, -1.0f);
      glVertex2f(-1.0f, -1.0f);
      glVertex2f(-1.0f, 1.0-2*stripe);
      glVertex2f(1.0f, 1.0-2*stripe);

      float x1,y1,x2,y2;
      float angle;
      double radius=0.3;

    x1 = 0.0,y1=0.0;
    glColor3f(0, 0, 0.502);

    glBegin(GL_TRIANGLE_FAN);

    for (angle=1.0f;angle<361.0f;angle+=0.2)
    {
        x2 = x1+sin(angle)*radius;
        y2 = y1+cos(angle)*radius;
        glVertex2f(x2,y2);
    }

    glEnd();

    glColor3f(0, 0, 0.502);
    glBegin(GL_LINES);
    for (angle=0.0f;angle<=360.0;angle+=15)
        {
        glVertex2f(0,0);
        glVertex2f(cos(angle)*radius,sin(angle)*radius);
        }
    glEnd();



   glEnd();



   glFlush();  // Render now
}
 
/* Main function: GLUT runs as a console application starting at main()  */
int main(int argc, char** argv) {
   glutInit(&argc, argv);          // Initialize GLUT
   glutCreateWindow("Vertex, Primitive & Color");  // Create window with the given title
   
       // giving window size in X- and Y- direction 
    glutInitWindowSize(1366, 1768); 
    glutInitWindowPosition(0, 0); 
    
   glutDisplayFunc(display);       // Register callback handler for window re-paint event
   initGL();                       // Our own OpenGL initialization
   glutMainLoop();                 // Enter the event-processing loop
   return 0;
}