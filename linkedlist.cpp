//#define _CRT_SECURE_NO_WARNINGS
//#include<stdio.h>
//#include<stdlib.h>
//
//struct NODE{
//	int key;
//	NODE* next;
//};
//struct NODE* createNewNode(int k) {
//	struct NODE* newnode = (NODE*)malloc(sizeof(NODE));
//	newnode->key = k;
//	newnode->next = NULL;
//	return newnode;
//}
//struct NODE* make_linked_list(int count) { //registration_data로 배열을 만드는 함수
//	NODE* now;//현재 노드 주소 저장
//	NODE* head = createNewNode(0);
//	NODE* before = head;//그전 노드 주소 저장
//	for (int i = 1; i <= count; i++) {
//		now = createNewNode(i);
//		before->next = now;
//		before = now;
//	}
//	return head;
//}
//int main() {
//	int cnt;
//	scanf("%d", &cnt);
//	NODE* head = make_linked_list(cnt);
//	NODE* p=head;
//	for (int i = 0; i <= cnt; i++) {
//		printf("%d\n", p->key);
//		if (p->next != NULL)p = p->next;
//		else {
//			printf("NULL");
//		}
//	}
//	return 0;
//}