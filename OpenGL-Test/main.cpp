#include <stdio.h>
#include <GLTools.h>
#include <GLUT/GLUT.h>
#include "Triangle.h"

int main(int argc, char* argv[])
{
    gltSetWorkingDirectory(argv[0]);
    glutInit(&argc, argv);
    
    Triangle *triangle = new Triangle();
    triangle->show();
    
    return 0;
}