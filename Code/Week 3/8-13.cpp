// 20102072 박주연
#include <iostream>
#include <stdlib.h>
using namespace std;

class Array {
	int *p;		// 배열의 시작 주소
	int size;	// 배열의 크기
public:
	Array(int num);				//	생성자
	int &operator [](int i);	// [ ] 연산자 중복 선언
};

Array::Array(int num) {
	p = new int[num];
	if (!p) {
		cout << "메모리 할당 실패!!\n";
		exit(1);
	}
	size = num;
}

int &Array::operator[](int i) {	// [ ] 연산자 중복 정의
	if (i < 0 || i >= size) {	// 배열의 범위 체크
		cout << "\n 배열 bound 에러!!\n";
		exit(1);
	}
	return p[i];
}

int main() {
	Array n(10);				// 10개의 원소를 가지는 객체 배열
	int i = 0;
	for (int i = 0; i < 10; i++)
		n[i] = i * i;			// [ ] 연산자 함수 호출, 값 대입
	cout << endl;

	for (int i = 0; i < 11; i++)
		cout << n[i] << "  ";	// [ ] 연산자 함수 호출
}