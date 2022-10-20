#include <stdio.h>
#include <math.h>
#include "taylor_sine.h"

int main(int argc, char **argv)
{

	double x = 0;
	double res;
	int n = 1;

	for(int i = 0; i < 4; i++){

		res = taylor_sine(x, n);

		printf("Taylor sine, x = %d, med en præcision på %d\n", x, n);
		printf("%d", res);

		res = sin(x)

		printf("math sin, x = %d\n", x);
		printf("%d\n\n", res);

		if(i == 1){
			x = 0;
			n = 8;
		}else if(i == 2){
			x = 0;
			n = 50;
		}else if(i == 3){
			x = 76;
			n = 8;
		}else{
			x = 345;
			n = 0;
		}
	}

    return 0;
}
