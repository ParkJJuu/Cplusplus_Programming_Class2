// 20102072 박주연
#include <iostream>
using namespace std;

class Point {
private:
	int xpos, ypos;

public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}

	void ShowPoint() const { cout << '[' << xpos << ", "
		<< ypos << ']' << endl;
	}

	friend ostream& operator << (ostream&, const Point&);
	friend istream& operator >> (istream&, Point & pos);
};

ostream& operator << (ostream& os, const Point& pos) {
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl << endl;
	return os;
}

istream& operator >> (istream& is, Point& pos) {
	is >> pos.xpos >> pos.ypos;
	return is;
}

int main() {
	Point pos1;
	cout << "x의 위치 입력 >";
	cin >> pos1;
	cout << pos1;

	Point pos2;
	cout << "y의 위치 입력 >";
	cin >> pos2;
	cout << pos2;
}