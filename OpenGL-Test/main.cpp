#include <stdio.h>
#include <GLTools.h>
#include <GLUT/GLUT.h>
#include "Triangle.h"

#define CHAPTOR_1 1
#define CHAPTOR_2 2

int main(int argc, char* argv[])
{
    gltSetWorkingDirectory(argv[0]);
    glutInit(&argc, argv);
    
    unsigned int chaptor = 1;
    switch (chaptor) {
        case CHAPTOR_1:
        {
            Triangle *triangle = new Triangle();
            triangle->show();
            break;
        }
        case CHAPTOR_2:
        {
            break;
        }
    }
    
    return 0;
}