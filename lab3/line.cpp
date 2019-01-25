#include <GL/glut.h>
#include<math.h>
#include<stdio.h>
//Input vairables
GLint xOne, yOne, xTwo, yTwo;
//Funtion declaration
void resize(int, int);
void setPixel(GLint, GLint);
void lineBres_L1(GLint, GLint, GLint, GLint, GLfloat) ;
void lineBres_GE1(GLint, GLint, GLint, GLint, GLfloat);
void display();
int main(int argc, char**argv)
{
    printf("*********Bresenham's Line Drawing Algorithm ************");
    printf("\nEnter starting vertex (x1, y1):");
    scanf("%d%d",&xOne, &yOne);
    printf("\nEnter ending vertex (x2, y2):");
    scanf("%d%d",&xTwo, &yTwo);
    glutInit(&argc,argv); //initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB); //initialize display mode
    glutInitWindowSize(400,400); //set display-window width & height
    glutInitWindowPosition(800,50); //set display-window upper-left position
    //create display-window with a title
    glutCreateWindow("Bresenhams Line Drawing Algorithm");
    glutDisplayFunc(display); //call graphics to be displayed on the window
    glutReshapeFunc(resize); //calls whenever frame buffer window is resized
    glutMainLoop(); //display everything and wait
}
void resize(int w, int h)
{
//set projection paramaters
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(0.0,w,0.0,h);
    glViewport(0.0, 0.0, w, h);
}
void display()
{
    glClear(GL_COLOR_BUFFER_BIT);
    GLfloat m;
    m=(float)(yTwo-yOne)/(xTwo-xOne); //compute slope
    //call required function based on value of slope
    if(fabs(m)>=1)
    lineBres_GE1(xOne,yOne,xTwo,yTwo,m);
    else
    lineBres_L1(xOne, yOne, xTwo,yTwo, m);
} 

//Bresenham line-drawing procedure for |m| < 1.0
void lineBres_L1(GLint x0, GLint y0, GLint xEnd, GLint yEnd, GLfloat m)
{
    GLint dx = abs(xEnd - x0);
    GLint dy = abs(yEnd - y0);
    GLint p = 2 * dy - dx;
    GLint twoDy = 2 * dy;
    GLint twoDyMinusDx = 2 * (dy-dx); 
    GLint x=x0,y=y0;
    // determine which point to use as start position
if (x0 > xEnd)
{
    x = xEnd;
    y = yEnd;
    xEnd = x0;
}
else
{
    x = x0;
    y = y0;
}
setPixel(x,y);
while(x<xEnd)
{
    x++;
    if(p<0)
    p += twoDy;
    else
    {
    if(m<0)
    y--;
    else
    y++;
    p += twoDyMinusDx;
}
    setPixel(x,y);
}
}
//Bresenham line-drawing procedure for |m| >= 1.0
void lineBres_GE1(GLint x0, GLint y0, GLint xEnd, GLint yEnd, GLfloat m)
{
    GLint dx = abs(xEnd - x0);
    GLint dy = abs(yEnd - y0);
    GLint p=2*dx-dy;
    GLint twoDx = 2*dx;
    GLint twoDxMinusDy=2*(dx-dy);
    GLint x=x0,y=y0;
    // determine which point to use as start position
if (y0 > yEnd)
{
    x = xEnd;
    y = yEnd;
    yEnd = y0;
}
else
{
    x = x0;
    y = y0;
}
setPixel(x,y);
while(y<yEnd)
{
    y++;
    if(p<0)
    p+=twoDx;
    else
    {
    if(m<0)
    x--;
    else
    x++;
    p+=twoDxMinusDy;
}
    setPixel(x,y);
}
}
void setPixel(GLint xCoordinate, GLint yCoordinate)
{
    glBegin(GL_POINTS);
    glVertex2i(xCoordinate,yCoordinate);
    glEnd();
    glFlush(); //executes all OpenGL functions as quickly as possible
}