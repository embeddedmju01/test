#include <stdio.h>

void main(void)
{

	int i;
	for(i=0;i<255;i++)
	{
		i= i+i;
		printf("%d",i);
		
	}
	
	for(i=0;i<5;i++);
	{
		printf("최종 결과물은 %d입니다.\r\n",i);
	}
	printf("Hello my World");
	
	return 0;
	
}
