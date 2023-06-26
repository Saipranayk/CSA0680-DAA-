#include <stdio.h>
int main()
{
	int array[10],i;
	int loop, largest;
	int count=0;
	printf("Enter the elements in the array:");
	for(i=1;i<=10;i++)
	{
		scanf("%d",&array[i]);
	}
	largest=array[0];
	for(loop=1;loop<=10;loop++)
	{
		count++;
		if(largest<array[loop])
		largest=array[loop];
    }
    count++;
	count++;
	printf("Largest element of array is %d\n",largest);   
	printf("time complexity: %d",count);
	return 0;
}
