//Conversions
//to convert from a number -> string
//#include <stdio.h>
//to convert from numeric value -> string
// int main(void)
// {
// 	char s[10];
// 	float f=3.14159;
// 	snprintf(s,10,"%f",f);  //put 10 character spaces into that string
// 	printf("String value is : %s\n",s);
// }
//to convert from string -> Numeric value
//we have two families of functions that are used to convert from string->Numeric
//atoi -> ASCII to (int,float,long int,long long int)
//strtol -> string to long

// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void)
// {
// 	char *p="3.1456";
// 	float f;
// 	f=atof(p);
// 	printf("The float value is : %f\n",f);
// }

//let's use : strtoi family functions
//strtol ->string to long
//strtoll ->string to long long int 
//strtoul -> string to unsigned long int
//strtoull ->string to unsigned long long int
//strtof -> string to float
//strtod ->string to double
//strtold -> string to long double
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void) 
// {
// 	//char *s="3490"; //this is a string-> convert to unsigned long int
// 	//unsigned long int x=strtoul(s,NULL,10);
// 	//printf("The unsigned long integer is :%lu\n",x);
// 	char *n="101010";
// 	unsigned long int m = strtoul(n,NULL,10);
// 	printf("the unsigned long int of   %s is : %lu (binary->binary)\n",n,m);
// 	unsigned long int z = strtoul(n,NULL,2);
// 	printf("the unsigned long int of in base  %s is : %lu  (binary->decimal)`\n",n,z);
//
// }
//
//
// #include <stdio.h>
// #include <stdlib.h>
//
// int main(void)
// {
// 	char *s="34x90";
// 	char *badchar;
// 	unsigned long int x=strtoul(s,&badchar,10);
// 	printf("%lu\n",x);
// 	printf("Invalid character( isn't valid in base 10(decimal)):%c\n",*badchar);
//
// }

#include <stdio.h>
#include <stdlib.h>

// int main(void)
// {
// 	//char *s="120921"; //will return success  -> will return success the same value.
// 	char *s="1234x3";  // x isn't valid in base 10 
//         // will return : error -> partial=1234l,Invalid=x
// 	char *badchar;
// 	unsigned long int x=strtoul(s,&badchar,10);
// 	if(*badchar=='\0'){
// 		printf("Success(string->unsigned long number conversion)!! %lu \n ",x);
// 	}
// 	else {
// 		printf("Partial convertion: %ul\n",x);
// 		printf("Invalid character: %c\n",*badchar);
//
// 	}
// }
//the difference between atof , strto... -> is that 
		// strto -> is very strict you can't check the error or make handling for it like the same way that we used with strto.......
	
//Char Conversions
//to convert from a character to a number
int main(void)
{
	printf("%d %d\n",4,'4');   //this will generate UTF-8 for the second character:
				   // 4=52
}
//char conversions page 109
