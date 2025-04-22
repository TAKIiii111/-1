//这份代码是本人自己学习中写的测试代码，未能解决问题：分类统计输入的字符类型个数（scanf不能读取空格，可以使用getchar()来截取）；
//本代码scanf()中使用的是输入%s，故会读取不到换行与空格
//在xixi.c中会使用另一种输入格式能完成本功能

#define  _CRT_SECURE_NO_WARNINGS

#include<stdio.h>

int main()
{
	char str1[10] = { 0 };

	printf("%s\n", str1);

	printf("请输入一行字符：");

	scanf("%s", str1);

	printf("\n");

	printf("%d\n", strlen(str1));

	int i = 0;

	int word = 0;
	int num = 0;
	int space = 0;
	int other = 0;

	for (i = 0; str1[i] != 0; i++)
	{
		if (('z' >= str1[i] && str1[i] >= 'a') || ('Z' >= str1[i] && str1[i] >= 'A'))
		{
			++word;
		}
		else if(('0' <= str1[i] && str1[i] <= '9'))
		{
			++num;
		}
		else if (' ' == str1[i])
		{
			++space;
		}
		else
		{
			++other;
		}
	}

	printf("字母个数为：%d\n数字个数为：%d\n空格个数为：%d\n其他字符个数为：%d", word,num,space,other);

	
	return 0;
}
