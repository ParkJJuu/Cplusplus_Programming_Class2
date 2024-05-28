// 20102072 박주연
/* transform 알고리즘으로 함수 명령에 의해 처리된 결과를
대상 배열명에 반환하는 실습 프로그램*/
#include <iostream>
#include <algorithm>
using namespace std;

int result(int in) { // 매개변수 in에 10을 곱하는 함수
	return (in * 10);
}

int main() {
	// 정수형 배열 선언 및 초기화
	int a[] = { 3, 6, 1, 12, 4 };
	int b[5] = { 0 };

	int result(int);

	cout << "원본 배열 요소 " << endl;
	for (int num = 0; num <= 4; num++)
		cout << a[num] << " ";
	cout << endl;

	// transform 함수를 이용하여 result 함수의 연산 결과를 b에 저장
	transform(a, a + 5, b, result);
	cout << "\n변환 배열 요소 " << endl;
	for (int j = 0; j < 5; j++)
		cout << b[j] << ' ';
	cout << endl;

	// sort 함수를 이용하여 b 배열의 요소를 오름차순으로 정렬
	sort(b, b + 5);
	cout << "\n변환 배열 오름차순 정렬 " << endl;
	for (int j = 0; j < 5; j++)
		cout << b[j] << ' ';
	cout << endl;
}

