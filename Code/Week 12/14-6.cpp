/*// 20102072 ���ֿ�
// ���ڿ� sort�� ������ ��� �ǽ� ���α׷�
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>	// �������� ���� greater ���
using namespace std;

bool compare(string a, string b) {
	cout << "��(" << a << "," << b << ")" << endl;
	return (a.compare(b) < 0);
}

int main() {
	string str[] = { "ȫ�浿", "�̼���", "������", "�Ӳ���", "����", "������" };
	vector<string> myvector(str, str + 6);
	vector<string>::iterator it;

	// ���� ���� �ڵ� ���� 
	sort(myvector.begin(), myvector.end(), compare);

	cout << "\nvector ���� : ";
	for (it = myvector.begin(); it != myvector.end(); ++it)
		cout << *it << ' ';

	// greater�� �̿��Ͽ� str �迭�� ��Ҹ� �������� ����
	sort(myvector.begin(), myvector.end(), greater<string>());
	cout << "\n\nvector ���� : ";
	for (it = myvector.begin(); it != myvector.end(); ++it)
		cout << *it << ' ';
	cout << endl;
}*/



