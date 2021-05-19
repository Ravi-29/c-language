#include<stdio.h>
int main()
{
	float diskm;
	float dism;
	float disfeet;
	float disinch;
	float discm;
	printf("enter the dis");
	scanf("%f",&diskm);
	dism=1000*diskm;
	disfeet=32800*diskm;
	disinch=8765*diskm;
	discm=100000*diskm;
	printf("%f\n%f\n%f\n%f\n",dism,disfeet,disinch,discm);
}
