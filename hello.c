#include <stdio.h>
#include <stdbool.h>
// this is  the preprocessor+  
// stdio.h => header file  that we need to extract printf
// int main(void)
// {
// 	printf("Hello, World!\n");


// }
// after you run the code gcc  -o hello hello.c
// your code go to preprocessor -> then  output  goes to compiler -> then output executable file that you need to run
// ./hello

 
int main(void){
    int i=2;
    float f=3.14;
    char *s="Hello,World!";
	bool b=true;
	bool c=false;
	int x=2;
	int y=0;
	y += x > 10? 17: 37;
	// this called ternary operator.
    printf("%s  i=%d and f=%f  and b=%b \n",s,i,f,b);
    printf("%s  i=%d and f=%f  and b=%s \n",s,i,f,b?"true":"false");
    printf("%s  i=%d and f=%f  and c=%s \n",s,i,f,c?"true":"false");
	printf(x>10?"x is greater than 10":"x is less than or equal to 10 \n");
	printf("x=%d \n",x);
	printf("y=%d \n",y);
	printf("x= %d and x= %s \n",x,x%2==0?"is even":"is odd");
}






