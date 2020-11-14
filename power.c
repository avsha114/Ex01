#include "myMath.h"

double Exponent(int x)
{
    double result = 1;
    if (x < 0){
        x *= -1;
        for (int i = 0; i < x; i++){
            result *= EXP;
        }
        result= 1/result;
    }
    else{
        for (int i = 0; i < x; i++){
            result *= EXP;
        }
    }
    return result;
}
double Power(double x, int y)
{
    double result = 1;
    if (y < 0){
        y *= -1;
        for (int i = 0; i < y; i++){
            result *= x;
        }
        result= 1/result;
    }
    else{
        for (int i = 0; i < y; i++){
            result *= x;
        }
    }
    return result;
}