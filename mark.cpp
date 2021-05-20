#include<stdio.h>
int main()
{
	int m1,m2,m3,m4,m5,per,agree;
	printf("enter the value in 5 sub");
	scanf("%d%d%d%d%d",&m1,&m2,&m3,&m4,&m5);
	agree=m1+m2+m3+m4+m5;
	per=(m1+m2+m3+m4+m5)/5;
	printf("%d\n%d",per,agree);
}
