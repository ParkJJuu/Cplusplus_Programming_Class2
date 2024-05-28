// 20102072 박주연
// get, getline() 메소드 실습 프로그램
#include <iostream>
#include <string>
using namespace std;

int main() {
	// getline(cin, 인수) 형태로 사용하기 위해, name 변수를 string 타입으로 선언
	string name;
	char age[5];

	cout << "이름 : ";
	getline(cin, name);		// getline 함수를 getline(cin, 인수) 형태로 선언

	cout << "나이 : ";
	cin.get(age, 5);		// 조잡했던 코드를 간략히 정리
	cout << endl << name << "씨 당신은 " << age << "살 이군요!!" << endl;
}


