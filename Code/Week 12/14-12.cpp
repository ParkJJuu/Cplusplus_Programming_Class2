/*// 20102072 ���ֿ�
// for_each �˰������� �Լ� ��ɿ� ���� ó���� ����� ��ȯ�ϴ� ���α׷�
#include <iostream>
#include <algorithm>
using namespace std;

void result(int a) { // �Ű����� a�� 10�� ���ϴ� �Լ�
	cout << (a * 10) << ' ';
}

int main() {
	cout << "������ �迭 ��" << endl;
	// ������ �迭 ���� �� �ʱ�ȭ
	int inches[] = { 1, 9, 2, 8, 4 }; 

	for (int num = 0; num <= 4; num++)
		cout << inches[num] << " ";
	cout << endl;

	cout << "\n�Լ��� ���� ����� ���" << endl;
	// for_each �Լ��� �̿��Ͽ� result �Լ��� ���� ��� ��ȯ
	for_each(inches, inches + 5, result);
	cout << endl;
}*/

