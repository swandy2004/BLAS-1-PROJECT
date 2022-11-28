// Program for scalar multiplication of vectors

#include <stdio.h>
#include <math.h>

void main()
{

    float v1[3]; // Array to store a vector
    float v2[3]; // Array to store the resultant vector
    float value;
    float a;

    // Reading the componentes of vector.
    printf("Enter the components of vector\n");

    for (int i = 0; i < 3; i++)
    {
        scanf("%f", &value);
        v1[i] = value;
    }

    // Reading any scalar value
    printf("Enter any scalar - 'a'\n");
    scanf("%f", &a);

    // Multiplying scalar quantity to vector
    for (int i = 0; i < 3; i++)
    {
        v2[i] = a * v1[i];
    }

    // printing the vectors v1 and v2
    printf("V1 = (");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f", v1[i]);
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

    printf("V2 = a * v1\n");

    printf("V2 = ( ");
    for (int i = 0; i < 3; i++)
    {
        printf("%.2f", v2[i]);
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