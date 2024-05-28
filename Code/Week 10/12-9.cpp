// 20102072 박주연
// put, flush 메소드를 이용한 출력 프로그램 
#include <iostream>
using namespace std;

int main() {
	// put 함수를 연속으로 사용하여 출력
	cout.put('C').put('+').put('+') << "\n";
	// put 함수는 문자를 출력하는 함수이기 때문에, 형 변환없이
	// 숫자를 입력하면, 문자로 출력됨
	cout.put(65) << endl;
	cout.put(66) << endl;

	// char 타입의 배열 fruit
	char fruit[] = "Apple";

	int len = strlen(fruit) + 1;
	cout << "====================\n";
	for (int i = 0; i < len; i++) // 문자열 1개씩 추가로 출력
		cout.write(fruit, i) << endl;
	cout << "\n====================\n\n";
	// len - 1 부터 for 반복문 시작
	for (int i = len - 1; i > 0; i--) // 문자열 1개씩 빼면서 출력
		cout.write(fruit, i) << endl;

	// flush 함수 선언
	flush(cout); 
	cout << "\n안녕하세요 좋은 아침입니다!!" << flush;
	cout << "\nC++ 프로그래밍!!" << endl;
}


