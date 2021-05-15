#include<stdio.h>
int main()
{
float pi;
	float rate;
	int year;
	float si;
	rate=2.5;
	printf("enter the value of p and year");
	scanf("%f%d",&pi,&year);
	//printf("%f\n%d",pi,year);
	si=pi*rate*year/100;
	printf("%f",si);
}
