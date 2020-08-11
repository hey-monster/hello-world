# hello-world
My first reposity, it will use all in english and recording the learning process.

I will update github project every day.
* [vim快捷键](https://github.com/hey-monster/hello-world/blob/master/doc/vim%E5%BF%AB%E6%8D%B7%E9%94%AE.md)




// badprog.com
#include <GL/glut.h>

void displayMe(void)
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin(GL_POLYGON);
        glVertex3f(0.0, 0.0, 0.0);
        glVertex3f(0.5, 0.0, 0.0);
        glVertex3f(0.5, 0.5, 0.0);
        glVertex3f(0.0, 0.5, 0.0);
    glEnd();
    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE);
    glutInitWindowSize(300, 300);
    glutInitWindowPosition(100, 100);
    glutCreateWindow("Hello world from Badprog.com :D");
    glutDisplayFunc(displayMe);
    glutMainLoop();
    return 0;
}
Compiling
g++ main.cpp -o lookAtThis -lglut ; ./lookAtThis
