#include<stdio.h>
int main()
{
	int count=0;
	int n,reverse,sum=0,flag;
	printf("enter the prime number:");
	scanf("%d",&n);
	while(n!=0)
	{
		count++;
		reverse=n%10;
		count++;
		sum=sum*10+reverse;
		count++;
		n=n/10;
		count++;
	}
	printf("\n");
	flag=0;
for(int j=2;j<=sum/2;j++)
	{
		count++;
		if((sum%j)==0)
		{
		count++;
		flag=1;
		break;
	}
}
   if(flag==0)
   {
   	count++;
   	printf("%d is also prime number",sum);
   }
   else
   {
   	count++;
   	printf("%d is not prime number\n",sum);
   }
   count++;
   printf("time complexity:%d\n",count);
}
