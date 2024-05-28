// 20102072 박주연
/*1.   main() 이 실행되도록 필요한 함수를 완성하시오.
	: 반지름 10인 x를 y의 반지름 5만큼 증가시켜 반지름 15인 x를 만드는 내용*/
#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:	
	Circle(int xy) { this->radius = xy; } // 생성자
	int getRadius() { return radius; }	
	void setRadius(int r) { radius = r; }
	void show() {
		cout << "반지름 = " << radius;		// show() 함수
	}
};

void increaseBy(Circle &a, Circle &b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(x, y); // x의 반지름 15로 만들기 위한 함수 호출
	x.show();   //   반지름 = 15 
}