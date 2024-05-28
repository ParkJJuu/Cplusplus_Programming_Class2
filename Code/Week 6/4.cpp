// 20102072 박주연
/*4. main() 함수가 실행되도록 Point 클래스를 상속받은 ColorPoint 클래스를 완성하시오.*/
#include <iostream>
#include <string>
using namespace std;

class Point {
	int x, y;
public:
	Point(int x, int y) {
		this->x = x; this->y = y;
	}
	int getX() { return x; }
	int getY() { return y; }
protected:
	void move(int x, int y) { this->x = x; this->y = y; }
};

class ColorPoint : public Point {
	string color;
public:
	ColorPoint(int x, int y, string color) : Point(x, y) {
		this->color = color;
	}

	void setPoint(int x, int y) {
		move(x, y);
	}

	void setColor(string color) {
		this->color = color;
	}

	void show() {
		cout << color << " 색의 좌표 " << '(' << getX() << ", " << getY() << ')' << endl;
	}
};

int main() {
	ColorPoint cp(5, 5, "RED");
	cp.show();	// RED 색의 좌표 (5, 5)
	cp.setPoint(10, 20);
	cp.setColor("BLUE");	
	cp.show();	// BLUE 색의 좌표 (10, 20) 
}
