//#include <iostream>
//#include <queue>
//using namespace std;
//
////queue�� ���� �����ؾ��ϴ� ���� front ��ġ�� ���� �� �� ó�� -> ���� ������ ����(�ذ�)
//int main() {
//	ios_base::sync_with_stdio(0);
//	cin.tie(0); cout.tie(0);
//
//	//�Է�
//	int n, k;
//	cin >> n >> k;
//
//	queue<int>q;
//	for (int i = 1; i <= n; i++)q.push(i);
//
//	cout << "<";
//
//	//���� �ذ�
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