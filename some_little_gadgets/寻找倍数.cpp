#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int max = 1000, ti = 3;

void GET_N_BY_WHILE() {//ͨ��while���㱶��
	int i = 0, re = 1;
	while (re <= max-ti) {
		re = i * ti;
		i++;
		printf("%d \f", re);
	}
	printf("UpLimit is %d \n", max);
	printf("Times is %d \n", ti);
}
void GET_N_BY_FOR() {//��forѭ�����㱶��
	int i = 0,re=1;
	for (i = 1; re <= max; i++) {
		re = i * ti;
		printf("%d \f", re);
	}
	printf("UpLimit is %d \n", max);
	printf("Times is %d \n", ti);
}
void GET_N_BY_DEVIDE() {//�����֤�����Ƿ���Ա��������ﵽ��ʾ����
	int devi = 0, i = 1;
	while (devi<=max) {
		if (devi%ti==0) {
			printf("%d \f",devi);
		}
		devi++;
	}
}

int main() {
	GET_N_BY_WHILE();
	//GET_N_BY_FOR();
	//GET_N_BY_DEVIDE();
	return 0;
}

//ûɶ�����������֡����벢���߶ˣ����硣

