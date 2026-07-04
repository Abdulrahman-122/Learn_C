
#include <stdio.h>
// Pointers 
// A pointer is a variable that stores the memory address of another variable.
// it's like an address of a house ,it tells you where to find that house but not  the house itself what it contain

// void main(){
//     int i=10;
//     printf("The value of i is %d \n",i);
//     printf("The address of i is %p \n",(void *)&i);
// }
// //output;
// The value of i is 10 
// The address of i is 0x7ffec349e504 

// now how to assign address to a pointer
    //first -> make a pointer either int or whatever
    // assign to it an address of another int
// void main(){
//     int i;
//     int *p;
//     p= &i;
//     printf("the value of p is %d \n",p );
// }

//Derefrencing;
    // the process of making pointer access the value of the variable that he indicate to 
    // so you can change the pointer value and then the variable will change instantly this called dereferencing.

// void main(){
//     int i=10;
//     int *p;
//     p= &i ;  // here we have referencing(p reference to the address of i)
//     *p =20 ;  //now this called dereferencing as the value changed now
//     printf("The value of i is  %d \n",i);
//     printf("The value of p is  %d \n",*p);
//     printf("The address of p is  %d \n",p);
//     printf("The address of i is  %d \n", &i);
    
// // The value of i is  20 
// // The value of p is  20 
// // The address of p is  -1453172388 
// // The address of i is  -1453172388 
// }

// maybe you may ask what is the benefit of using *p rather than i or whatever?
//     // the pointers will benefit us when we use it with the functions in order to change the varible itself look at this example:
// void increment(int *p){
//     *p=*p+1;  //here we add one to the value that pointer refernce to 
    //note we don't need to return anything as this access the variable and change it

// }
//     void main(){    
//         int i=10;
//         int *j;
//         j = &i ;  //here we build a pointer and initialized it to refernce address of i
//         printf("value of i before increment is %d\n",i);
//         printf("valud of p before increment is %d\n",*j);
//         printf("address of i before increment is %d\n",&i);
//         printf("address of p before increment is %d\n",j);
//         increment(j);
//         printf("value of i afterincrement is %d\n",i);
//         printf("valud of p afterincrement is %d\n",*j);
//         printf("address of after increment is %d\n",&i);
//         printf("address of after increment is %d\n",j);
       //output 
// value of i before increment is 10
// valud of p before increment is 10
// address of i before increment is -1157939428
// address of p before increment is -1157939428
// value of i afterincrement is 11
// valud of p afterincrement is 11
// address of after increment is -1157939428
// address of after increment is -1157939428


// }


// Null operator with pointer
// if you initialized  a pointer with null then you make it refernce to another thing it will crach
// void mian(){
//     int *p= NULL;
//     *p=12;
//     printf("p is refernce to %d",*p);
//     //output;collect2: error: ld returned 1 exit status

// }

// rules when defining a pointer

void main(){
    int i;
    int *p; // pointer
    //the same  if you condense them as this
    //int i , *p;  // i is an int , p is a pointer point to int
    // or 
    //int *p,i;  //   -------------------------
    // or 
    //int* p,i;  // valid p point to int ,i point to int even if astrikes at int we take first variable define it as pointer
    // size of function -> it's about the type of the expression
    printf("%zu \n",sizeof(int) ) ; // it prints size of int
    printf("%zu \n",sizeof p )   ; // it prints type of int* as p is address as we define above: you can define address as int* p 
    printf("%zu \n",sizeof(*p) ) ; // it prints type of *p which indicate to int .
        // output
        // 4  type of int
        // 8  type of int*
        // 4  type of int 
        //4 ,8 -> number of bytes in memory 



}