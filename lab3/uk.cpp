#include <GL/freeglut.h>
#include <GL/gl.h>
#include <bits/stdc++.h>

#define WIDTH 600
#define HEIGHT 600

using namespace std;

const double PI = 3.14159265358979323;

void drawFlag() {
    
    glClear(GL_COLOR_BUFFER_BIT);

    // Pole
    glBegin(GL_POLYGON);
        glColor3f(192.0/255, 192.0/255, 192.0/255);
        glVertex2f(-0.6, -0.8);
        glVertex2f(-0.57, -0.8);
        glVertex2f(-0.57, 0.75);
        glVertex2f(-0.6, 0.75);
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(0.0/255, 36.0/255, 125.0/255);
        glVertex2f(-0.57, 0.7);
        glVertex2f(0.5, 0.7);
        glVertex2f(0.5, -0.05);
        glVertex2f(-0.57, -0.05);
    glEnd();


//
    glBegin(GL_POLYGON);
        glColor3f(255.0/255, 255.0/255, 255.0/255);
        
        glVertex2f(-0.085, 0.7);
        glVertex2f(0.015, 0.7);

        glVertex2f(0.015, -0.05);
        glVertex2f(-0.085, -0.05);
        
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(255.0/255, 255.0/255, 255.0/255);
        // glVertex2f(-0.57, 0.7);
        
        glVertex2f(0.5, 0.295);
        glVertex2f(0.5, 0.355);
        
        // glVertex2f(0.5, -0.05);
        glVertex2f(-0.57, 0.355);
        glVertex2f(-0.57, 0.295);
        
    glEnd();

//

    //
    glBegin(GL_POLYGON);
        glColor3f(207.0/255, 20.0/255, 43.0/255);
        
        glVertex2f(-0.075, 0.7);
        glVertex2f(0.005, 0.7);

        glVertex2f(0.005, -0.05);
        glVertex2f(-0.075, -0.05);
        
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(207.0/255, 20.0/255, 43.0/255);
        // glVertex2f(-0.57, 0.7);
        
        glVertex2f(0.5, 0.305);
        glVertex2f(0.5, 0.345);
        
        // glVertex2f(0.5, -0.05);
        glVertex2f(-0.57, 0.345);
        glVertex2f(-0.57, 0.305);
        
    glEnd();

//
    glBegin(GL_POLYGON);
        glColor3f(207.0/255, 20.0/255, 43.0/255);
        // glVertex2f(-0.57, 0.7);
        
        glVertex2f(0.45, 0.7);
        glVertex2f(0.5, 0.7);
        glVertex2f(0.5, 0.65);
        // glVertex2f(0.5, -0.05);
        glVertex2f(-0.52, -0.05);
        glVertex2f(-0.57, -0.05);
        glVertex2f(-0.57, 0.00);
        
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(207.0/255, 20.0/255, 43.0/255);
        // glVertex2f(-0.57, 0.7);
        
        glVertex2f(-0.52, 0.7);
        glVertex2f(-0.57, 0.7);
        glVertex2f(-0.57, 0.65);
        
        // glVertex2f(0.5, -0.05);
        glVertex2f(0.45, -0.05);
        glVertex2f(0.5, -0.05);
        glVertex2f(0.5, 0.00);
        
    glEnd();
 ///////////////////////////////////////////////////////////////////////////////////////

//
    glBegin(GL_POLYGON);
        glColor3f(255.0/255, 255.0/255, 255.0/255);
        
        glVertex2f(0.43, 0.7);
        glVertex2f(0.5, 0.7);
        glVertex2f(0.5, 0.63);

        glVertex2f(-0.50, -0.05);
        glVertex2f(-0.57, -0.05);
        glVertex2f(-0.57, 0.02);
        
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(255.0/255, 255.0/255, 255.0/255);
        // glVertex2f(-0.57, 0.7);
        
        glVertex2f(-0.50, 0.7);
        glVertex2f(-0.57, 0.7);
        glVertex2f(-0.57, 0.63);
        
        // glVertex2f(0.5, -0.05);
        glVertex2f(0.43, -0.05);
        glVertex2f(0.5, -0.05);
        glVertex2f(0.5, 0.02);
        
    glEnd();

//
    glBegin(GL_POLYGON);
        glColor3f(207.0/255, 20.0/255, 43.0/255);
        // glVertex2f(-0.57, 0.7);
        
        glVertex2f(0.45, 0.7);
        glVertex2f(0.5, 0.7);
        glVertex2f(0.5, 0.65);
        // glVertex2f(0.5, -0.05);
        glVertex2f(-0.52, -0.05);
        glVertex2f(-0.57, -0.05);
        glVertex2f(-0.57, 0.00);
        
    glEnd();

    glBegin(GL_POLYGON);
        glColor3f(207.0/255, 20.0/255, 43.0/255);
        // glVertex2f(-0.57, 0.7);
        
        glVertex2f(-0.52, 0.7);
        glVertex2f(-0.57, 0.7);
        glVertex2f(-0.57, 0.65);
        
        // glVertex2f(0.5, -0.05);
        glVertex2f(0.45, -0.05);
        glVertex2f(0.5, -0.05);
        glVertex2f(0.5, 0.00);
        
    glEnd();
 
    glFlush();
}

int main(int argc, char **argv) {

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(WIDTH, HEIGHT);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Flag");
    glutDisplayFunc(drawFlag);
    glutMainLoop();
}
