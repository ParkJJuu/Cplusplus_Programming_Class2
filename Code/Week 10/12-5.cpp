// 20102072 ���ֿ�
// get, getline() �޼ҵ� �ǽ� ���α׷�
#include <iostream>
#include <string>
using namespace std;

int main() {
	// getline(cin, �μ�) ���·� ����ϱ� ����, name ������ string Ÿ������ ����
	string name;
	char age[5];

	cout << "�̸� : ";
	getline(cin, name);		// getline �Լ��� getline(cin, �μ�) ���·� ����

	cout << "���� : ";
	cin.get(age, 5);		// �����ߴ� �ڵ带 ������ ����
	cout << endl << name << "�� ����� " << age << "�� �̱���!!" << endl;
}


