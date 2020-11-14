#include <stdio.h>
#include "myMath.h"

int main(){
    printf("Please insert a real number: ");
    double x=0;
    scanf("%lf", &x);

    double answer1 = sub(add(Exponent((int)x),Power(x,3)),2);
    double answer2 = add(mul(3,x),mul(2,Power(x,2)));
    double answer3 = sub(div(mul(4,Power(x,3)),5),mul(2,x));
    printf("The value of f(x)=e^x+x^3-2 at the point %0.4f is: %0.4f\n", x, answer1);
    printf("The value of f(x)=3x+2x^2 at the point %0.4f is: %0.4f\n", x, answer2);
    printf("The value of f(x)=(4x^3)/5-2x at the point %0.4f is: %0.4f\n", x, answer3);

    return 0;
}