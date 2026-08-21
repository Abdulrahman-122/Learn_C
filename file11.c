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
// int main(void){
// 	FILE *fp;
// 	unsigned char bytes[6]={5,37,0,88,255,12};  // we need to write these bytes values inside binary files and then use another function to read them.
// 	fp=fopen("output.bin","wb")  ;   // wb -> write binary to this file (output.bin
// 	fwrite(bytes,sizeof(char),6,fp);
// 	fclose(fp);
// }
//

int main(void){
 	FILE *fp;
 	unsigned char c;
 	fp=fopen("output.bin","rb"); // rb -> read binary
 	while (fread(&c,sizeof(char),1,fp)>0)  //fread -> will convert those binaries to text data that can be easy read .
 					       // it takes -> address of character+ size  of char + 1 
 		printf("%d\n",c);  
 	fclose(fp);
 }
// how different computers store data differently in their memory.
// If you try to save data on one computer and open it on another, it might look like complete gibberish.
// Here is a simple breakdown of the two main problems the text explains, and the one big solution it offers.
// ------------------------------
// ## Problem 1: The "Struct Padding" Problem
// Imagine you are packing boxes to move to a new house. A struct in C is like a big box where you put smaller items (like variables) inside.
//
// * The Issue: Different computer systems like to align items neatly in memory. To do this, the computer might automatically add extra "empty space" (called padding) between your items inside the box.
// * Why it breaks: One computer might add 2 bytes of empty space, but a different computer might add 4 bytes, or none at all. If you just save the whole box to a file (fwrite), another computer won't know where the actual items are and where the empty space is.
//
// ------------------------------
// ## Problem 2: The "Numbers" Problem (Endianness)
// Let's say you have a 2-byte number: 0x1234.
//
// * The 12 part is the big end (most significant).
// * The 34 part is the small end (least significant).
//
// When you write this number down on paper, you write 12 then 34. But computers disagree on how to store this in their brain:
//
// * Big-Endian computers store the big part first: 12 34.
// * Little-Endian computers store the small part first: 34 12.
//
// If you use fwrite to save 0x1234 on a Little-Endian computer, it saves as 34 12. If you send that file to a Big-Endian computer, it will read it backwards and think the number is 0x4321!
// ------------------------------
// ## The Solution: Serialization 📦
// The text says you should never just dump raw memory into a file if you want other computers to read it. Instead, you must serialize it.
// Serialization just means: "Convert your data into a strict, well-known format that you control, before saving it."
// Instead of letting the computer save data its own way, you write code that says:
//
//    1. "Always write the big part of the number first."
//    2. "Never write the empty padding spaces."
//
// The text mentions tools like Google's Protocol Buffers. These are ready-made tools that do this hard work for you. They make sure that a file saved by a C program on your laptop can be perfectly read by a Python program on a phone or a Java program on a giant server.



