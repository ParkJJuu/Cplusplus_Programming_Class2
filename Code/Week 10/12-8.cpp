// 20102072 ���ֿ�
// put �޼ҵ带 �̿��� ��� ���α׷�
#include <iostream>
using namespace std;

int main() {
	char array[5];		// �迭 array�� ����Ű�� ������ p ����
	char *p = array;

	cout << "5���� ���� �Է� : ";
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << "array[" << i << "] = ";
		// cout.put �Լ��� �̿��� p�� ����Ű�� array �迭�� ���� ���
		// i�� 1�� ������ �� ����, p�� ���� array �迭�� ����Ŵ 
		cout.put(*(p + i)) << endl;
	}
	cout << endl;
}


