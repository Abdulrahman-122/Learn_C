#include <stdio.h>
#include <stdbool.h>

int main(void){
    int i=10;
    int j;
    j=5+ i++;
    printf("i=%d and j=%d  \n",i,j);
    // this will compute 5+ i(old) theen will increment i by 1;
    j=5+ ++i;
    printf("i=%d and j=%d \n",i,j);
    // this will increment i by 1 then compute 5+ i(new);
    for (int k=0;k<10;k++){
        printf("k is %d \n",k);
    }
    int m=2,n=4;
    printf("m=%d and n=%d \n",m,n);
    int x=(1,2,3);
    printf("x is %d \n",x); // it will print the far most number to the right.
    for (int i=0,j=0;i<20;i++,j++ ){
        printf("i=%d and j=%d \n",i,j);
    int a=12;
    if(a>10){
        printf("a is greater than 10 \n");
    }
    }
}