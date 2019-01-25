#include <GL/glut.h>
const double pi = 3.14159265358979323;
#include <math.h>

void displayflag(void)
{
 glClear( GL_COLOR_BUFFER_BIT); 

  glBegin(GL_POLYGON);
  glColor3f(255.0f/255, 153.0f/255, 51.0f/255); 
  glVertex2f(0.6f, 0.75f); 
  glVertex2f(-0.6f, 0.75f); 
  glVertex2f(-0.6f, 0.25f); 
  glVertex2f(0.6f, 0.25f); 
  glEnd(); 
  glFlush();

  glBegin(GL_POLYGON);
  glColor3f(255.0f/255, 255.0f/255, 255.0f/255); 
  glVertex2f(0.6f, 0.25f); 
  glVertex2f(-0.6f, 0.25f); 
  glVertex2f(-0.6f, -0.25f); 
  glVertex2f(0.6f, -0.25f); 
  glEnd(); 
  glFlush();


  glBegin(GL_POLYGON);
  glColor3f(18.0f/255, 136.0f/255, 7.0f/255);
  glVertex2f(0.6f, -0.25f); 
  glVertex2f(-0.6f, -0.25f); 
  glVertex2f(-0.6f, -0.75f); 
  glVertex2f(0.6f, -0.75f); 
  glEnd(); 
  glFlush();

  glBegin(GL_POLYGON);
  glColor3f(28.0f/255, 56.0f/255, 67.0f/255);
  glVertex2f(-0.7f, -1.95f); 
  glVertex2f(-0.6f, -1.95f); 
  glVertex2f(-0.6f, 0.75f); 
  glVertex2f(-0.7f, 0.75f); 
  glEnd(); 
  glFlush();



    glPointSize(1.0);
    glBegin(GL_POINTS);
    float x,y,i;
    glColor3f(0.0/255, 0.0/255, 136.0/255);
    for(i=0;i<360;i+=0.01)
    {
        x = 0.25 * cos(i);
        y = 0.25 * sin(i);

        glVertex2f(x,y);
    }
    glEnd();

    glFlush();

    for(i=0;i<360;i+=(2*pi)/24)
    {
        x = 0.25 * cos(i);
        y = 0.25 * sin(i);

        glBegin(GL_LINES);
        glColor3f(0.0/255, 0.0/255, 136.0/255);
        glVertex2f(x,y);
        glVertex2f(0.0f,0.0f);
    }
    glEnd();

    glFlush();

}
int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(600, 600);
    glutInitWindowPosition(0,0);
    glutCreateWindow("The flag");
    glutDisplayFunc(displayflag);
    glutMainLoop();
    return 0;
  }