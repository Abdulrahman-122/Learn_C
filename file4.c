#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(void){
    int i =0;
    // //this is how while works.
    // while(i<10){
    //     printf("i is %d \n",i);
    //     i++; 

    // }
    // printf("All done\n");
    //this is how do while works.
    do{
        printf("i is %d \n",i);
        i++;
    }while(i>10);
    //this code will execute at least once as the condition is checked after the execution of the code block.
    printf("All done\n");
    // 
    srand(time(NULL));
    int r;
    do{
        r=rand()%100;
        printf("r is %d \n",r);
    }while(r!=40);
    printf("All done\n");
    // did you notice that the output of this function generate the same numbers every time.
    // rand  ->called pseudorandom generator. it is not truly random as it will generate the same sequence of numbers every time you run the program.
    // but srand here -> it will generate a different sequence of numbers every time you run the program as it is seeded with the current time.
    // this is good for testing but not good for security as it is predictable.


    // -------------------------
    // this is how for loop works.
    for (int i=0;i<10;i++){
        printf("i is %d \n",i);

    }
    printf("All done at for loop\n");
    // for (initialization;condition;increment/decrement){
    //     // code block to be executed
    // }
    // now you can add multi variable in the initialization and increment/decrement part of the for loop.
    for (int i=0,j=0;i<10;i++,j++){
        printf("i is %d and j is %d \n",i,j);  
    }
    printf("All done at for loop with multi variable\n");
    //you can make for loop forever
    // for(;;){
    //     printf("this loop will run foreever\n");
    //     printf("to stop it run ctrl+c \n");
    // }

}   