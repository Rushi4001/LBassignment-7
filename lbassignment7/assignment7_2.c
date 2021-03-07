#include<stdio.h>

int countodd(int ino)
{
	int digit=0;
	int count=0;
	  while(ino>0)
		{
			digit=ino%10;
			if((digit%2)!=0)
			{
				count++;
			}
			ino=ino/10;
		}
	return count;
}
int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=countodd(value);
	printf("count of odd digit is:%d\n",ret);

    return 0;
}
