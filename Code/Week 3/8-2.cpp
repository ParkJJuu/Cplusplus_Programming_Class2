// 20102072 박주연
#include <iostream>
using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int _x = 0, int _y = 0) :x(_x), y(_y) {}
	Point(const Point &p) {
		cout << "Point(const Point &p) 호출 : x = " << p.x
			<< ", y = " << p.y << endl;
		x = p.x;
		y = p.y;
	}
	void ShowPosition();
	friend Point operator+(const Point &p1, const Point &p2);	//friend 선언
};

void Point::ShowPosition() {
	cout << x << " " << y << endl;
}

// 전역 함수 선언
Point operator+(const Point &p1, const Point &p2) {
	Point temp(p1.x + p2.x, p1.y + p2.y);
	return temp;
}

int main() {
	Point p1(1, 2);
	Point p2(2, 3);

	Point p3 = p1 + p2;
	// Point p3 = operator+(p1, p2);
	p3.ShowPosition();
}