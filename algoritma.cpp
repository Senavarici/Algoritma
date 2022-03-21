#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main(){
	
	//cos formülü
    double  i = 1 , a = 1 , b = 1;
    double faktoriyel = 1;
    int x = 3, n;

    for (n = 1; n <= 10; n++)
    {
        faktoriyel *= (2*n) * (2*n - 1);
        printf ("faktoriyel = %f\n", faktoriyel);
        a = pow ((-1), n); // a = -1;
        printf("a = %f\n",a);
        b = pow (x, (2*n)); // b = 3*3;
        printf("b = %f\n",b);
        i += (a * b) / (double)faktoriyel;
    }

    printf("\n iþlem sonucu = %f", i);
}




 



