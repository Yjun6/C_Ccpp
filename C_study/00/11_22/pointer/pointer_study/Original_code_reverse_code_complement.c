#define _CRT_SECURE_NO_WARNINGS 1

#include<stdio.h>

////668 - 001010011100
////00000000000000000000001010011100 - a
//unsigned int a = 0x1234; 
////0 00000000 00000000000001010011100 
////2^1-127 * 0.00000000000001010011100
////0
//unsigned char b = *(unsigned char*)&a;

//int main()
//{
//    char a[1000] = { 0 };
//    int i = 0;
//    for (i = 0; i < 1000; i++)
//    {
//        //-1 -2 -3...-127 128 ...2 1 0 -1...
//        a[i] = -1 - i;
//    }
//    printf("%d", strlen(a));//'\0' - 0
//    return 0;
//}

//int main()
//{
//	double i = 9.0;
//	return 0;
//}

//int main()
//{
//	//1100 1000
//	unsigned char a = 200;
//	//01100100
//	unsigned char b = 100;
//	//0
//	unsigned char c = 0;
//	//1111 1111 1111 1111 1111 1111 1100 1000 - a
//	//0000 0000 0000 0000 0000 0000 0110 0100 - b
//	c = a + b;
//	//1111 1111 1111 1111 1111 1111 1100 1000 - a
//	//0000 0000 0000 0000 0000 0000 0110 0100 - b
//	//1000 0000 0000 0000 0000 0000 00010 1100 - c
//	// 0010 1100 - c �ض� 44
//	//a + b -> 1000 0000 0000 0000 0000 0000 00010 1100
//	printf(" % d % d", a + b, c);// 44
//	return 0;
//}
