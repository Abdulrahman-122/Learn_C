//Strings
#include <stdio.h>
#include <string.h>

int my_strlen(char *s){
	int count=0;
	while (s[count]!='\0'){
		count++;
}
	return count;
}





int main (void){
	// we can build strings using pointers and that pointers their  datatype  are char
	char *s="hey man";
	printf("%s\n",s);
	char a[]="Hey,how it's going"; // you can make  it a[n] also
	//try to output that array.
	for(int i=0 ; i<20 ; i++ ){
		printf("%c",a[i]);

	}
	printf("\n");

	printf("===========================\n");
	//array and pointers  are the same
	char *f="welcome";
	for (int j=0;j<10;j++){
		printf("%c",f[j]) ;
		
	}
	printf("\n");
	printf("===========================\n");

	// don't try to change the string the you  made a pointer points to .
//	char *b = "hellow world";
//	b[0]='z';
//	printf("%s\n",*b);
	//instead use array to change or mutate a string
	char t[]="Hello,world";
	t[0]='z';
	printf("%s\n",t);
	//how to find the length of a string
	//usee function ->strlen(s) refer to it as %zu
	//but first you need <string.h>
	
	char  *y="Hey,how it's going";
	printf("The length of that string is %zu bytes\n",strlen(y));
	// back in the days -> they were carry about how to store strings in the memory.
	// there was two  opproaches
	// store string as number of bytes + with a number indicate the lenght of that string
	// or storing bytes that represent length of the string with a terminator (by mark the end of the string with that terminator)
	// behind the scenes  C put \0 as terminator for the strings when you write : hello world -> behind the screen => hello world \0
	// now let's build the strlen() using this concept of terminator to define the lenght of the string.
		char  *z="Hey,how it's going";
	printf("The length of that string is %zu bytes using my function that i created\n",my_strlen(z));
	
	// how to copy a string:
	// 
	char str[]="Welcome from my machine\n";
	char *p;
	p=str;
	printf("%s",p);
	//now let's change that string using the pointer that we made that points to that string
	p[0]='z';
	printf("%s",p);
	//however you can use strcpy(dest,src) to copy your string.
	char i[]="To Allah I love you";
	char co[100];
	strcpy(co,i);
	printf("%s \n",co);
	// as you see with strcpy you need to pass dest as arr with more rooms(you must write size of it)
	
}

