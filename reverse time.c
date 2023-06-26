#include<stdio.h>
void reverse(int n);
int main()
{
	int n;
	printf("enter the digits:\n");
	scanf("%d",&n);
	reverse(n);
	return 0;
}
void reverse(int n)
{
	int count=0;
	int rev=0,remainder;count++;
	while(n!=0)
	{
		count++;remainder=n%10;count++;
		rev=rev*10+remainder;count++;
		n=n/10;count++;
	}
	count++;count++;
	printf("%d",count);
}
