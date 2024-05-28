/*// 20102072 ���ֿ�
// deque�� ���԰� ��� ���α׷�
#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> dq; 
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);
	dq.push_back(60);

	// ��ť ��� ���
	cout << "��ť ����� ���" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;

	dq.push_front(90);
	dq.push_front(100);
	cout << "\n�߰����� ���� ��ť ��� ���" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;

	// pop_back() �Լ��� �̿��Ͽ� ��ť�� ������ ���� ����
	// 50, 60 ����
	dq.pop_back();
	dq.pop_back();
	cout << "\n�������� ���� ��ť ��� ���" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;

	// pop_front() �Լ��� �̿��Ͽ� ��ť�� ù ���� ����
	// 100, 90 ����
	dq.pop_front();
	dq.pop_front();
	cout << "\nù ��� �������� ���� ��ť ��� ���" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;
	cout << "====================================" << endl;

	// ���ο� dq�� �����ϰ� ����
	deque<int>::iterator iter;
	deque<int>::iterator iter2;
	cout << "\n���ο� ��ť ����� ���" << endl;
	for (iter = dq.begin(); iter != dq.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter = dq.begin() + 2;            
	iter2 = dq.insert(iter, 500);    
	cout << "\n������ ����� ���\n" << *iter2 << endl;
	cout << "\n��ü ����� ���" << endl;
	for (iter = dq.begin(); iter != dq.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter = dq.begin() + 3;   // ��ũ�� 4��° ���ҿ� ����
	// ��ť�� 4��° ���� ����
	cout << "\n������ ����� ���\n" << *iter << endl;
	dq.erase(iter);			 // 30 ����
	cout << "\n��ü ����� ���" << endl;
	for (iter = dq.begin(); iter != dq.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
}*/


