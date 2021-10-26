#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main(){
    /* Pointer to save data*/
    FILE *doc;

    /* Define a structure as a pointer */
    struct holder{
        char name[32];
        int age;
    };

    struct holder *ToStruct;

    /* Allocating memory fot the structure */
    ToStruct = (struct holder*)malloc(sizeof(struct holder));
    if(ToStruct == NULL){
        printf("The pointer is NULL,abort");
        return 1;
    }
    /* Let the user impress name and age */
    printf("Insert the name:");
    fgets(ToStruct->name,32,stdin);
    printf("Insert your age: ");
    scanf("%d",&ToStruct->age);

    /* Check if the fgets and scanf operation worked correctly*/
    printf("The name is: %s \n",ToStruct->name);
    printf("The age is : %d \n",ToStruct->age);

    /* Save the structure in the saved.dat file*/

    doc = fopen("saved.dat","w");
    if(doc == NULL){
        printf("Error initializing document \n");
        return 2;
    };

    /* Save the structure */
    fwrite(ToStruct,sizeof(struct holder),1,doc);
    fclose(doc);
    printf("Doc saved successfully \n");

    return 0;
}