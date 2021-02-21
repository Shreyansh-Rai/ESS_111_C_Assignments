#include<stdio.h>

int main()
{
	int y;
	printf("Enter yr\n");
	scanf("%d",&y);
	if(y%4==0)
	{
		if(y%100!=0 || y%400==0)
			printf("Leap year\n");
		else 
			printf("Not leap year\n");
	}
	else 
		printf("Not Leap year\n");
}