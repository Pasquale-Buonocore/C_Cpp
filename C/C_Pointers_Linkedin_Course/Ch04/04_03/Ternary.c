#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]){
    /*
    int x;

    do{ 
        printf("Insert a number: ");
        scanf("%d", &x);
        (x < 0) ? printf("The number is negative, insert a positive one") : printf(" ");
    } while(x <= 0);

    printf(" \n %d is an %s number.\n",x,(x % 2) ? "odd" : "even");
    */
    printf("argc is equal to: %d \n",argc);
    for(int x = 0; x < argc; x++){
        printf("The element %d is %s. \n",x+1,*(argv+x));
    }
    return 0;
}