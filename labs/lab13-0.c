#include <stdio.h>
#include <stdlib.h>
int main(){
int *array;
int elements;
int i;
scanf("%d", &elements);
	array=malloc(elements * sizeof(int));
for (i=0; i<elements; i++){
	printf(">%d,", array[i]);
}
printf("\n");
return 0;
}
