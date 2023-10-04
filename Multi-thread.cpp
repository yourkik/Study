//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<pthread.h>
//
//#define true 1
//#define false 0
//
//int cnt = 0;
//pthread_mutex_t mutex;
//
//int cntPrime(int num) {
//	int cnt = 0;
//	int i;
//	if (num < 2)return false;
//
//	for (i = 1; i * i < num; i++) {
//		if (num % i == 0)cnt++;
//	}
//	if (i * i == num)cnt++;
//	if (cnt == 1)return true;
//	else return false;
//}
//
//void* partial_prime(void* param) {
//	int range = *(int*)param;
//	printf("thread for range(%d ~ %d)\n", range, range + 99999);
//
//	pthread_exit(0);
//}