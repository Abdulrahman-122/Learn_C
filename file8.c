//Arrays (chapter6)
//

#include <stdio.h>
//how to build an array
//int main(void){
//	int i;
//	float arr[7];  // this is to declare an array
//	arr[0]=1;
//	arr[1]=2;
//	arr[2]=3;
//	arr[3]=4;
//	arr[4]=6;
//	arr[5]=8;
//	arr[6]=9;
//	for (int i =0 ; i<7;i++){
//		printf("%f \n",arr[i]);

//	}
	// now how to find the length of an array in c
	// no built in function in it but we can built it manually
	// use this equation ; sizeof(arr)/sizeof(element)->length of that array
	//


//}
//int main(void){
	// now how to find the length of an array in c
	// no built in function in it but we can built it manually
	// use this equation ; sizeof(arr)/sizeof(element)->length of that array
	//

//	int x[12];
//	printf("size of everyelement = %zu \n ",sizeof(int));
//	printf("size of array= %zu \n",sizeof x);
//	printf("now length of that  array=%zu \n ",sizeof x /sizeof(int));  // is 12 ints 
									    // if array contain chars -> in this case the length=number of elements as each char's length=1 so we can't apply that  rule.
									    // note this  way of  find the length of the array only work at main fun if you passed the array to another  function it can't work as when you pass an array to  a func => you just pass a pointer to the first element into that  array.
									    //
									   // printf("to  find bytes you need   for any array");
									    //printf(" bytes=%zu \n  ",sizeof ( int [84]));
									    //printf(" bytes=%zu \n  ",sizeof ( double [84]));
//}

//int main (void) {
	//array initializar
//	int i ;
//	int a[5]={1,2,3,4,5};
//	for (int i =0 ; i<5;i++){
//		printf("%d \n",a[i]);

//	}
	// if you didn't  specify the rest of the array with your numbers -> c will put 0s instead
//	printf("");
//	printf("");
//	int b[8]={1,2,3,4,5};
//	for (int i =0 ; i<8;i++){
//	   printf("%d \n",b[i]);

//	}
	// you can put the first number element  0 + rest of them will be 0  
//	int c[100]={0};
	//for (int i =0 ; i<100;i++){
	 //  printf("%d \n",c[i]);

	//}
	// you can specify the index of element  inside array in order to put it's element by using  [index]=value
//	int d[10]={1,2,4,[5]=50,[4]=12};
//	for (int i =0 ; i<10;i++){
//	   printf("%d \n",d[i]);

//	}
//	printf("====================================");	
	// in case  you want out of  bound indices -> c will give you random numbers.
//	int x;
//	int  e[5]={1,2,4,6,0};
//	for ( x=0;x<100;x++){
//		printf("%d\n",e[x]);
//	}




//}


// let's make multi dimensional arrays
// a[rows][cols] first index -> number of rows,second index=>number of columns

void   times2(int *a,int len){
	for (int i=0;i<len;i++){
		printf("%d\n",a[i]*2);
	}
}


void   times3(int *a,int len){
	for (int i=0;i<len;i++){
		printf("%d\n",a[i]*3);
	}
}

void   times4(int *a,int len){
	for (int i=0;i<len;i++){
		printf("%d\n",a[i]*4);

	}
}
void double_a(int *a,int len){
	for(int i=0;i<len;i++){
		a[i]*=2;
	}
}
void arr2D_dim(int c[][3]){   //you can do c[2][3] also but the first index isn't important for c .
	for(int row=0;row<2;row++){
		for(int col=0;col<3;col++){
			printf("%d\n",c[row][col]);}
	}
}

int main (void){
	int a[2][5]={
		{0,1,2,3,4},
		{5,6,7,8,9}
	};
	for  (int row=0;row<2;row++){
		for(int col=0;col<5;col++){
			printf("(%d,%d)=%d\n",row,col,a[row][col]);
		}
	}
	printf("===========================\n");
	int b[1][4]={ [0][0]=22,[0][1]=23};
	for  (int row=0;row<1;row++){
		for(int col=0;col<5;col++){
			printf("(%d,%d)=%d\n",row,col,b[row][col]);
		}}
	printf("==========================\n");
	// how to make a pointer points  to the first element of the array
	int m[5]={1,2,4,5,6};
	int  *p;
	p=m;  // note that  is  different than  making   the  next  line they differ in address but they refer to the same value 
	//p=&m[0];
	printf("%d\n",*p);
	printf("%d\n",p);
	printf("%d\n",&m[0]);

	// let's pass an array to a function 
	printf("======================\n");
	int y[5]={1,2,3,4,5};
	times2(y,5);
	times3(y,5);
	times4(y,5);
	printf("======================\n");
	//let's see whether the double fun  will double the original array or not y as we pass to it  the a pointer  to this array(which means  the loc of array in memory)
	double_a(y,5);
	for (int i=0;i<5;i++){

		printf("%d\n",y[i]);
	}
	// okay that's nice that means output will be doubled as we accessed the exact location of the array.	
	printf("======================\n");
	//now let's pass a 2D array to a function
	int c[2][3]={
		{1,2,3},
		{5,6,7}
	};
	arr2D_dim(c);
	//  note you passed c not c[2][3]  as this will give you an error.
	
}
//note;
// array and pointers are the same thing
