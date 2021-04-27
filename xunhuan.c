#include<stdio.h>
//int main()
//{
//	int ch = 0;
//	while ((ch=getchar()) != EOF)
//	{
//		if (ch< '0' || ch>'9')
//		   continue;
//		putchar(ch);
//	}
//	return 0;
//}

int main()
{
	int i = 0;
	int b = 1;
	int a = 0;
	for (i = 1; i <= 5; i++)
	{
		b = b*i;
		if (i == 4)
			continue;
		a = a + b;
	}
	printf("%d\n", a);
	return 0;
}

//int main()
//{
//	int n = 0;
//	int i = 0;
//	
//	int a = 0;
//	for (i = 1; i <= 3; i++)
//	{
//		int b = 1;
//		for (n = 1; n <=i; n++)
//		{
//			b = b *n ;
//		}
//		a = a + b;
//	}
//	
//	printf("%d\n", a);
//	return 0;
//}