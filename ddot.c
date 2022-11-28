//Program for calculating the scalar product of two vectors
#include <stdio.h>

void main()
{
    float v;
    //Arrays to store the components of vector.  
    float x[3];
    float y[3];
    float p[3];
    float sum;
    
    // reading the components

    printf("Enter the components of vector X[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        x[i] = v;
    }
    
    printf("Enter the components of vector y[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%f" , &v );
        y[i] = v;
    }
    //Calculating the scalar product.
    
    for(int i = 0;i < 3;i++)
    {        
        p[i] = x[i] * y[i];
        sum += p[i];
    }
    //printing the vector x.
    printf("X = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", x[i]);
    }
    printf(")\n");
    //printing the vector y.
    printf("Y = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%f ", y[i]);
    }
    printf(")\n");
    printf("The dot product of two vectors is :%f\n" , sum);
    
}