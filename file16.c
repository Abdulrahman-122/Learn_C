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

// #include <limits.h>



// int main(void)
// {
//     printf("int: %zu bytes\n", sizeof(int));
//     printf("INT_MIN = %d\n", INT_MIN);  //mini valu for int on the system
//     printf("INT_MAX = %d\n", INT_MAX); //max value for int on the system
// }
//output
//int: 4 bytes
//INT_MIN = -2147483648
//INT_MAX = 2147483647

// #include <stdio.h>
//
// int main(void)
// {
//     printf("char:       %zu bytes\n", sizeof(char));
//     printf("short:      %zu bytes\n", sizeof(short));
//     printf("int:        %zu bytes\n", sizeof(int));
//     printf("long:       %zu bytes\n", sizeof(long));
//     printf("long long:  %zu bytes\n", sizeof(long long));
//
//     return 0;
// }
// you will notice that
// long is the same as long long however this depend on the system you are on not the C itself which announce that they heve different minimum ranges.
//in order to know the limits of many data types in C 
// #include <stdio.h>
// #include <limits.h>
// int main(void)
// {
//     printf("CHAR_MIN  = %d\n", CHAR_MIN);
//     printf("CHAR_MAX  = %d\n", CHAR_MAX);
//
//     printf("SHRT_MIN  = %d\n", SHRT_MIN);
//     printf("SHRT_MAX  = %d\n", SHRT_MAX);
//
//     printf("INT_MIN   = %d\n", INT_MIN);
//     printf("INT_MAX   = %d\n", INT_MAX);
//
//     printf("LONG_MIN  = %ld\n", LONG_MIN);
//     printf("LONG_MAX  = %ld\n", LONG_MAX);
//
//     printf("Long LONG_MIN = %lld\n", LLONG_MIN);
//     printf("Long LONG_MAX = %lld\n", LLONG_MAX);
//
//     printf("UINT_MAX  = %u\n", UINT_MAX);
//     printf("ULONG_MAX = %lu\n", ULONG_MAX);
//
//     return 0;
// }
//
//-------------------------------------------

// let's now the difference between characters whether they are signed or whatever + their ranges
// #include <stdio.h>
// #include <limits.h>
//
// int main(void)
// {
//     if (CHAR_MIN < 0)
//         printf("char is signed\n");
//     else
//         printf("char is unsigned\n");
//
//     printf("CHAR_MIN = %d\n", CHAR_MIN);
//     printf("CHAR_MAX = %d\n", CHAR_MAX);
//
//     return 0;
// }

//--------------------------

// let's see the difference between float,double,long double
// float -> is less precision for floating point
// double -> is more precision for floating point
// long double -> is more precision
//
// #include <stdio.h>
//
// int main(void)
// {
//     printf("float:       %zu bytes\n", sizeof(float));
//     printf("double:      %zu bytes\n", sizeof(double));
//     printf("long double: %zu bytes\n", sizeof(long double));
//
//     return 0;
// }

// #include <stdio.h>
// #include <float.h>
//
// int main(void)
// {
//     printf("FLT_DIG(float digits)  = %d\n", FLT_DIG);
//     printf("DBL_DIG(double )  = %d\n", DBL_DIG);
//     printf("LDBL_DIG(long double) = %d\n", LDBL_DIG);
//
//     printf("FLT_RADIX = %d\n", FLT_RADIX); // this will show us : the base for any exponant is 2 not 10 (by using this macros: FLT_REDIX
//     return 0;
// }
//

// #include <stdio.h>
// #include <float.h>   // to determine floats,double,long floats...
//
// int main(void)
// {
// 	float f=100.928999231234557;  //the output here is not accurate 
// 	double d=299.123458910111225; // the output here is good and near to the actual number byt with small changes in 3 digits.
// 	printf("%.15f\n",f);
// 	printf("%.15f\n",d);
// 	//in C -> printing more digits doesn't means the number is accurate .
//
// }

//as we mentioned above FLT_DIG will help you to determine the range of a float on your system so that you can't exceeds that so that it will be easy for you to store the specific data in it
//ex
#include <stdio.h>
#include <float.h>

// int main(void)
// {
// 	float f=4.123456f;
// 	float g=14.21314151617f;  //now it have more than it's limits
// 	printf("%.5f\n",f);
// 	printf("%.11f\n",g);  //it start adding different digits here 
// 	f+=g  ;
// 	printf("%.11f\n",f);  //also it contain some different digits.
//
// }

int main(void)
{
	int a=0x1A2BC;  //this is a hexadecimal number
	printf("%x\n",a);
	int b=012; // this is an Octal number
	printf("%o\n",b);
	int c=0b101010;  // this is a binary number
	printf("%d\n",c); //this will convert from binary to decimal
	printf("%b\n",c);  // this will print the binary
	//these are constant types
	int y=1234;
	long int u=1234L;
	long long int o=1234LL;
	unsigned int q=1234U;
	unsigned long int e=1234UL;
	unsigned long long int d=1234ULL;
	//floating point constant
	float z=3.14f;
	double k=3.14;
	long double m=3.14L;

	//how to write scientific notation as s*b^^e (s->signtific,b->base,e->exponent)
	printf("%e\n",123456.0);
	printf("%e\n",1234.12345);
	double n=123.345e+3;  //you can apply : L or F as a suffex to these notations to indicate it's a Float
 	float w=123.23e+4F; // float nums
	printf("%d",n);
	printf("%d",k);
	//you can even use hexadecimal with floating points
	//we called : Hexadecimal floating point constants
	double x=0xa.1p3 ;   //p3 =2^3
	printf("%a\n",x);  // use %a to print hexa
	printf("%f\n",x) ;  // it's float value after conv from hex-> decimal
			    // output;
			    // 10248757043690x1.42p+6
			    // 80.500000
			    // note: these outputs depends on your device your device may be stronger than me so that it can handle many values than mine ...


}

// the end
//
