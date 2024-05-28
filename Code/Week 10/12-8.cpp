// 20102072 박주연
// put 메소드를 이용한 출력 프로그램
#include <iostream>
using namespace std;

int main() {
	char array[5];		// 배열 array를 가리키는 포인터 p 선언
	char *p = array;

	cout << "5개의 정수 입력 : ";
	for (int i = 0; i < 5; i++) {
		cin >> array[i];
	}

	for (int i = 0; i < 5; i++) {
		cout << "array[" << i << "] = ";
		// cout.put 함수를 이용해 p가 가리키는 array 배열의 원소 출력
		// i가 1씩 증가할 때 마다, p는 다음 array 배열을 가리킴 
		cout.put(*(p + i)) << endl;
	}
	cout << endl;
}


