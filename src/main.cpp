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
		}else{
			x = 467;
			n = 8;
		}
	}

    return 0;
}
