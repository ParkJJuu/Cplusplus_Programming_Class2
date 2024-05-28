// 20102072 ���ֿ�
/*3.  main()�� ����ǵ��� ������ �Լ�(������ �����ε�)�� �ϼ��Ͻÿ�.*/
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
	b = 3 + a; // b�� �������� a�� �������� 3�� ���� ������ ġȯ
	a.show();  // radius = 5
	b.show();  // radius = 8
}
