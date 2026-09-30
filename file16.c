//Way More Types????

//pause: p93

#include <stdio.h>

//  difference between signed,unsigned integers
//  signed -> include postive,negative number
//  unsigned -> include just the positive + largest number here is twice the largest  number on signed numbers
//  you can use char to represent a number 
//  also if you used it to represent a character and you did math stuff on it ==> it will be converted to int using ASCII standard.
//  also: char can be signed or unsigned types as char is almost 1 byte(small int )
// int main(void)
// {	
// 	signed int a= -10;  // this can be any positive,negative
//         unsigned int b= -10; //this can't be negative value
//         printf("Signed variable (with %%d): %d\n", a);  // Prints: -10
//         printf("Unsigned variable (with %%d): %d\n", b); // Prints: -10 (Misleading!)
//
//     // The correct way to print an unsigned integer:
//         printf("Unsigned variable (with %%u): %u\n", b); 
//
// 	printf("===================================== \n");
// 	//now let's see how char can do math operations
// 	char z=10,y=15;
//
//
// 	printf("The summation of a,b is :%d\n", z + y );
// 	//let's test how ASCII works
// 	char t='a';
//
// 	printf("The summation of a,b,t is : %d\n",z+y+t); //ASCII of a=97+25=122(output);
//
// }
//let's check some types+see the limit of each
//let's define our macros in order to see the limits

#include <limits.h>



int main(void)
{
    printf("int: %zu bytes\n", sizeof(int));
    printf("INT_MIN = %d\n", INT_MIN);  //mini valu for int on the system
    printf("INT_MAX = %d\n", INT_MAX); //max value for int on the system
}
//output
//int: 4 bytes
//INT_MIN = -2147483648
//INT_MAX = 2147483647
//pause: Converting to Decimal and Back(p99)






	



