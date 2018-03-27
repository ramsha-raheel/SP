#include<stdlib.h>
#include<stdio.h>
int main()
{
	int i;
	int size=10;
	int *arr = (int*) malloc (sizeof(int) * size);
	if(arr==NULL)
		perror("malloc failed \n");
	for ( i=0;i<size;i++)
		arr[i]=size-i;
	for ( i=0;i<size;i++)
	{	
		printf("array is: %d",arr[i]);
		printf("\n");
	}
	int newsize=20;
	int *nptr = (int*) realloc (arr, sizeof(int)*newsize);
	if(nptr==NULL)
		printf("realloc failed \n");
	else
		arr=nptr;
	int j=0;
	for (i=size;i<newsize;i++)
		arr[i]=j++;
	for (i=size;i<newsize;i++)
	{
		printf("%d",arr[i]);
		printf("\n");
	}
		free(arr);
	return 0;
}


