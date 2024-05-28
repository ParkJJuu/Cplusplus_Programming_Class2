// 20102072 ���ֿ�
#include <iostream>
#include <stdlib.h>
using namespace std;

class Array {
	int *p;		// �迭�� ���� �ּ�
	int size;	// �迭�� ũ��
public:
	Array(int num);				//	������
	int &operator [](int i);	// [ ] ������ �ߺ� ����
};

Array::Array(int num) {
	p = new int[num];
	if (!p) {
		cout << "�޸� �Ҵ� ����!!\n";
		exit(1);
	}
	size = num;
}

int &Array::operator[](int i) {	// [ ] ������ �ߺ� ����
	if (i < 0 || i >= size) {	// �迭�� ���� üũ
		cout << "\n �迭 bound ����!!\n";
		exit(1);
	}
	return p[i];
}

int main() {
	Array n(10);				// 10���� ���Ҹ� ������ ��ü �迭
	int i = 0;
	for (int i = 0; i < 10; i++)
		n[i] = i * i;			// [ ] ������ �Լ� ȣ��, �� ����
	cout << endl;

	for (int i = 0; i < 11; i++)
		cout << n[i] << "  ";	// [ ] ������ �Լ� ȣ��
}