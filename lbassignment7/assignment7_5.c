#include<stdio.h>

int countdiff(int ino)
{
	int digit=0;
	int count1=0;
	int count2=0;
	while(ino>0)
	{
		digit=ino%10;
		if(digit%2==0)
		{
			count1=count1+digit;
		}
		
		if(digit%2!=0)
		{
			
			count2=count2+digit;
		}
		ino=ino/10;

	}
	return count1-count2;
}

 int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=countdiff(value);
	printf("diffrence between even and odd num of digit is:%d\n",ret);

    return 0;
}
