#include <stdio.h>

int main(void){
    //now let's talk about switch statement.
    int goat_number=10;
    switch(goat_number){
        case 1:
            printf("goat number is 1 \n");
            break;
        case 2:
            printf("goat number is 2 \n");
            break;
        case 3:
            printf("goat number is 3 \n");
            break;
        case 4:
            printf("goat number is 4 \n");
            break;
        case 10:
            printf("goat number is 10 \n");
            break;
        default:
            printf("goat number is not 1,2,3,4 or 10 \n");
            break;        
    }
    char c='a';
    switch(c){
        case 'a':
            printf("c is a \n");
            printf("fall through \n");
            
        case 'b':        
            printf("c is b \n");
            break;
        case 'i':
            printf("c is i \n");
            break;        
        default:
            printf("c is not a, b, or i \n");
            break;
    }
    // as you see switch go to the match case for  the input directly if there is no break it will get to the next case untill if find break as we did here (start at case a then go to the next case b then break)

}