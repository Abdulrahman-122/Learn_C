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




// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void)
// {	
// 	//allocate array of 20 floats (sizeof *p == sizeof(float)
// 	float *p=malloc(sizeof *p * 20);
// 	for (int i = 0;  i<20 ; i++){
//
// 		p[i]= i / 20.0;
// 	}
// 	//let's increase the allocated items to 40 using realloc
// 	float *new_p = realloc(p,sizeof *p * 40);
// 	if(new_p == NULL){
// 		printf("Error reallocation(review your realloc)\n");
// 		return 1;
// 	}
//
// 	p = new_p;
// 	for (int i=20;i<40;i++){
// 		p[i] = 1.0 + (i-20) / 20.0;
// 	}
// 	printf("Output,After using realloc\n");
// 	for(int i=0;i<40;i++){
//
// 		printf("%f\n",p[i]);
//
// 	}
// 	free(p);
//
//
// }
//note: sizeof *p == sizeof(typeof(pointer)) in this case sizeof(float)

#include <stdio.h>
#include <stdlib.h>

// let's read any data from any file using C
//
char *readline(FILE *fp)             //FILE stands for reading files into this function using fp pointer
{
	 int offset =  0; 
	 int buffsize= 4;           // our starting point for buffer (4 bytes) then we increase it by 4 each time 
	char *buff;             // define a pointer called buff
	int c;                  // define a character to act as a single character from the file
	buff=malloc(buffsize) ;  // define allocated memory of 4 bytes to start reading the file char by char
	if (buff== NULL) 
		return NULL;         // in case your RAM is out of memory
				     // so this is the golden rule (defensive programming)
	// now let's make a loop in order to read the lines line by line (it stops at the end of each line as we put \n
	while( c=fgetc(fp),c!='\n' && c!=EOF){
		// fgetc take file that you want to read char by char
		// in c  the end of file is EOF  + end of line has a terminator called: \n
                if (offset == buffsize-1) {
			// in case our offset at the end of the buffer in our allocated memory
			buffsize*=2 ;   // multiply buffer by 2 -> 2*4=8 ... 16 ....32...
			char *new_buff=realloc(buff,buffsize);
			// realloc the memory with the new size of buffer
			if ( new_buff == NULL){ 
				free(buff);   // then here we check whether or not the new alllocated memory is good if failed -> free buff then Null
				return NULL;
			} 
			buff=new_buff;  //successfull realloc
		}
		//but in case the if didn't success
		// let's increase the offset one
		buff[offset++]=c;   // move the offset to detect new character

	}
	//now in case we reached the end of the  file we need to free the pointer + return Null
	if (c == EOF && offset == 0){
		free(buff);
		return NULL;
	}
	//now we need to shrink the redundant memory that new_buff added to the allocated memory
	if(offset<buffsize-1) // that means buffsize is larger than offset
	{
		char *new_buff=realloc(buff,offset+1);   //realloc buffer around offset plus 1 for the terminator
		// by default  realloc give the OS the rest of unallocated memory to it
		if(new_buff != NULL)
			buff=new_buff;
		

		
}
		buff[offset]='\0';  // now we need to put \0(backslash) as a terminator for the end of the line or file

		return buff ;  //this will give the function the address of the pointer in order to loop over it to print the whole data from memory
}

int main (void) 
{
	FILE *fp=fopen("read.txt","r");   //define our file to be read by the function above
	char * read_line; 
	while ((read_line= readline(fp)) !=NULL)  // make loop to extract line by line
	{
		printf("%s\n",read_line); // as we know from the function above it's read line by line so we need to free that chunk of memory after reading in order to avoid any memory leaks....
		free(read_line);  // now this will free the data from the allocated memory(in order to return the control to the os )
		}
	fclose(fp);    // now let's close the file in order to flushing or return the files handler from C to OS
}

// now we can read any file by this script
// the output of this file:
// ./f14
// Hey how it's going
// these data will be read by my C code
// feel free to try it out
// C is amazing 
// it's funny (love C)
//
// pause: realloc() with NULL(p87)



