#include <OpenGL/gl.h> 
#include <OpenGL/glu.h> 
#include <GLUT/glut.h> 
#include<stdlib.h>
#include<stdio.h>
#include<math.h>
#include<time.h>
void fractalFern(void){
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.4f, 0.8f, 0.4f);
    glBegin(GL_POINTS);
    GLfloat x=0,y=0;
    srand((unsigned)time(0));

    for (int i = 0; i < 50000;i++){

            int n = (int) 100*rand()/(RAND_MAX + 1);
            //printf("%d ", n);
            GLfloat _x, _y;
            if (n < 1){
                _x = 0; _y = 0.16*y;
            }
            else if(n < 8){
                _x = 0.2*x - 0.26*y;
                _y = 0.23*x + 0.22*y + 1.6;
            }
            else if (n < 15){
                _x = -0.15*x + 0.28*y;
                _y = 0.26*x + 0.24*y + 0.44;
            }
            else{
                _x = 0.85*x + 0.04*y;
                _y = -0.04*x + 0.85*y + 1.6;
            }
            x = _x;
            y = _y;
            glVertex2f(_x/10, _y/10-0.3);
            glFlush();
    }
    glEnd();
    glFlush();
}

int main(int argc, char* argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_RGB | GLUT_SINGLE);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(450, 450);
    glutCreateWindow("巴恩斯利蕨");
    glutDisplayFunc(&fractalFern);
    glutMainLoop();
    return 0;
}