#include<stdio.h>
int main()
{
	int n1,n2,i,gcd_num;
	int count=0;
	printf("enter any two numbers:\n");
	scanf("%d %d",&n1,&n2);
	for(i=1; i<=n1 && i<=n2; ++i)
	{
		count++;
		if(n1%i==0 && n2%i==0)
		gcd_num=i;
		count++;
	}
	count++;
	printf("gcd of two numbers %d and %d is %d\n",n1,n2,gcd_num);
	printf("time complexity:%d",count);
	
}
