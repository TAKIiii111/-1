//#define  _CRT_SECURE_NO_WARNINGS
////
////#include <stdio.h>
////
//////
////#include <string.h>
////
////int main() {
////    char str[200] = { 0 };
////    printf("������һ���ַ���");
////
////    // ʹ��fgets��ȡ���룬�������з�
////    fgets(str, sizeof(str), stdin);
////
////    // ȥ��ĩβ�Ļ��з�
////    str[strcspn(str, "\n")] = '\0';
////
////    int word = 0, num = 0, space = 0, other = 0;
////    for (int i = 0; str[i] != '\0'; i++) {
////        if (('a' <= str[i] && str[i] <= 'z') || ('A' <= str[i] && str[i] <= 'Z')) {
////            word++;
////        }
////        else if (str[i] == ' ') {
////            space++;
////        }
////        else if ('0' <= str[i] && str[i] <= '9') {
////            num++;
////        }
////        else {
////            other++;
////        }
////    }
////
////    printf("Ӣ����ĸ������%d\n", word);
////    printf("���ָ�����%d\n", num);
////    printf("�ո������%d\n", space);
////    printf("�����ַ�������%d\n", other);
////
////    return 0;
////}
//
//#include <stdio.h>
//int main() 
//{
//    char s[201];
//    scanf("%[^\n]", s);
//
//
//    int i = 0;
//    int abc = 0, sz = 0, kg = 0, qt = 0;
//    while (s[i] != '\0') {
//        if ((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'))
//            ++abc;
//        else if (s[i] >= '0' && s[i] <= '9')
//            ++sz;
//        else if (s[i] == ' ')
//            ++kg;
//        else
//            ++qt;
//        ++i;
//    }
//    printf("%d %d %d %d", abc, sz, kg, qt);
//    return 0;
//
//}