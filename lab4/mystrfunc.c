#include<stdio.h>
#include<string.h>
int palindrome(char *arr,int size)
{
	int i,ret=1;
	for ( i=0;i<size;i++)
	{
	     if((arr[0+i]!=arr[(size-1)-i]))
		{
			ret=-1;
			break;
		}

	   	
	}
	return ret;


		
}
