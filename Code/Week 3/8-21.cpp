// 20102072 박주연
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class String {
	char *str;
public:
	String(const char * const Str);		//	생성자
	~String();							// 소멸자
	void Print();						// 문자열을 화면에 출력
	String operator = (String data);			// 대입 연산자 오버로딩
	bool operator < (const String &second);		// < 연산자 오버로딩
	bool operator > (const String &second);		// > 연산자 오버로딩
	bool operator == (const String &second);	// == 연산자 오버로딩 
};

String::~String() {
	if (str)
		delete str;
}

String::String(const char * const Str) {
	str = new char[strlen(Str) + 1];
	strcpy(str, Str);
}

void String::Print() {
	cout << str << "\t";
}

bool String::operator < (const String &second) {	// < 연산자 오버로딩
	if (strcmp(str, second.str) < 0)
		return 1;
	else
		return 0;
}

bool String::operator > (const String &second) {	// > 연산자 오버로딩 
	if (strcmp(str, second.str) > 0)
		return 1;
	else
		return 0;
}

bool String::operator == (const String &second) {	// == 연산자 오버로딩 
	if (strcmp(str, second.str) == 0)
		return 1;
	else
		return 0;
}

int main() {
	cout << "<< 두 문자열의 비교 >>\n";
	String str1("Orange");	str1.Print();
	String str2("Apple");	str2.Print();

	if (str1 < str2)
		cout << "=> 두 번째 문자열이 크다." << endl;
	else
		cout << "=> 첫 번째 문자열이 크다." << endl;

	String str3("Blue");	str3.Print();
	String str4("Yellow");	str4.Print();

	if (str3 > str4)
		cout << "=> 첫 번째 문자열이 크다." << endl;
	else
		cout << "=> 두 번째 문자열이 크다." << endl;

	String str5("Watch");	str5.Print();
	String str6("Clock");	str6.Print();

	if (str5 == str6)
		cout << "=> 두 문자열은 같다." << endl;
	else
		cout << "=> 두 문자열은 다르다." << endl;
}