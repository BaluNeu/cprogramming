#include <stdio.h>
#include <math.h>

int main(){
    int r;

    const float PI = 3.14657;

    printf("Enter radius?");
    scanf("%d", &r);

    float circum = 2*PI*r;

    printf("circumference of a cricle is %f", circum);

    return 0;
}
