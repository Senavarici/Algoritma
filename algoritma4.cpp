#include <stdlib.h>
#include <stdio.h>
main(){
	// pi formülü
	double islem , n ;
	for (n = 0; n <=5000; n++) {
		islem  += 4 * (2 /((4 * n + 1) * (4 * n + 3))); 
	}
	printf("islem = %f",islem);
}
