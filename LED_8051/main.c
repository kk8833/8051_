#include<reg51.h>

sbit led1= P1^0;
sbit led2= P1^1;

void delay()
{
	int i ,j;
	for(i=0; i<=250; i++)
	{
		for(j=0; j<=250; j++)
		{
		}
	}
}

void main()
{
	P1=0x00;
	while(1)
	{
		led1=1;
		led2=0;
		delay();
		led1=0;
		led2=1;
		delay();
	}
}