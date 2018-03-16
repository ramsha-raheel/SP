#include<stdio.h>
int isequal(int x ,int y)
{
	if (x==y)
{
		printf("new after changing");
	   printf("they are equal\n ");
	   return 1;
}
	else
{		printf("new after changing");
	  printf("they are not equal\n");
	   return -1;
}
}

void swap (int x,int y)
{
	printf("new after changing");
	printf("\n original x is %d and y is %d " , x,y);
	x=x+y;
	y=x-y;
	x=x-y;
	printf("\n after swapping x is %d and y is %d  " , x,y);
	
}
