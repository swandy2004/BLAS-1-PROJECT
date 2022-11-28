#include <stdio.h>
#include <math.h>

double max_abs_difference(double numbers[], int size);

 void main()
 {
    double arr[] = {6, 8, -4};
     double a = max_abs_difference(arr, 3);
     printf("%f\n", a);
 }

double max_abs_difference(double numbers[], int size)
{
    // stores the maximum absolute difference
    double max_diff;

    // initially set to diffrence at 0, 0
    max_diff = abs(numbers[0] - numbers[0]) + abs(0 - 0);

    // Iterating through all numbers
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            // calculate current absolute difference
            double diff = abs(numbers[i] - numbers[j]) + abs(i - j);

            // if the current difference is greater than maximum difference
            //  then update maximum difference
            if (diff > max_diff)
            {
                max_diff = diff;
            }
        }
    }
    return max_diff;
}