#include<iostream>
#include<stdio.h>
#include<errno.h>
#include<stdlib.h>

using namespace std;
void main() {

	//��ȡ�ַ����е�����
	const char* p = "10 2000000000000000 00000000000000 30 -40 junk";
	char* end;

	//strtol �ڶ��������õ� �ո�/��βλ��
	for (long i = strtol(p, &end, 10); p != end; i = strtol(p,&end,10)) {
		printf("%.*s  -->  ", (int)(end - p), p);
		p = end;
		if (errno == ERANGE) {
			printf("range error , got ");
			errno = 0;
		}
		printf("%ld\n", i);

	}
	//����Ҫ��¼��β�ַ�ָ���ָ��
	long b = strtol("1010", NULL, 2);//ת������
	long o = strtol("10", NULL, 8);//�˽���

	long z = strtol("011", NULL, 0);//�Զ�ʶ��
	system("pause");
}