//Structs
//it's a way used to organize data with mult types in order to use it in many processes or even functions
//this like class but it just has data no functions inside it
//
// #include <stdio.h>

// int main(){
// 	struct car{
// 		char *name;
// 		float price;
// 		int speed;
// 	};
// 	struct car output;
// 	output.name="BGB";
// 	output.price=12322.22;
// 	output.speed=1234;
// 	printf("Name:  %s \n",output.name);
// 	printf("Price: %f \n",output.price); //f -> floating number
// 	printf("Speed: %d \n",output.speed); // d -> whole integer number
// 	// you can make initializer instead of these lines
// 	struct car new = {"MM2",1222.22,1998};
// 	printf("Name:  %s \n",new.name);
// 	printf("Price:  %f \n",new.name);
// 	printf("Speed:  %d \n",new.name);
//
// 	printf("=========================\n");
// 	// you can use another tricky way
// 	struct car newon={.price=1244.12,.name="TTO",1234};
// 	printf("Name:  %s \n",newon.name);
// 	printf("Price:  %f \n",newon.name);
// 	printf("Speed:  %d \n",newon.name);
// 	printf("=========================\n");
	//now we want to pass a struct to a function 
	//however passing a struct to a function is non-illegal 
	//so we need to use a pointer to points to the struct while we passed it instead to the function
	
// }

//now we want to pass a struct to a function 
//however passing a struct to a function is non-illegal 
//so we need to use a pointer to points to the struct while we passed it instead to the function
// struct car {
// 	char *name;
// 	float price;
// 	int speed;
// };
//
// void Assign_struct( struct car *c,int enter_speed,float enter_price){
// 	//now we passed a pointer to the struct now we will make
// 	//derefrencing in order to make pointer to point to the struct itself as if the struct was in the function
// 	(*c).speed=enter_speed;
// 	c->price=enter_price;  // this is equal to (*c).price=enter_price;
//
// }
//
//
//
// int main(){
//
// 	struct car p_struct= {.name="FBG" };
// 	int speed_of_car = 100;
// 	float price_of_car=12222.122;
// 	Assign_struct(&p_struct,speed_of_car,price_of_car); //pass the address 
// 	printf("Speed: %d \n ",p_struct.speed); //even this is ugle we will go and use another way;
// 						//
// 	//Arrow Pointer -> 
// 	//this is  a way used to make pointer refer to a struct
// 	printf("Price: %.3f \n",p_struct.price);
// 	// if you didn't write .3 c will generate another 3 nums as the decimal number in memmory using c will print 6 decimals places.
//
//
//
// }


// let's move on to copy struct

// struct A {
// 	char *name;
// 	int  age ;
// 	double salary;
// };
//
// int main(){
// 	struct A  a={"Abdo",21,1222.21};
// 	//this is shallow copy (in the next section i will explain why)
// 	struct A b; 
// 	b=a;
// 	printf("Name: %s\n",b.name);
// 	printf("age: %d\n",b.age);
// 	printf("Name: %f\n",b.salary);
// 	printf("====================\n");
// 	// a.name="Abdulrhaman";
// 	printf("Name: %s\n",a.name);
// 	printf("age: %d\n",a.age);
// 	printf("Name: %f\n",a.salary);
// 	printf("=====================\n");
// 	printf("Name: %s\n",b.name);
// 	printf("age: %d\n",b.age);
// 	printf("Name: %f\n",b.salary);
//
//
// }
//

//What is a shallow copy;

// struct Person{
// 	char *name;
// 	int age;
// };
// int main() {
// 	char name[]="Ahmed";
// 	struct Person p1={name,22};
// 	struct Person p2=p1;
// 	printf("%s \n",p1.name);
// 	printf("%s \n",p2.name);
// 	//now let's show you how this is not a copy it's exactly being able to change the actual values
// 	p2.name[0] = 'M';
// 	printf("%s \n",p1.name); //this will change the actual value also the next one -> so this is why we  called it shallow copy.
// 	printf("%s \n",p2.name);
//
//
// }
//
//let's move on Deep copy using malloc +strcpy..

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct Person{
	char *name;
	int age;
};
int main(){
	struct Person p1;
	p1.age=20;  //this is easy to add as we made it int above
	p1.name=malloc(strlen("Ahmed")+1); // ask os to allocate 5 places+1 for /0 (identifier) by malloc
	strcpy(p1.name,"Ahmed") ; // then put inside these 6 places that string Ahmed/0
	struct Person p2; 
	p2.age=p1.age ;   //assign the same age to the p2.age
	p2.name=malloc(strlen("Ahmed")+1)  ; //ask for 6places
	strcpy(p2.name,p1.name);  // assign to that place the data inside p1
	printf("%s \n" , p1.name);
	printf("%s \n" ,p2.name);
	//now let's change the name of p2 and see whether it will apply those changes to p1 
	p2.name[0]='M';
	printf("%s \n" , p1.name);
	printf("%s \n" ,p2.name);
	printf("here we go no changes at p1 that means we did it ");
	//malloc -> function ask os to allocate specific places  for you in order to initialize to it data in memory.
	



}














