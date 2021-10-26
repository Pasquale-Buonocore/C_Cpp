#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    /* Pointer to load data*/
    FILE *loader;
    int r;

    /* Define a structure as a pointer */
    struct holder{
        char name[32];
        int age;
    };

    struct holder *Toload;

    /* Allocating memory fot the structure */
    Toload= (struct holder*)malloc(sizeof(struct holder));
    if(Toload == NULL){
        printf("The pointer is NULL,abort");
        return 1;
    }
    
    /* Load the structure from the saved.dat file*/

    loader = fopen("saved.dat","r");
    if(loader == NULL){
        printf("Error initializing loader \n");
        return 2;
    };

    /*Feel the buffer*/
    r = fread(Toload,sizeof(struct holder),1,loader);
    fclose(loader);

    /* Check if the fgets and scanf operation worked correctly*/
    printf("The name is: %s \n",Toload->name);
    printf("The age is : %d \n",Toload->age);

    printf("Doc read successfully \n");

    return 0;
}