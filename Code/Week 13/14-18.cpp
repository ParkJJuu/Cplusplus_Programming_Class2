/*// 20102072 ���ֿ�
// ���� ����Ʈ���� ��� ���� ���α׷�
#include <iostream>
#include <list>
using namespace std;

bool Predicate(int n) {
	return n > 40;
}

bool Predicate2(int n) {
	return n < 30;
}

int main() {
	list<int> lt;
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	cout << "����Ʈ ���" << endl;
	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter = lt.begin();
	iter++;
	iter++;

	// 3�� ������ 30 ����
	cout << "\n3�� ������ " << *iter << " ����" << endl;
	list<int>::iterator iter2 = lt.erase(iter);

	cout << "\n����Ʈ ���" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	cout << "\n4���� ��� �߰�" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	// ����Ʈ���� ���� 10 ����
	lt.remove(10);
	cout << "\n����Ʈ���� 10�� ��� ����" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	// Predicate �Լ��� �ش��ϴ� ���� ���� (40���� ũ��)
	lt.remove_if(Predicate);
	cout << "\n����Ʈ���� 40���� ū ��� ����" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	// Predicate2 �Լ��� �ش��ϴ� ���� ���� (30���� �۴�)
	lt.remove_if(Predicate2);
	// remove_if �Լ��� ����Ͽ� ���� ��ҵ鸸 ��� ����
	cout << "\n����Ʈ���� 30���� ���� ��� ����" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
}*/
