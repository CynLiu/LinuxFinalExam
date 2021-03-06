
#include <stdio.h>

#include "include/my_stack.h"

#define length 5

int a[length];
int top = 1;
void stack_push(int x){
	top++;
	a[top] = x;
}

int stack_pop(){
	top--;
	return a[top+1];
}

int stack_capacity(){
// Current available size of the stack
	return top;
}	

int stack_size(){
// The capacity of the stack
	return length-top;
}
/*
 * return 0/1 to check if stack is empty or full
 * 0 - No
 * 1 - Yes
 */
int stack_is_empty(){
	if(top <= 1)
		return 1;
	else 
		return 0;
}

int stack_is_full(){
	if(top >= length)
		return 1;
	else 
		return 0;
}

