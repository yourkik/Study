//#include<iostream>
//#define MAX 15
//using namespace std;
//
////use back tracking
//
//int n, cnt = 0;
//int board[MAX];
//
////input : 현재 층 수
////output : true or false 
////가로에 같은게 없는지 확인 and 대각선에도 없는지 확인하는 함수
//bool check(int length) {//legnth는 층 수(한 층에는 최대 1개만 들어감)
//	for (int i = 0; i < length; i++) {
//		if (board[i] == board[length] || abs(board[i] - board[length]) == (length - i)) {//가로줄 체크 뒤는 대각선 체크
//		//(이미 놓아진 퀸의 층수 - 놓은 퀸의 층수의 절댓값이 둘의 가로 차이와 같으면 대각선 경로에 겹침)
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
//	cout << "판의 크기와 퀸의 개수 N을 입력하세요" << endl;
//	cin >> n;
//	nQueen(0);
//	cout << cnt;
//}