// 20102072 박주연
#include <iostream>
using namespace std;

class Myclass {
public:
	Myclass();					// 생성자
	Myclass(int);
	Myclass(const Myclass &);	// 복사 생성자
	~Myclass();					// 소멸자

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
	Myclass ob1;		// Myclass() 생성자 호출
	Myclass ob2 = 20;	// Myclass(int x)생성자 호출 -> c스타일의 초기화
	Myclass ob3(10);	// Myclass(int x)생성자 호출
	Myclass ob4(ob3);	// Myclass(const Myclass &_mc) 생성자 호출
	Myclass ob5 = ob2;	// Myclass(const Myclass &_mc) 생성자 호출

	cout << "ob1객체 x: " << ob1.get() << endl;
	cout << "ob2객체 x: " << ob2.get() << endl;
	cout << "ob3객체 x: " << ob3.get() << endl;
	cout << "ob4객체 x: " << ob4.get() << endl;
	cout << "ob5객체 x: " << ob5.get() << endl;
}