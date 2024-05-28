/*// 20102072 박주연
// vector를 이용한 merge 함수 실습 프로그램
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	// 실수형 배열 선언 및 초기화
	double a[] = { 1.2, 4.6, 5.1, 5.7, 8.0 };
	double b[] = { 2.2, 3.6, 4.6, 7.7, 9.9 };

	vector<double> result(10);

	cout << "첫 번째 요소 : ";
	for (int i = 0; i < 5; i++)
		cout << a[i] << ' ';
	cout << endl;

	cout << "두 번째 요소 : ";
	for (int i = 0; i < 5; i++)
		cout << b[i] << ' ';
	cout << endl;

	// merge 함수를 통해 배열 a와 b의 실수 요소들을 병합
	merge(a, a + 5, b, b + 5, result.begin());
	cout << "\n병합 결과 : ";
	for (int i = 0; i < 10; i++)
		cout << result[i] << ' ';
	cout << endl;
}*/