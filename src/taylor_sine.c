#include "taylor_sine.h"
#include <math.h>
#include <stdio.h>

double fac(int j){

	double res = 1;

	//Tager alle nummer fra 1 og op til j og ganger med hinanden.
	for(int i = 1; i <= j; i++){

		res *= i;
	}

	return res;
}


double taylor_sine(double x, int n)
{

	double res = x;
	int j = 3;

	//i er hvor mange gange en udregning er blevet lavet, mens j er potens der skal ganges med (derfor den plusses med 2 hver gang).

	for(int i = 2; i <= n; i++){

		//Hvis i har en rest efter i%2 betyder det at det tidligere udtryk skal plusses med det nuværende.
		if(i%2 != 0){
			//Funktionen fac kaldes for at udregne factorial for j
			res += (pow(x,j)/fac(j));

		//Lige som sidst bare hvis der ikke er nogle rest skal der minusses.
		}else{
			res -= (pow(x,j)/fac(j));

		}

		printf("%f\n",pow(x,j)/fac(j));

		j += 2;
	}
    return res;
}
