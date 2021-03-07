 #include<stdio.h>
 
 int countrange(int ino)
	{
		int digit=0;
		int count=0;
		while(ino>0)
		{
			digit=ino%10;
			if(3<digit&&digit<7)
			{
				count=count+1;
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
	
	ret=countrange(value);
	printf("count range is:%d\n",ret);

    return 0;
}
