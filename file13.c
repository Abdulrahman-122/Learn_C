//Arithmatic;
//

#include <stdio.h>
// int main(void){
// 	int a[5]={11,12,13,14,15};
// 	int *p=a; //p -> points to the first address of the array above
// 	for(int i=0;i<5;i++){
// 		printf("index %d of the array = %d\n",i+1,*(p + i));
// 	}
//  }

// let's modify the pointer 
// int main(void){
// 	int a[]={11,12,13,14,15,16,17,18};
// 	int *p=&a[0];
// 	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
// 	 printf("the address of index %d is %d\n",i,p);
// 	 printf(" the %d element is : %d\n",i+1,*(p+i));
// 	}
//
// 	while (*p != 18){
// 		printf(" the  element is : %d\n",*p);
// 		p++;
// 		}
//
// }
//let's subtract a pointer in order to find the length of a string
// //
// int my_strlen(char *s){
// 	char *p = s;
// 	while(*p != '\0'){
// 		p++;  //move the pointer to the next address while we didn't reach the end of the string
// 	}
// 	return p-s;  //after moving the pointer toward the last element do the return operation.
// }
//
// int main(void){
// 	printf("the length of that string is %d\n",my_strlen("Hello, world!blah blah blah"));
//}
//
//Array/Pointer Equivalence
//
//there are many ways to access the elements of an array either by pointer or the varaible of the array
//

// int main(void){
// 	int a[]={1,2,3,4,5,6};
// 	int *p=a;
// 	printf("array notation with a\n");
// 	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
// 		printf("%d\n",a[i]);   //array notation with a
// 	} //1st case
// 	printf("array notation with p\n");
// 	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
// 		printf("%d\n",p[i]); //array notation with p
// 	}
// 	printf("pointer notation with a\n");
// 	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
// 		printf("%d\n",*(a+i));  //pointer notation with a
//
// 	}
// 	printf("pointer notation with p\n");
// 	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
// 		printf("%d\n",*(p+i));  //pointer notation with a
// 	}
// 	printf("Moving pointer with p\n");
// 	for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
// 		printf("%d\n",*(p++));  //pointer notation with a
//
// 	}
	// printf("pointer notation with a\n");
	// for (int i=0;i<sizeof(a)/sizeof(a[0]);i++){
	// 	printf("%d\n",*(a++));  //moving array variable  a (error)
	// }





//}

 //
 // int my_strlen(char *s){  // you can pass instead of that pointer -> char s[] 
 // char *p = s;
 // 	while(*p != '\0'){
 // 		p++;  //move the pointer to the next address while we didn't reach the end of the string
 // 	}
 // 	return p-s;  //after moving the pointer toward the last element do the return operation.
 // }
 //
 // int main(void){
 // char s[]="Welcome guys!!!";
 // char *t="Hey how it's going";
 // char *p="Hey , i am Abdulrahman";
 // printf("the length of that string is: %d characters\n",my_strlen(s)); // this will works
 // printf("the length of that string is: %d characters\n",my_strlen(t)); // also this works , too!!!
 //
 // printf("the length of that string is: %d characters\n",my_strlen(p));
 // }
//Void Pointers;
    // void* is a pointer to an existing thing
      // void part of it -> indicate we don't know the type of the thing.
    // if you iterate through char* s -> you just iterate through the bytes of an object no matter what type of that object.

// #include <stdio.h>
#include <string.h>

// int main(void){
// 	char s[]="Goats!!";
// 	char t[100];   // making 100 free places into that array
//
// 	char p[]="welcome!!";
// 	memcpy(t,s,8);  //copy 8 bytes including the Nul terminator!!!
// 	printf("%s\n",t);
//
// 	memcpy(t,p,10);
// 	printf("%s\n",t);
// }
// let's copy an array using memcpy to another one
// int main(void){
// 	int a[]={1,2,4};
// 	int b[3];
// 	memcpy(b,a,3*sizeof(int));  //copy 3 ints of data.in order to store these data in .
// 	printf("1st element=%d\n2nd element=%d\n3rd element=%d \n",b[0],b[1],b[2]); 
// }
//

// void *my_memcpy(void *dest,void *src,int byte_count)
// {
// 	char *s=src,*d=dest;
// 	while (byte_count--){
// 		*d++=*s++;
// 	}
// 	return dest;
// }
// int main(void){
// 	int a[]={1,2,3};
// 	int b[3];
// 	my_memcpy(b,a,3*sizeof(int));
// 	printf("1st element=%d\n2nd element=%d\n3rd element=%d \n",b[0],b[1],b[2]);
// }
#include <stdio.h>
#include <stdlib.h>

struct animal{

	char *name;
	int leg_count;
};
int compare(const void *elem1,const void *elem2)
{
	const struct animal *animal1=elem1;
	const struct animal *animal2=elem2;

	if(animal1->leg_count>animal2->leg_count)
		return 1;
	if(animal1->leg_count<animal2->leg_count)
		return -1;

	return 0;
}
int main (void){
	struct animal a[4]={
		{.name="Dog",.leg_count=4},
		{.name="Monkey",.leg_count=2},
		{.name="Antelope",.leg_count=4},
		{.name="Snake",.leg_count=0}
	};
	qsort(a,4,sizeof(struct animal),compare);
	for(int i=0 ;i<4;i++){
		printf("%d: %s\n",a[i].leg_count,a[i].name);
	}
}
