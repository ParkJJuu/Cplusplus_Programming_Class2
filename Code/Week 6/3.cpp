// 20102072 박주연
/*3.  main()이 실행되도록 연산자 함수(연산자 오버로딩)를 완성하시오.*/
#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle(int radius = 0) { this->radius = radius; }
	friend Circle operator+ (int i, Circle c) {
		c.radius += i;
		return c;
	}
	void show() {
		cout << "radius = " << radius << endl;
	}
};

int main() {
	Circle a(5), b(4);
	b = 3 + a; // b의 반지름을 a의 반지름에 3을 더한 것으로 치환
	a.show();  // radius = 5
	b.show();  // radius = 8
}
