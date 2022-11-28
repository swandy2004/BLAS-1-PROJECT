// code for constant times a vector plus vector(daxpy)
//y= a*x+y

#include <stdio.h>

void main()
{

    double x[3];     // Array to store components of x
    double y[3];     // Array to store components of y
    double result[3]; // Array to store resultant vector
    double scalar;

    // Reading the components of x
    printf("Enter the components of x:\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &x[i]);
    }

    // Reading the componentes of y
    printf("Enter the components of y:\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%lf", &y[i]);
    }

    // Reading any scalar value
    printf("Enter any scalar - 'a'\n");
    scanf("%lf", &scalar);

    // Adding x and y
    for (int i = 0; i < 3; i++)
    {
        result[i] = x[i] + y[i];
    }

    // Multiplying scalar with resultant vector
    for (int i = 0; i < 3; i++)
    {
        result[i] = scalar * result[i];
    }

    // printing the vectors x and y
    printf("x = (");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f", x[i]);
        switch (i)
        {
        case 0:
        printf("i + ");
            break;
        case 1:
            printf("j + ");
            break;
        case 2:
            printf("k");
            break;
        }
    }
    printf(")\n");

    printf("y = ( ");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f", y[i]);
        switch (i)
        {
        case 0:
            printf("i + ");
            break;
        case 1:
            printf("j + ");
            break;
        case 2:
            printf("k");
            break;
        }
    }

    printf(")\n");

    printf("y = a * (x + y)\n");

    printf("y = ( ");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f", y[i]);
        switch (i)
        {
        case 0:
            printf("i + ");
            break;
        case 1:
            printf("j + ");
            break;
        case 2:
            printf("k");
            break;
        }
    }
    printf(")\n");
}