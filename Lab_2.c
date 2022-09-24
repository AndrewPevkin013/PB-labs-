#include "stdio.h"
#include "math.h"
int main(void){
    double alpha, z1, z2, pi = 3.1415926;

    scanf_s("%lf", &alpha);
    alpha = alpha*pi/180;  //Перевели с градусов в радианы
    z1 = cos(alpha) + sin(alpha) + cos(3*alpha) + sin(3*alpha);
    z2 = 2* sqrt(2) * cos(alpha) * sin(pi/4 + 2 * alpha);
    printf("%.3f\t %.3f\n", z1, z2);
    return 0;
}