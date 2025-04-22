////输入一行字符，分别统计出其中英文字母、数字、空格和其他字符的个数。
//
//#define  _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
////调用函数strlen()需要包含头文件<string.h>
//#include<string.h>
//
//int main()
//{
//	//1.输入一行字符
//	char str[201] = { 0 };
//
//	//使用scanf()函数读取字符串时，不能包含空格
//	printf("请输入一行字符：");
//
//	//scanf("%[^\n]", str); // 读取一行字符，包括空格
//	scanf("%s", str);
//
//	//2.定义各个变量
//	int word = 0;
//	int num = 0;
//	int space = 0;
//	int other = 0;
//	int i = 0;
//
//	//3.统计字符个数
//	for (i = 0; str[i]!='\0'; i++)
//	{
//		if (('a' <= str[i] <= 'z') || ('A' <= str[i] <= 'Z'))
//		{
//			++word;
//		}
//		else if (' ' == str[i])
//		{
//			++space;
//		}
//		else if ('0' <= str[i] <= '9')
//		{
//			++num;
//		}
//		else
//		{
//			++other;
//		}
//	}
//
//	//4.输出结果
//	printf("英文字母个数：%d\n", word);
//	printf("数字个数：%d\n", num);
//	printf("空格个数：%d\n", space);
//	printf("其他字符个数：%d\n", other);
//
//
//
//	return 0;
//	
//}