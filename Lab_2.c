#include "stdio.h"
#include "math.h"

double z1(double alpha){
    return (2*sin(alpha));
}

double z2(double alpha){
    if ((cos(alpha) + 1 - 2*(sin(2*alpha)*sin(2*alpha))) != 0) {
        return (sin(2*alpha) + sin(5*alpha) - sin(3*alpha))/(cos(alpha) + 1 - 2*(sin(2*alpha)*sin(2*alpha)));
    }
    else {
        return 0;
    }
}

int main(void){
    int alpha;
    scanf_s("%d", &alpha);
    printf("%lf  %lf", z1(alpha), z2(alpha));
    return 0;
}
