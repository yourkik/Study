//#include<iostream>
//#define MAX 15
//using namespace std;
//
////use back tracking
//
//int n, cnt = 0;
//int board[MAX];
//
////input : ���� �� ��
////output : true or false 
////���ο� ������ ������ Ȯ�� and �밢������ ������ Ȯ���ϴ� �Լ�
//bool check(int length) {//legnth�� �� ��(�� ������ �ִ� 1���� ��)
//	for (int i = 0; i < length; i++) {
//		if (board[i] == board[length] || abs(board[i] - board[length]) == (length - i)) {//������ üũ �ڴ� �밢�� üũ
//		//(�̹� ������ ���� ���� - ���� ���� ������ ������ ���� ���� ���̿� ������ �밢�� ��ο� ��ħ)
//			return false;
//		}
//	}
//	return true;
//}
//
////input : x(count how many queen is already set)
////output : none
////set queen in board and if all queen is set then plus cnt
//void nQueen(int x) {
//	if (x == n) {
//		cnt++;
//	}
//	else {
//		for (int i = 0; i < n; i++) {
//			board[x] = i;
//			if (check(x)) {
//				nQueen(x + 1);
//			}
//		}
//	}
//}
//
//int main() {
//	cout << "���� ũ��� ���� ���� N�� �Է��ϼ���" << endl;
//	cin >> n;
//	nQueen(0);
//	cout << cnt;
//}