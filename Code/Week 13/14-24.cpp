/*// 20102072 ���ֿ�
// stack�� ����� pop ���� ���α׷�
#include <iostream> 
#include <stack> 
using namespace std;

void showstack(stack <int> s) {
	while (!s.empty()) {
		cout << '\t' << s.top();
		s.pop();
	}
	cout << '\n';
}

int main() {
	stack <int> s;
	s.push(10);
	s.push(30);
	s.push(20);
	s.push(5);
	s.push(1);

	cout << "���� ���� ��� : ";
	showstack(s); // ���� �� ���
	cout << "\n���� ���� ũ�� : ";
	cout << s.size();
	cout << "\n���� ���� ���� ��� : ";
	cout << s.top() << endl << endl;

	// for���� pop() �Լ��� �̿��Ͽ� ������ ��� ����
	for (int i = 1; i < 6; i++) {
		cout << "������ ��� ���� " << endl;
		s.pop();
		cout << "���� ���� ��� : ";
		showstack(s);
		cout << endl;
	}

	cout << "������ ��� ��Ұ� �����Ǿ����ϴ� !!" << endl;
}*/


