#include <stdio.h>

int main()
{
	char *fruit[] = {
		"Apples", "Bananas", "Grapes", "Strawberries"
	};
	
	char **point;
	point = fruit;

	for( int x=0; x<4; x++)
		printf("Address: %p \n", (*point)+x);

	return(0);
}
