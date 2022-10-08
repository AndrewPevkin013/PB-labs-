#include "stdio.h"
#include "math.h"

double z1(double alp_rad){
    return (2*sin(alp_rad));
}

double z2(double alp_rad){

    return (sin(2*alp_rad) + sin(5*alp_rad) - sin(3*alp_rad))/(cos(alp_rad) + 1 - 2*(sin(2*alp_rad)*sin(2*alp_rad)));
}

int main(void){
    int alpha;
    double pi = 3.1415926;
    scanf_s("%d", &alpha);
    double alp_rad = alpha*pi/180;
    z1(alp_rad);
    z2(alp_rad);
    printf("%lf  %lf", z1(alpha), z2(alpha));
    return 0;
}
