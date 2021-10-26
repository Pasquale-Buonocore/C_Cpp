#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
    /* Which the difference between those two way to define a multiarray ? */

    //char weekend[7][15] = {"Lunedi","Martedi","Mercoledi","Giovedi","Venerdi","Sabato","Domenica"};

    //char *weekend[15] = {"Lunedi","Martedi","Mercoledi","Giovedi","Venerdi","Sabato","Domenica"};

    /* Array di puntatori */
    char **weekend;

    /* Alloco spazio per 7 puntatori */
    weekend = (char **)malloc(sizeof(char*) * 7);

    /* Per ogni puntatore dell'array, alleco altra memoria*/
    for (int x = 0; x < 7; x++){
        weekend[x] = (char *)malloc(sizeof(char) * 15);
    };

    /*Fill in the memory */
    strcpy(weekend[0],"Lunedi");
    strcpy(weekend[1],"Martedi");
    strcpy(weekend[2],"Mercoledi");
    strcpy(weekend[3],"Giovedi");
    strcpy(weekend[4],"Venerdi");
    strcpy(weekend[5],"Sabato");
    strcpy(weekend[6],"Domenica");

    /* Print */
    for(int x = 0; x < 7; x++){
        printf("%s \n",*(weekend+x));
    };
    
    
    return 0;
}