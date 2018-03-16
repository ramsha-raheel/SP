#include<stdio.h>
#include "mymath.h"
int main()
{
	int x,y;
	printf("Enter num1 : ");
	scanf("%d",&x);
	printf("Enter num2 : ");
	scanf("%d",&y);
        int equal = isequal(x,y);
	 swap(x,y);
	//printf ("equal of %d and %d = %d \n", x,y,isequal);
	//printf ("Sub of %d and %d = %d ", x,y,swap);
	printf ("\n");
	return 0;
}
