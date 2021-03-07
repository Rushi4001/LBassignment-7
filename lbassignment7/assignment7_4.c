 #include<stdio.h>
 
 int multdigit(int ino)
	{
		int digit=0;
		int mult=1;
		while(ino>0)
		{
			digit=ino%10;
			mult=mult*digit;
			ino=ino/10;
		}
	return mult;
 
	}
 int main()
{
	int value=0;
	int ret=0;
	printf("enter the number\n");
	scanf("%d",&value);
	
	ret=multdigit(value);
	printf("multiplication of digit is:%d\n",ret);

    return 0;
}
