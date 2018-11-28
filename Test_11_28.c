#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
1.在屏幕上输出以下图案：
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
分析：中间最长的是13个*；每一层加2个*;
分为上三角和下三角，
for循环或者while实现。
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
//	printf("请输入你想打印图案的最长*数：");
//	scanf("%d", &len);
//	PrintDesgin(len);
//	system("pause");
//	return 0;
//}
/*
2.求出0～999之间的所有“水仙花数”并输出。
“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。
在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number）,
是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。
*/
/*
分析：
用for循环依次判断0-999之间的水仙花数，是则输出。
*/
//void is_narcissus(int min, int max){
//	printf("%d-%d之间的“水仙花数”为：\n", min, max);
//	int i = 0;
//	if (min >= 100){
//		i = min;
//	}
//	else{
//		i = 100;
//	}
//	for ( i ; i <= max; i++){
//		int k = i / 100;//百位;
//		int p = (i - k * 100) / 10;//十位;
//		int j = i % 10;//个位;
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
//	printf("请输入你想打印的水仙数的范围（如：0-999）:");
//	scanf("%d-%d", &min, &max);
//	is_narcissus(min,max);
//	system("pause");
//	return 0;
//}

/*
3.
求Sn=a+aa+aaa+aaaa+aaaaa的前5项之和，其中a是一个数字，
例如：2+22+222+2222+22222
*/
/*
分析：a+aa+aaa+aaaa+aaaaa=a0000*1+a000*2+a00*3+a0*4+a*5
两位数时：如：13
13+1313+131313+13131313+1313131313=1300000000*1+13000000*2+130000*3+1300*4+13*5
*/
void five_sum(int x){
	int len = 1 + (int)log10(x);//求数的长度
	//printf("%d\n", len);
	int result = 0;//结果
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
	//打印结果
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
	printf("请输入一个数：");
	scanf("%d", &x);
	five_sum(x);
	system("pause");
	return 0;
}