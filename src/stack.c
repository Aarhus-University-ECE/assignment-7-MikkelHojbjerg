#include "stack.h"
#include <stdlib.h>
#include <stdio.h>

void initialize(stack* s){

	//Sætter den første stack til at være NULL, da den skal være tom.
	s->head = NULL;

}

void push(int x, stack* s){

	//Hvis stack er tom, bliver der allokeret plads og head->next bliver sat til NULL
	if(s->head == NULL){
		s->head = (malloc(sizeof(node)));
		s->head->next = NULL;
	}

	//Laver en node der peger på head
	node* top = s->head;

	//Får top til at gå til enden af listen
	while(top->next != NULL){
		top = top->next;
	}

	//Alloker plads til top->next, da det er der hvor dataen bliver opbevaret
	top->next = (malloc(sizeof(node)));

	top->next->data = x;

	top->next->next = NULL;


}

int pop(stack* s){

	int val;

	node* find = s->head;

	//Da der i push bliver lavet en sidste liste med NULL når den er færdig, skal den næste igen tjekkes for NULL
	while(find->next->next != NULL){
		find = find->next;
	}

	val = find->next->data;

	//next bliver sat til NULL, da den liste nu er poppet
	find->next = NULL;

	//Hvis s->head->next er tom (Hvor den sidste værdi bliver opbevaret), bliver s->head sat til NULL og den er klar til en ny omgang
	if(s->head->next == NULL){
		s->head = NULL;
	}

	return val;

}

bool empty(stack* s)
{


	if(s->head == NULL){
		//Sandt hvis head er tom
		return 1;
	}else{
		//Falsk hvis listen ikke er tom
		return 0;
	}


}

bool full(stack* s) {

	//Da der ikke er nogle stacksize på dette program, vil stacken aldrig være fuld og derfor altid false.

	return false;

}
