#include <iostream>

#include <GL/glut.h>

#include "../include/glinit.h"
#include "../include/point.h"
#include "../include/vector2d.h"
#include "../include/window.h"

using namespace twod;

std::ostream& operator<<(std::ostream& out, const point& p)
{
    return out << "(" << p.x << ", " << p.y << ")";
}

std::ostream& operator<<(std::ostream& out, const vector2d& v)
{
    return out << v.begin << " -> " << v.end;
}

int main(int argc, char** argv)
{
    glinit start(argc, argv);
    window my_window("Hello World!"); 


    glutMainLoop();

    return 0;
}
