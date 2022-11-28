#include<stdio.h>
#include<math.h>

int main() {

    double c;
    double s;
    double r;
    double a;
    double b;

    double t;
    double u;

    double (c, s, r) = givens_rotation(a, b);

    if (b == 0);{
        c = (sign(a));
    }
        if (c == 0);{
            c = 1.0; 
        // function returns 0 on input 0.
        s = 0;
        r = abs(a);
        }
            elseif (a == 0);{
            c = 0;
            s = sign(b);
            r = abs(b);
            }
            elseif (abs(a) > abs(b));{
            t = b / a;
            u = sign(a) * sqrt(1 + t * t);
            c = 1 / u;
            s = c * t;
            r = a * u;
            
        
            t = a / b; 
            u = sign(b) * sqrt(1 + t * t);
            s = 1 / u;
            c = s * t;
            r = b * u;
            }
    
    return 0;
}