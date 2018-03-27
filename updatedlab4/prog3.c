#include<stdlib.h>
#include<stdio.h>
#include<setjmp.h>
int counter=0;
static jmp_buf envbuf;
void haveFunc();
int main()
{
	int i=0;
	for(i;i<5;i++)
	  {
		printf("this is main \n");
		if (counter==0 && (i = setjmp(envbuf))==0)
		    {
			firstSetJump();
                    }
	haveFunc();
           }
	return 0;
}
	void haveFunc()
	  {
		printf("now havefunc() \n");
		printf("counter value : %d" , counter);
		printf("\n");
		counter++;
	  }

	void firstSetJump()
	  {
		printf("now havefunc() \n");
		printf("counter value : %d" , counter);
		printf("\n");
		counter++;
	  }
			
					


