#include<stdio.h>

int main () {
    
    int i;
    float v;

    //creating arrays to store the elements of vectors
    float x[2];
    float y[2];

    printf("enter the components of vector X:\n");

    for(i=0;i<=2;i++) {
        scanf("%f", &v);
        x[i] = v;

    }

    //copy elements of x into y
    for(i=0; i<=2; i++) {

        y[i] + x[i];
    }
    //printing vector x
    printf("X = (");
    for(i=0; i<=2; i++) {
        printf("%f", x[i]);
    }
    printf(")\n");

    //printing vector y
    printf("After copying vector X into Y we get:\n");
    printf("Y = (");
    for(i=0; i<=2; i++) {
        printf("%f", y[i]);
    }
    printf(")");
}