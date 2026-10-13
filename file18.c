//Qualifiers and Specifiers
//this allows you to declare constant values
//once you made a constant -> you can't modify it

// #include <stdio.h>
// int main(void)
// {
// 	const int x = 10;
// 	printf(" x = %d \n",x);
// 	// x = 20 ;   //error as it read only
// 	printf("x still = %d \n" , x);
//
//
// }
//const with pointers
//if you made const pointer -> so that you can't modify it but you can modify what it points to
// #include <stdio.h>
//
// int main(void)
// {
// 	int x[]={1,2,3,5};
// 	const int *p=x;  // here we made p points to the values of x not addres
// 	p++; //no problem here as we increment the address of p ;
// 	//*p=30;  //will hit an error as you are now assign new values to  a const pointer .
// 	p++; 
// 	printf("%d\n",*p);
// 	//but if you did the opposite
// 	//you assigned the address to a pointer and you wanted to make  it to another value(possible)
//         int n=10;
// 	int *const c= &n;  //you assigned address so that you will make it const by this way
// 	//c++;   // will hit an error as you made it const
//
// 	*c = 20 ; //no problem as it's not a const
// 	//let's check:
// 	printf("%d\n",*c);  //output: 20 
//
// 	const int y=20;  
// 	int *p=&y;
// 	*p=40;  // error as you assign on the right const int, on the left -> int 
// 	printf("%d\n",y); 
//
	
// }
//some high privileges keywords in C
//restrict
//it is just a "pinky promise" to the compiler's optimizer. If you break that promise (by passing &x to both), the compiler will generate broken code.
#include <stdio.h>

void swap(int *a, int *b) 
{
    int t = *a;
    *a = *b; 
    *b = t;  
    // No return statement needed for void functions
}

int main(void)
{
    int x = 10, y = 20;

    printf("Before: x = %d, y = %d\n", x, y);
    swap(&x, &y); // Successfully swaps x and y
    printf("After standard swap: x = %d, y = %d\n", x, y);

    swap(&x, &x); // Perfectly safe now, though it just swaps x with x
    printf("After self-swap: x = %d\n", x);

    return 0;
}
