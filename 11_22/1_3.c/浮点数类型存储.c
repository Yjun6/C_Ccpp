#define _CRT_SECURE_NO_WARNINGS 1

//int main()
//{
//	float f = 9.0;
//	
// //1001
//	//-1^0 * 1.001 * 2^3
//	//s = 0
//	//m = 1.001
//	//e = 3  e + 127(32λ) [+1023 64λ] 
//	//s    e           m 
//	//0 10000010 00100000000000000000000
//	//0100 0001 0001 0000 0000 0000 0000 0000
//	//41 10 00 00 
//	return 0;
//}

#include<stdio.h>
int main()
{
	int n = 9;
	float* p = (float*)&n;
	*p = 9.0;
	//1001.0
	//-1^0 * 1.001 * 2^3
	//s = 0
	//m = 1.001
	//e = 3
	//s    e         m
	//0 10000010 00100000000000000000000
	//0100 0001 0001 0000 0000 0000 0000 0000
	//41 10 00 00

	printf("%d\n", n);

	return 0;
}
