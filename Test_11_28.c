#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1.����Ļ���������ͼ����
*
***
*****
*******
*********
***********
*************
***********
*********
*******
*****
***
*
*/
/*
�������м������13��*��ÿһ���2��*;
��Ϊ�����Ǻ������ǣ�
forѭ������whileʵ�֡�
*/
//void PrintDesgin(int len){
//	for (int i = 1; i <= len; i = i + 2){
//		int j = 1;
//		while (j <= i){
//			printf("%c", '*');
//			j++;
//		}
//		printf("\n");
//	}
//	for (int i = len - 2; i > 0; i = i - 2){
//		int j = 1;
//		while (j <= i){
//			printf("%c", '*');
//			j++;
//		}
//		printf("\n");
//	}
//}
//int main(){
//	int len = 0;
//	printf("�����������ӡͼ�����*����");
//	scanf("%d", &len);
//	PrintDesgin(len);
//	system("pause");
//	return 0;
//}
/*
2.���0��999֮������С�ˮ�ɻ������������
��ˮ�ɻ�������ָһ����λ�������λ���ֵ�������ȷ�õ��ڸ��������磻153��1��5��3?����153��һ����ˮ�ɻ�������
�������У�ˮ�ɻ�����Narcissistic number��Ҳ��Ϊ������������������ķ˹׳����ķ˹��������Armstrong number��,
��ָһNλ�����������֮N�η��͵��ڸ�����
����153��370��371��407������λ����ˮ�ɻ������������֮�����͵��ڸ�����
153 = 1^3 + 5^3 + 3^3��
370 = 3^3 + 7^3 + 0^3��
371 = 3^3 + 7^3 + 1^3��
407 = 4^3 + 0^3 + 7^3��
*/
/*
������
��forѭ�������ж�0-999֮���ˮ�ɻ��������������
*/
//void is_narcissus(int min, int max){
//	printf("%d-%d֮��ġ�ˮ�ɻ�����Ϊ��\n", min, max);
//	int i = 0;
//	if (min >= 100){
//		i = min;
//	}
//	else{
//		i = 100;
//	}
//	for ( i ; i <= max; i++){
//		int k = i / 100;//��λ;
//		int p = (i - k * 100) / 10;//ʮλ;
//		int j = i % 10;//��λ;
//		int number = k*k*k + p*p*p + j*j*j;
//		if (number == i){
//			printf("%d\n", i);
//		}
//	}
//}
//
//int main(){
//	int min = 0;
//	int max = 0;
//	printf("�����������ӡ��ˮ�����ķ�Χ���磺0-999��:");
//	scanf("%d-%d", &min, &max);
//	is_narcissus(min,max);
//	system("pause");
//	return 0;
//}

/*
3.
��Sn=a+aa+aaa+aaaa+aaaaa��ǰ5��֮�ͣ�����a��һ�����֣�
���磺2+22+222+2222+22222
*/
/*
������a+aa+aaa+aaaa+aaaaa=a0000*1+a000*2+a00*3+a0*4+a*5
��λ��ʱ���磺13
13+1313+131313+13131313+1313131313=1300000000*1+13000000*2+130000*3+1300*4+13*5
*/
void five_sum(int x){
	int len = 1 + (int)log10(x);//�����ĳ���
	//printf("%d\n", len);
	int result = 0;//���
	int n = 10000;
	int m = 1;
	int i = 0;
	for (i = 1; i <= len; i++){
		m = m*n;
	}
	for (i = 1; i <= 5; i++){
		result = result + x*(m)*i; 
		m = m / (len * 10);
	}
	//��ӡ���
	for (int j = 1; j <= 5; j++){
		int k = 0;
		while (k < j){
			printf("%d", x);
			k++;
		}
		if (j < 5){
			printf("+");
		}
	}
	printf("=");
	printf("%d\n", result);
}
int main(){
	int x;
	printf("������һ������");
	scanf("%d", &x);
	five_sum(x);
	system("pause");
	return 0;
}