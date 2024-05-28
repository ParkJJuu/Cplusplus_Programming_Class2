// 20102072 ���ֿ�
/*1.   main() �� ����ǵ��� �ʿ��� �Լ��� �ϼ��Ͻÿ�.
	: ������ 10�� x�� y�� ������ 5��ŭ �������� ������ 15�� x�� ����� ����*/
#include <iostream>
using namespace std;

class Circle {
	int radius; 
public:	
	Circle(int xy) { this->radius = xy; } // ������
	int getRadius() { return radius; }	
	void setRadius(int r) { radius = r; }
	void show() {
		cout << "������ = " << radius;		// show() �Լ�
	}
};

void increaseBy(Circle &a, Circle &b) {
	int r = a.getRadius() + b.getRadius();
	a.setRadius(r);
}

int main() {
	Circle x(10), y(5);
	increaseBy(x, y); // x�� ������ 15�� ����� ���� �Լ� ȣ��
	x.show();   //   ������ = 15 
}