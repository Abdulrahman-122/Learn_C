//Making New Types

#include <stdio.h>

// int main(void){
// 	typedef int mushroom;
// 	mushroom sand=10;
// 	printf("%d sandwiches!!\n",sand);
// }
//well this is very great you can now make your types and assign it to variables with strange names .
//

// int main(void){
// 	struct animal{
// 		char *name;
// 		int leg_count,speed;
// 	};
// 	typedef struct animal animal;  //here we made another type called animal 
// 	animal Cow;
// 	animal Rat;
// 	Cow.name="John";
// 	Cow.leg_count=1000;
// 	Cow.speed=12;
// 	printf(" Cow Name: %s\n",Cow.name);
// 	printf("Cow leg_count=%d\n",Cow.leg_count);
// 	printf("Cow Speed=%d\n",Cow.speed);
//
//
//
//
// }  you can write it in another way or another format
// int main(void){
// 	typedef struct animal {
// 		char *name;
// 		int leg_count,speed;
//
// 	}animal;
// 	animal Cow;
// 	Cow.name="John";
//  	Cow.leg_count=1000;
//  	Cow.speed=12;
//  	printf("Cow Name: %s\n",Cow.name);
//  	printf("Cow leg_count=%d\n",Cow.leg_count);
//  	printf("Cow Speed=%d\n",Cow.speed);
//
//
// }
// you can even do another format (simple one)
// int main(void){
// 	typedef struct{
// 		char *name;
// 		int leg_count,speed;
// 	}animal;
//  	animal Cow;
// 	Cow.name="John";
// 	Cow.leg_count=1000;
// 	Cow.speed=12;
// 	printf("Cow Name: %s\n",Cow.name);
// 	printf("Cow leg_count=%d\n",Cow.leg_count);
// 	printf("Cow Speed=%d\n",Cow.speed);
// }
//another example
// int main(void){
// 	typedef struct{
// 		int x,y;
// 	} point;
// 	point p={.x=20,.y=30};
// 	printf("first length=%d\n",p.x);
// 	printf("second length=%d\n",p.y);
// }
//
// also you can use typedef to change the  types fast instead of make that change to the zillion or million lines of code.
//
// int main(void){
// 	typedef float app_float; // if you want later to change float to another types in order to change the whole types of these variables -> say long double 
// 				 // just write typedef long double app_float;
// 	app_float f1,f2,f3,f4;
// }
//even though you can use typedef with pointers 
// int main(void){
// 	typedef int *intptr;
// 	int a=10;
// 	intptr x=&a;   //now x is a pointer that points to the address of a
//
// 	printf("the address of x is: %d\n",x);
// 	printf("the value of x is :%d\n",*x);
// }
// you can define any case from these whendefine a typedef type

// int main(void){
// 	typedef struct{
// 		int x,y;
// 	} my_point;  //this called lower snake case;
// 	typedef struct{
// 		int x,y;
// 	}MyPoint;  //this called CamelCase
// 	typedef struct{
// 		int x,y;
// 	}Mypoint;  //this called leading uppercase
// 	typedef struct{
// 		int x,y;
// 	}MY_POINT; // upper snake case
// 		   //
// 		   //
// }
// you can use typedef with arrays but this will hide the definition of the arrays.
//
int main(void){
	typedef int five_ints[5];
	five_ints x={1,2,3,4,5};
	for (int i=0;i<5;i++){
		printf("index %d of the  array is : %d\n",i+1,x[i]);
	}
}

