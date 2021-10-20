#pragma once

#include <GL/glut.h>

namespace twod {
    enum GLUT_DISPLAY {
        RGBA = GLUT_RGBA,
        RGB  = GLUT_RGB,
        INDEX = GLUT_INDEX,
        SINGLE = GLUT_SINGLE,
        DOUBLE = GLUT_DOUBLE,
        ACCUM = GLUT_ACCUM,
        ALPHA = GLUT_ALPHA,
        DEPTH = GLUT_DEPTH,
        STENCIL = GLUT_STENCIL,
        MULTISAMPLE = GLUT_MULTISAMPLE,
        LUMINANCE = GLUT_LUMINANCE,
        STEREO = GLUT_STEREO
    }
}
