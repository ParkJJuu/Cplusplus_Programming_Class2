// 20102072 ���ֿ�
/* transform �˰������� �Լ� ��ɿ� ���� ó���� �����
��� �迭�� ��ȯ�ϴ� �ǽ� ���α׷�*/
#include <iostream>
#include <algorithm>
using namespace std;

int result(int in) { // �Ű����� in�� 10�� ���ϴ� �Լ�
	return (in * 10);
}

int main() {
	// ������ �迭 ���� �� �ʱ�ȭ
	int a[] = { 3, 6, 1, 12, 4 };
	int b[5] = { 0 };

	int result(int);

	cout << "���� �迭 ��� " << endl;
	for (int num = 0; num <= 4; num++)
		cout << a[num] << " ";
	cout << endl;

	// transform �Լ��� �̿��Ͽ� result �Լ��� ���� ����� b�� ����
	transform(a, a + 5, b, result);
	cout << "\n��ȯ �迭 ��� " << endl;
	for (int j = 0; j < 5; j++)
		cout << b[j] << ' ';
	cout << endl;

	// sort �Լ��� �̿��Ͽ� b �迭�� ��Ҹ� ������������ ����
	sort(b, b + 5);
	cout << "\n��ȯ �迭 �������� ���� " << endl;
	for (int j = 0; j < 5; j++)
		cout << b[j] << ' ';
	cout << endl;
}

