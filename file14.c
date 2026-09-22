//Manual Memory Allocation
//however this topic is related to memory
//so if you want to allocate some bytes for your program
//you must free them after you done with them either it will be used by the process untill you exits it (this  will be memory leak)
//
//we will use malloc to allocate memory , free for deallocate that memory
//example;
#include <stdio.h>
#include <stdlib.h>
int main(void){
	int *p=malloc(sizeof(int));  // allocate 4 bytes for pointer p 
	*p=12;      //assign value to that 
	printf("%d\n",*p);
	free(p);      //free took the address of p
	*p=22333;     //now test assigning new value to taht place -> no crach at all but this is a bug Add-after-free so the problem will appear at the large programs 
		      //as when you freed up the memory =>the OS is responsible for managing the memory so it will give *p  the size of int as you assign to it above 
		      //so that it will work but at large scale this will corrupt some data .
	printf("%d\n" , *p);


}
//pause at Error checking

