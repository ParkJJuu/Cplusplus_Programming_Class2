/*// 20102072 ���ֿ�
// vector�� �̿��� merge �Լ� �ǽ� ���α׷�
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// �Ǽ��� �迭 ���� �� �ʱ�ȭ
	double a[] = { 1.2, 4.6, 5.1, 5.7, 8.0 };
	double b[] = { 2.2, 3.6, 4.6, 7.7, 9.9 };

	vector<double> result(10);

	cout << "ù ��° ��� : ";
	for (int i = 0; i < 5; i++)
		cout << a[i] << ' ';
	cout << endl;

	cout << "�� ��° ��� : ";
	for (int i = 0; i < 5; i++)
		cout << b[i] << ' ';
	cout << endl;

	// merge �Լ��� ���� �迭 a�� b�� �Ǽ� ��ҵ��� ����
	merge(a, a + 5, b, b + 5, result.begin());
	cout << "\n���� ��� : ";
	for (int i = 0; i < 10; i++)
		cout << result[i] << ' ';
	cout << endl;
}*/