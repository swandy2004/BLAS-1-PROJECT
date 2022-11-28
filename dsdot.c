//Program for calculating the scalar product of two vectors with extended precision
#include <stdio.h>

void main()
{
    double v;
    //Arrays to store the components of vector.  
    double x[3];
    double y[3];
    double p[3];
    double sum;
    
    // reading the components

    printf("Enter the components of vector X[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%lf" , &v );
        x[i] = v;
    }
    
    printf("Enter the components of vector y[]\n");
    for(int i = 0;i < 3;i++)
    {        
        scanf("%lf" , &v );
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
        printf("%lf ", x[i]);
    }
    printf(")\n");
    //printing the vector y.
    printf("Y = ( ");
    for(int i = 0;i < 3;i++)
    {
        printf("%lf ", y[i]);
    }
    printf(")\n");
    printf("The dot product of two vectors is :%lf\n" , sum);
    
}