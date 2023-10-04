//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<string.h>
//int gcd(int a, int b) {//a>b 설정이 필요
//	if (b == 0)return a;
//	else {
//		return gcd(b, a % b);
//	}
//}
//
//int lcm(int a, int b) {
//	return a * b * gcd(a, b);
//}
//
//void swap(int* a, int* b) {
//	int *tmp = a;
//	a = b;
//	b = tmp;
//}
//int main() {
//	char s[100];
//	int a, b;
//	printf("Enter gcd or lcm :");
//	scanf("%s", &s);
//	if (strcmp(s, "gcd") == 0) {
//		printf("Enter two number\n");
//		scanf("%d %d", &a, &b);
//		if (b > a) {
//			swap(&a, &b);
//		}
//		printf("Result : %d", gcd(a, b));
//	}
//	else {
//		printf("Enter two number\n");
//		scanf("%d %d", &a, &b);
//		if (b > a) {
//			swap(&a, &b);
//		}
//		printf("Result : %d", lcm(a, b));
//	}
//}