#include <stdlib.h>
#include <stdio.h>
#include <math.h>
main(){

// sin formülü
int n , x ;
double faktoriyel = 1;
double  i , a , b;


printf("x degerini giriniz: ");
scanf("%d", &x);

for (n = 1; n <= 100; n++)
{
	a = pow ((-1), n); 
	printf("a = %f\n",a);
    b = pow (x, (2*n+ 1));
    printf("b = %f\n",b);
    
    faktoriyel *= (2*n) * (2*n + 1);
	printf("faktoriyel = %f\n", faktoriyel);
    i += (a * b) /faktoriyel;
  
    
}
 printf("\n islem sonucu = %f", i+x);

}

 	



