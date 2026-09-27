//Scope
//
// the scope means -> the reference to a variable inside a function or whatever
// once you on this scope then this variable is active
// else it's not active .
// ex:
#include <stdio.h>

// int main(void)
//
// {
// 	int a =12 ;    // outer scope can be printed inside any place
// 	if(a==12)
// 	{
// 	   int b= 10;  //inner scope can't be printed outside
// 	   printf("a is %d \nb is %d\n",a,b);  // no problem:
// 	}
// 	//printf("a is %d \nb is %d\n",a,b);  //this is a problem as b inner scope
// }
// also you can print any variable before initialization not like other languages.
// int main(void)
// {
// 	int a =12 ;    // outer scope can be printed inside any place
// 	printf("%d\n",a); // good printing
// 	//printf("%d\n",c); // bad printing as this c not found yet
// 	int c=10; 
// 	printf("a is %d\nc is %d\n",a,c); 
// }

//what if you need to access variable outside the scope but you define the same inside the scope
//the inner scope will take precedence over it however the outer is accessable through the whole file

// int main(void)
// {
// 	int i=10;
// 	if(true)
// 	{
// 		int i=20;
// 		printf("i is %d\n",i);
// 		// the inner scope will take precedence over the outer scope
// 	}
// }

//File scoped -> if you define a variable outside main we called it that variable has file scope so it will be visible to any func that came after it

// #include <stdio.h>
//
// int shared=10; //file scope variable
//
// int func1(void)
// {
// 	shared+=100;       // 100+10 =110
// }
// void func2(void)
// {
// 	printf("%d\n",shared);
//
// }
// int main(void)
// {
// 	func1();    // will make shared=110
// 	func2();   // will print that value
// }

// for-loop scope -> only the variable inside it's scope is accessable for it not outside it
#include <stdio.h>

int main(void)

{

	for (int i=0;i<19;i++)
	{
		printf("%d\n",i);  // will print the is from for
		int i=99;
		printf("%d\n",i);   // will print always 99 as this i is hides from for loop incrementation.
	}
//	printf("%d\n",i); //fail as i isn't in the outer scope so take care
}	
// the output will look like this :
// 0
// 99
// 1
// 99
// 2
// 99
// 3
// 99
// 4
// 99
// 5
// 99
// 6
// 99
// 7
// 99
// 8
// 99
// 9
// 99
// 10
// 99
// 11
// 99
// 12
// 99
// 13
// 99
// 14
// 99
// 15
// 99
// 16
// 99
// 17
// 99
// 18
// 99
//


