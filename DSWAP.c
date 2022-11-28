// C program for DSWAP

#include<stdio.h>

int main() {

        int x,y;
        printf("Enter the value of x");
        scanf("%d", &x);
        printf("Enter the value for y");
        scanf("%d", &y);

        int temp=x;
        x=y;
        y=temp;

        printf("\n After swapping: x= %d, y=%d", x,y);
}