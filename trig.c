#include "math.h"

// Conversion Angle to Radiant
double toRad(double theta){
    return theta*PI/180.0;
}

// Conversion Radiant to Angle
double toDeg(double rad){
    return rad*180.0/PI;
}