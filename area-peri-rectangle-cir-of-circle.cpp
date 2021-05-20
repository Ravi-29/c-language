#include<stdio.h>
int main()
{
	int l,b,r,area,cir,peri;
	printf("enter the value of l,b,r");
	scanf("%d%d%d",&l,&r,&b);
	area=l*b;
	peri=2*(l+b);
	cir=2*r*22/7;
	printf("%d\n%d\n%d\n",&area,&peri,&cir);
}
