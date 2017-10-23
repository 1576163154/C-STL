#include<iostream>
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

using namespace std;
void main() {

	//获取字符串中的数字
	const char* p = "10 2000000000000000 00000000000000 30 -40 junk";
	char* end;

	//strtol 第二个参数得到 空格/结尾位置
	for (long i = strtol(p, &end, 10); p != end; i = strtol(p,&end,10)) {
		printf("%.*s  -->  ", (int)(end - p), p);
		p = end;
		if (errno == ERANGE) {
			printf("range error , got ");
			errno = 0;
		}
		printf("%ld\n", i);

	}
	//不需要记录结尾字符指针的指针
	long b = strtol("1010", NULL, 2);//转二进制
	long o = strtol("10", NULL, 8);//八进制

	long z = strtol("011", NULL, 0);//自动识别
	system("pause");
}