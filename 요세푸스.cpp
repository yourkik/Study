//#include <iostream>
//#include <queue>
//using namespace std;
//
////queue를 통해 제거해야하는 값을 front 위치에 가게 한 후 처리 -> 남는 공간이 없음(해결)
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//
//	//입력
//	int n, k;
//	cin >> n >> k;
//
//	queue<int>q;
//	for (int i = 1; i <= n; i++)q.push(i);
//
//	cout << "<";
//
//	//문제 해결
//	for (int i = 0; i < n - 1; i++) {
//		for (int j = 0; j < k - 1; j++) {
//			q.push(q.front());
//			q.pop();
//		}
//		cout << q.front() << ", ";
//		q.pop();
//	}
//	cout << q.front() << ">\n";
//	return 0;
//}