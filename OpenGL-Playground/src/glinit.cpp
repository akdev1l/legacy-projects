#include <GL/glut.h>

#include "../include/glinit.h"

namespace twod {
    glinit::glinit(int argc, char** argv)
    {
        glutInit(&argc, argv);
    }
    glinit::~glinit()
    {
    }
}
