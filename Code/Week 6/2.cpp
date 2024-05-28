// 20102072 박주연
/*2.  클래스 Accumulator의 add() 함수를 통해 전달된 값을 누계하는 내용이다.
main() 이 실행될 수 있도록 클래스 Accumulator의 함수를 완성하시오.*/
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
	acc.add(3).add(4).add(5);  // acc의 value = 22
	cout << acc.get() << endl; // 22 출력
}