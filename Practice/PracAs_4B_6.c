#include<stdio.h>

int main()
{	
	int n;
	int m=21;
	for(int i=0;;i++)
	{
		printf("enter a number in 1,4\n");
		scanf("%d",&n);
		printf("Computer chose: %d\n",5-n);
		printf("Matches left %d\n",m-5);
		m-=5;
		if(m==1)
		{
			printf("There is only one match left and you have been forced to pick it\n computer wins!\n");
			break;
		}
	}

}