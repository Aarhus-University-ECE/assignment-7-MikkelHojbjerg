#include <stdio.h>
#include <math.h>
#include "taylor_sine.h"

int main(int argc, char **argv)
{
	double x = 0, res;
	int n = 1;

	for(int i = 0; i < 5; i++){

		res = taylor_sine(x, n);

		printf("Taylor sine, x = %f, med en præcision på %d\n", x, n);
		printf("%f\n", res);

		res = sin(x);

		printf("math sin, x = %f\n", x);
		printf("%f\n\n", res);

		if(i == 1){
			x = 0;
			n = 8;
		}else if(i == 2){
			x = 0;
			n = 50;
		}else if(i == 3){
			x = 76;
			n = 5;
		}else if(i == 4){
			x = 76;
			n = 176;
		}else if(i == 5 && i != 0){
			x = 467;
			n = 8;
		}
	}

		/*
		Jo større et præcisions tal taylor sine har, jo mere præcis bliver faceit.
		Dette kan betyde at hvis n = 100000000, vil en test på 5% afvigelse ikke gå igennem.

		Jo tættere x er på nul, jo mere minder de to resultatet mere om hinanden
		*/


    return 0;
}
