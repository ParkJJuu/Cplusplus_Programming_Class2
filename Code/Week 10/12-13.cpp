// 20102072 박주연
// 스트림 조작기 사용 및 출력 프로그램
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "100(dec) => " << dec << 100 << endl;	// 100을 10진수로 변환
	cout << 100 << endl;							// 10진수로 변환된 100값 확인

	cout << "\n100(oct) => " << oct << 100 << endl;	// 100을 8진수로 변환
	cout << 100 << endl;							// 8진수로 변환된 100값 확인

	cout << "\n100(hex) => " << hex << 100 << endl;	// 100을 16진수로 변환
	cout << 100 << endl << endl;					// 16진수로 변환된 100값 확인

	cout.fill('=');									// fill을 이용해, 공백을 =로 채움
	cout << setw(10) << "Train" << endl;
	cout << setw(10) << 100 << endl;
	cout << setw(10) << 123.45 << endl << endl;

	cout.fill('*');									// fill을 이용해, 공백을 *로 채움
	cout.setf(ios::left);							// setf를 이용해, 좌측 정렬
	cout << setw(10) << 100 << endl;				// 100이 좌측으로 정렬됨을 확인

	cout.setf(ios::right);							// setf를 이용해, 우측 정렬	
	cout << setw(10) << 100 << endl << endl;		// 100이 우측으로 정렬됨을 확인

	cout.setf(ios::showbase);						// setf를 이용해, 16진 표식으로 출력
	cout << 100 << endl;							// 100이 16진 표식으로 출력됨을 확인
}



