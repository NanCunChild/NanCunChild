#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int max = 1000, ti = 3;

void GET_N_BY_WHILE() {//通过while计算倍数
	int i = 0, re = 1;
	while (re <= max-ti) {
		re = i * ti;
		i++;
		printf("%d \f", re);
	}
	printf("UpLimit is %d \n", max);
	printf("Times is %d \n", ti);
}
void GET_N_BY_FOR() {//用for循环计算倍数
	int i = 0,re=1;
	for (i = 1; re <= max; i++) {
		re = i * ti;
		printf("%d \f", re);
	}
	printf("UpLimit is %d \n", max);
	printf("Times is %d \n", ti);
}
void GET_N_BY_DEVIDE() {//逐个验证数字是否可以被整除来达到显示倍数
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

//没啥，就是练练手。代码并不高端，别喷。

