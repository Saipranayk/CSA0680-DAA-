#include<stdio.h>
void function(int main);
void main()
{
	int n;
	scanf("%d",&n);
	function(n);
}
void function(int n)
{
	int count=0;
	int i=1,s=1;
	count++;
	count++;
	while(s<=n)
	{
		count++;
		i++;
		count++;
		s+=i;
		count++;
	}
	count++;
	printf("%d",count);
}

