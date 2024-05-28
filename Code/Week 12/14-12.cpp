/*// 20102072 박주연
// for_each 알고리즘으로 함수 명령에 의해 처리된 결과를 반환하는 프로그램
#include <iostream>
#include <algorithm>
using namespace std;

void result(int a) { // 매개변수 a에 10을 곱하는 함수
	cout << (a * 10) << ' ';
}

int main() {
	cout << "기존의 배열 값" << endl;
	// 정수형 배열 선언 및 초기화
	int inches[] = { 1, 9, 2, 8, 4 }; 

	for (int num = 0; num <= 4; num++)
		cout << inches[num] << " ";
	cout << endl;

	cout << "\n함수에 의해 변경된 결과" << endl;
	// for_each 함수를 이용하여 result 함수의 연산 결과 반환
	for_each(inches, inches + 5, result);
	cout << endl;
}*/

