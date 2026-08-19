// #include <stdio.h>
// int main(void)
// {
// 	FILE *fp;
// 	fp=fopen("hello.txt","r");  // open a file and reading it
// 	int c=fgetc(fp);
// 	printf("%c\n",c);  //reading the first character.
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	c=fgetc(fp);
// 	printf("%c\n",c);
// 	fclose(fp);      //close the file when done
// }
//now let's read the whole character of the file one by one untill reaching to EOF
 
// #include <stdio.h>
//
// int main(void){
// 	FILE *fp;
// 	int c;
// 	fp=fopen("hello.txt","r");
// 	while((c=fgetc(fp)) != EOF) {
// 		printf("%c",c);
// 	}
// 	fclose(fp);
// }

//let's read the entire file line by line by using  -> fgets
// but it needs a pointer that points to a character buffer in order to read these data.

// #include <stdio.h>
//
// int main(void){
// 	FILE *fp;
// 	char s[1024];  // 2^10 bytes 
// 	int linecount=0;
// 	fp=fopen("quote.txt","r");
// 	while((fgets(s,sizeof(s),fp)) != NULL)
// {
// 	    printf("%d,%s",++linecount,s);
// }
//
// 	fclose(fp);
// 	}

//let's go and do some formatting on a file called whales.txt 
// using fscanf()  

// #include <stdio.h>
//
// int main(void){
// 	FILE *fp;
// 	char name[1024];
// 	float length;
// 	int mass;
// 	fp=fopen("whales.txt","r");
// 	while(fscanf(fp,"%s %f %d",name,&length,&mass) !=EOF) 
// 		// note -> he used  mapping here in order to pass name as %s inside double quotes...  
// 		printf("%s whale -> %d tonnes -> %.1f meters\n",name,mass,length);
//
// 	fclose(fp);
// }
// #include <stdio.h>
//
// int main(void) {
// 	FILE *fp;
// 	int x=32;
// 	fp=fopen("outputs.txt","w");  // if you want to write these things to stdout (console) it will write it rather than the file
// 	//fp=stdout;  //this line will print the result to the screen instead of a file
// 	fputc('B',fp);
// 	fputc('\n',fp);
// 	fprintf(fp,"x=%d\n",x);
// 	fputs("Hello man , How it's going ??\n",fp);
// 	fclose(fp);
// }
// w -> open the file and truncate it to be 0 bytes

//note; 
// if the file you can write in inside text editor -> this file is a text file else it will be a binary file.
// let's walkthrough reading and write binary files using -> fread,fwrite functions 
//



#include <stdio.h>
int main(void){
	FILE *fp;
	.... to be completed 

