// 20102072 ���ֿ�
/*2.  Ŭ���� Accumulator�� add() �Լ��� ���� ���޵� ���� �����ϴ� �����̴�.
main() �� ����� �� �ֵ��� Ŭ���� Accumulator�� �Լ��� �ϼ��Ͻÿ�.*/
#include <iostream>
using namespace std;

class Accumulator {
	int value;
public:
	Accumulator(int value) {
		this->value = value;
	};

	Accumulator& add(int n) {
		value += n; 
		return *this; 
	}

	int get() {
		return value;
	}
};

int main() {
	Accumulator acc(10);    //value=10 
	acc.add(3).add(4).add(5);  // acc�� value = 22
	cout << acc.get() << endl; // 22 ���
}