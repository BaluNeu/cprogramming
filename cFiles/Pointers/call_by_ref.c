#include <stdio.h>

void increment(int *p){
    *p +=1;

};

int main(){

    int a = 10;

    printf("before:%d\n",&a);

    printf("before:%d\n", a);

    increment(&a);

    printf("after:%d\n",&a);

    printf("after:%d\n",a);



    return 0;
}