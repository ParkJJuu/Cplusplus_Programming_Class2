// 20102072 ���ֿ�
#include <iostream>
using namespace std;

class Myclass {
public:
	Myclass();					// ������
	Myclass(int);
	Myclass(const Myclass &);	// ���� ������
	~Myclass();					// �Ҹ���

public:
	int get();
private:
	int x;
};

Myclass::Myclass() {}
Myclass::Myclass(int _x) {
	x = _x;
}

Myclass::Myclass(const Myclass &_mc) {
	x = _mc.x;
}

Myclass::~Myclass() {}

int Myclass::get() {
	return x;
}

int main(void) {
	Myclass ob1;		// Myclass() ������ ȣ��
	Myclass ob2 = 20;	// Myclass(int x)������ ȣ�� -> c��Ÿ���� �ʱ�ȭ
	Myclass ob3(10);	// Myclass(int x)������ ȣ��
	Myclass ob4(ob3);	// Myclass(const Myclass &_mc) ������ ȣ��
	Myclass ob5 = ob2;	// Myclass(const Myclass &_mc) ������ ȣ��

	cout << "ob1��ü x: " << ob1.get() << endl;
	cout << "ob2��ü x: " << ob2.get() << endl;
	cout << "ob3��ü x: " << ob3.get() << endl;
	cout << "ob4��ü x: " << ob4.get() << endl;
	cout << "ob5��ü x: " << ob5.get() << endl;
}