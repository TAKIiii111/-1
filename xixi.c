////����һ���ַ����ֱ�ͳ�Ƴ�����Ӣ����ĸ�����֡��ո�������ַ��ĸ�����
//
//#define  _CRT_SECURE_NO_WARNINGS
//
//#include<stdio.h>
//
////���ú���strlen()��Ҫ����ͷ�ļ�<string.h>
//#include<string.h>
//
//int main()
//{
//	//1.����һ���ַ�
//	char str[201] = { 0 };
//
//	//ʹ��scanf()������ȡ�ַ���ʱ�����ܰ����ո�
//	printf("������һ���ַ���");
//
//	//scanf("%[^\n]", str); // ��ȡһ���ַ��������ո�
//	scanf("%s", str);
//
//	//2.�����������
//	int word = 0;
//	int num = 0;
//	int space = 0;
//	int other = 0;
//	int i = 0;
//
//	//3.ͳ���ַ�����
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
//	//4.������
//	printf("Ӣ����ĸ������%d\n", word);
//	printf("���ָ�����%d\n", num);
//	printf("�ո������%d\n", space);
//	printf("�����ַ�������%d\n", other);
//
//
//
//	return 0;
//	
//}