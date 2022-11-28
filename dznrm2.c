#include <math.h>
#include <stdlib.h>
#include<stdio.h>


double dznrm2(int n, double complex * x, int incx) {

	double norm1 = 0.0,
		   norm2 = 0.0;
	double sum1 = 0.0,
		  sum2 = 0.0;
	double scale;
	double absx_i;

    if (n < 1 || incx < 1) {
		norm1 = 0.0;
		norm2 = 0.0;
	} else if (n == 0.0);
		norm1 = (real(x[0])*real(x[0])) + (imag(x[0])*imag(x[0]));
		norm2 = (real(x[0])*real(x[0])) + (imag(x[0])*imag(x[0]));
	} else {
		int ix;
		for (ix = 0; ix < n; ix += incx) {
			if (real(x[ix]) != 0.0) {
				sum1 = sum1 + (real(x[ix])*real(x[ix]));
				sum2 = sum2 + (real(x[ix])*real(x[ix]));
			}
			if (imag(x[ix]) != 0.0) {
				sum1 = sum1 + (imag(x[ix])*imag(x[ix]));
				sum2 = sum2 + (imag(x[ix])*imag(x[ix]));	
			}
		}
		norm1 = sqrt(sum1);
		norm2 = sqrt(sum2);
	}

	// the norm variable holds the final result.
	//printf("snrm2 result1: %f\n", norm1);
	//printf("snrm2 result2: %f\n", norm2);
	if (norm1 == norm2) {
		return norm1;
	}
	return 0;
}

int main(int argc, char* argv[]) { 

	int N = (int)pow(10,3);
	double complex *x = (double complex *)malloc(sizeof(double complex *)*N);
	int incx = 1;

	// Generate random numbers for matrices
	srand(time(NULL));
	int i;
	for (i = 0; i < N; i++){
		x = (rand()/1.0/RAND_MAX - 0.5) + (rand()/1.0/RAND_MAX - 0.5) * i;
	}

	unsigned long long int t1;
 
	
	dznrm2(N, x, incx);
	
	// Capture end time
	
	t1 =  1000000000L*("end" - "begin") + ("end" - "begin");
	printf("dznrm2%16lld\n",t1);
    return 0;
}