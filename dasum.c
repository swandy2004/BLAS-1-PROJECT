#include<stdio.h>
#include<stdlib.h>
#include<math.h>

    void main() {

        int a, b, c;
        printf("enter a : ");
        scanf("%d", &a);
        printf("enter b : ");
        scanf("%d", &b);
        printf("enter c : ");
        scanf("%d", &c);
        printf("absolute value of %d is : %d\n", a, abs(a));
        printf("absolute value of %d is : %d\n", b, abs(b));
        printf("absolute value of %d is : %d\n", c, abs(c));
        printf("the sum is : %d", abs(a)+abs(b)+abs(c));

}