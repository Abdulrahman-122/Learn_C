#include <stdio.h>

int main(void){
    int x=10,y=12;
    if(x==10 && y>10){
        printf("true\n");   
    }
    if (!(x==20)){
        printf("true\n");  
    }
    if (x >= 10)
    printf("x is not less than 10\n");
    int a =888;
    // zu is the format specifier for size_t type.
    printf("%zu \n",sizeof(a));
    printf("%zu \n",sizeof(2+8));
    printf("%zu \n",sizeof(3.14));
    //zd is the format of size_t but in negative form.
    printf("%zd \n",sizeof(a)); 
    // this give us the size of the type of these expressions => so that meanss they are both int as the 1st is int=4,2nd is int =4
    //size off compile time expression not run time expression.
    if (a>100) printf("a is greater");
    if (a>100){
        printf("a is greater than 100 \n");
        printf("a is %d \n",a);
    }
    if (x == 10)
        printf("This happens if x is 10\n");
    //     printf("This happens ALWAYS\n"); // Surprise!! Unconditional!
    // int i = 10;
    // if (i > 10) {
    // printf("Yes, i is greater than 10.\n");
    // printf("And this will also print if i is greater than 10.\n");
    // }
    // if (i <= 10) printf("i is less than or equal to 10.\n");
    int i = 10;
    if (i > 10) {
    printf("Yes, i is greater than 10.\n");
    printf("And this will also print if i is greater than 10.\n");
    }
    if (i <= 10) printf("i is less than or equal to 10.\n");
    //this is bad example as you didn't put {}
    if (x == 10)
        printf("This happens if x is 10\n");
        printf("This happens ALWAYS\n"); // Surprise!! Unconditional!
    int u=100;
    if (u<100){
        printf("u is lesss than 100\n");
    }
    else if (u>100){
        printf("u is greater than 100\n");
    }
    else if (u>200){
        printf("u is greater than 200 \n");
    }
    
    else{
        printf("u is greater than or equal to 100\n");
    }
}