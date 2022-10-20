#include "stack.h"
#include <stdio.h>

void initialize(stack* s){

	s->head = (malloc(sizeof(node)));

	//Sætter den første stack til at være NULL, da den skal være tom.
	s->head = NULL;

}

void push(int x, stack* s){

	//Tjekker om stacken er tom, hvis ja blvier der allokeret hukommelse på størrelse af node.
	if(s->head = NULL){
		s->head = (malloc(sizeof(node)));
	}

	//Giver stacken værdien af x
	s->head->data = x;

}

int pop(stack* s){

	int temp;

	//Går igennem list indtil den sidste
	while(s->head->next != NULL){

		//Gemmer x's værdi i temp
		while(s->head->next->next != NULL){
			temp = s->head->data;
		}

	//Tildeler y værdien af x
	s->head->data = temp;

	}

	//Loop til at tømme stack når der skal poppes
	while(s->head != NULL){

		//Går igennem list indtil den sidste.
		while(s->head->next != NULL){
			//Sætter den sidste head i listen til NULL
			s->head = NULL;
		}
	}


	return temp;

}

bool empty(stack* s)
{

	//Tjekker om stack er tom
	if(s->head == NULL){
		return true;
	}else{
		return false;
	}
}

bool full(stack* s) {

	return false;

}
