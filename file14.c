//Manual Memory Allocation
//however this topic is related to memory
//so if you want to allocate some bytes for your program
//you must free them after you done with them either it will be used by the process untill you exits it (this  will be memory leak)
//
//we will use malloc to allocate memory , free for deallocate that memory
//example;
#include <stdio.h>
#include <stdlib.h>
// int main(void){
// 	int *p=malloc(sizeof(int));  // allocate 4 bytes for pointer p 
// 	*p=12;      //assign value to that 
// 	printf("%d\n",*p);
// 	free(p);      //free -> deallocate the address of p.
// 	*p=22333;     //now test assigning new value to that place -> no crach at all but this is a bug Add-after-free so the problem will appear at the large programs 
// 		      //as when you freed up the memory =>the OS is responsible for managing the memory so it will give *p  the size of int as you assign to it above 
// 		      //so that it will work but at large scale this will corrupt some data .
// 	printf("%d\n" , *p);
//
//
// }
//pause at Error checking
// int main(void){
// 	int *x;
// 	x=malloc(sizeof(int)*10);
// 	if(x == NULL){
// 		printf("Error Allocating 10 ints\n");
// 	}
// 	free(x);
// }
//
//Allocating space for an array
//by allocating the array into the memory then store data inside it then free it(deallocation)

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
// 	int *p;
// 	p = malloc(sizeof(int)*10);  //you can malloc any type withe sizeof.
// 	for (int i=0;i<10;i++){
// 		p[i]= i ;
// 	}
// 	for (int i=0;i<10;i++){
// 		printf("%d\n",p[i]);
// 	}
// 	free(p);	
//
// }
//calloc vs malloc 
//calloc -> allocates the memory for the numbers that you want
// it takes numbers of elemenets to be allocated(array number)
// then bytes of these allocated items (sizeof(int)
//also it clears the array by default to be zero before usage 
//malloc
//it take number of bytes to be allocated 
//but it doesn't set or clear the array that you allocated so you will need to use: memset(pointer_to_array,0,bytes_to_be_clear)
// #include <string.h>
// int main(void) 
//
// {
// 	int *p;
// 	p=calloc(10,sizeof(int));
// 	for (int i=0;i<10;i++){
// 		p[i]= i ;
// 	}
// 	printf("the output after using calloc\n");
// 	for (int i=0;i<10;i++){
// 		printf("%d\n",p[i]);
// 	}
// 	free(p);
//
// 	int *q;
// 	q=malloc(10*sizeof(int));
// 	memset(q,0,sizeof(int));
// 	for (int i=0;i<10;i++){
// 		q[i]= i ;
// 	}
// 	printf("the output after using malloc\n");
// 	for (int i=0;i<10;i++){
// 		printf("%d\n",q[i]);
// 	}
// 	free(q);
// }

// now to reallocate the memory from specific items to other use realloc 
// it takes -> pointer that points to the memory 
//  and it takes size of these items in bytes using sizeof(type)




#include <stdio.h>
#include <stdlib.h>

int main(void)
{	
	//allocate array of 20 floats (sizeof *p == sizeof(float)
	float *p=malloc(sizeof *p * 20);
	for (int i = 0;  i<20 ; i++){

		p[i]= i / 20.0;
	}
	//let's increase the allocated items to 40 using realloc
	float *new_p = realloc(p,sizeof *p * 40);
	if(new_p == NULL){
		printf("Error reallocation(review your realloc)\n");
		return 1;
	}
	
	p = new_p;
	for (int i=20;i<40;i++){
		p[i] = 1.0 + (i-20) / 20.0;
	}
	printf("Output,After using realloc\n");
	for(int i=0;i<40;i++){

		printf("%f\n",p[i]);
	
	}
	free(p);


}
//note: sizeof *p == sizeof(typeof(pointer)) in this case sizeof(float)

//pause: Reading in lines of Arbitrary Length

