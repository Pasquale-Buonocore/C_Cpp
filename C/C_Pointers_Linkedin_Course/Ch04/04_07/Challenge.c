#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define const 5

void get_input(char **b);

int main(){
    /* Define the array of input */
    char **array;

    /* Allocate memory for array of pointer */
    array = (char**)malloc(sizeof(char*) * const);

    for(int x = 0; x < const; x++){
        printf("Insert name #%d: ",x);
        get_input(&array[x]);
    }

    for(int y = 0; y < const; y++){
        printf("%s \n",array[y]);
    }
    return 0;
}

void get_input(char **b){
    /*It gets in input a pointer to the pointer */
    *b = (char*)malloc(sizeof(char) * 15);
    if( *b==NULL )
	{
		fprintf(stderr,"Unable to allocate buffer\n");
		exit(1);
	}
    
    /* Input name from stdin*/
    fgets(*b,15,stdin);

    /*Ensure that any \n char is removed from the string*/

}