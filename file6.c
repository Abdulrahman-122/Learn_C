// functions pause(chapter3)
#include <stdio.h>

int plus_one(int n){
    return n+1;

}

// int main(void){
//     int i=4,j;
//     j=plus_one(i);
//     printf("i +1 = %d \n",j);
// }
//we made main here int because we want to return an integer value to the operating system when the program ends.
//howevr, we can also make main void if we don't want to return any value. In that case, we will not use return statement in main function.
//look at this example:
// void hello(void){
//     printf("Hello world\n");
// }
// void main(void){
    
//     hello();
// }
//Passing by value
// any function has its own copy of the variable. So, if we change the value of the variable inside the function, it will not affect the original variable outside the function. This is called passing by value. In C, all function arguments are passed by value.
// so the outside variable will not be affected by the changes made to the inside variable. Look at this example:

// int increment(int n){
//     n++;
//     return n;
// }   

// int main(void){
//     int i=4;
//     increment(i);
//     printf("i=%d \n",i);
//     // as you see it still 4 no change as the function work on it's own copy of the variable. So, the outside variable will not be affected by the changes made to the inside variable.

//     printf("increment(i)=%d \n", increment(i)); // let's see now everything is clear it will output 5 but will not effect original varaiable but it's working on copy of it.


// }
//prototype -> is you put a line at the top of the file to tell the compiler that this function is going to be defined  at the bottom of the file.
// int increment(int n); // this is a prototype of the function increment. It tells the compiler that there is a function called increment that takes an integer argument and returns an integer value. So, we can use this function in main before it's definition.

// int decrement(int n);

// int main(void){
//     int j=4;
//     int i=decrement(j);
//     printf("j=%d and i=%d \n",j,i);
    
// }
// int decrement(int n){
//     n--;
//     return n;
// }
// as we type above you can devine your function before main at once then call it at main in easy way


// you can use void when you have an empty paramater list.

void hello(void){
    printf("Hello world\n");
}
void main(void){
    hello();
}