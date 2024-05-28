// 20102072 ���ֿ�
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

class String {
	char *str;
public:
	String(const char * const Str);		//	������
	~String();							// �Ҹ���
	void Print();						// ���ڿ��� ȭ�鿡 ���
	String operator = (String data);			// ���� ������ �����ε�
	bool operator < (const String &second);		// < ������ �����ε�
	bool operator > (const String &second);		// > ������ �����ε�
	bool operator == (const String &second);	// == ������ �����ε� 
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

bool String::operator < (const String &second) {	// < ������ �����ε�
	if (strcmp(str, second.str) < 0)
		return 1;
	else
		return 0;
}

bool String::operator > (const String &second) {	// > ������ �����ε� 
	if (strcmp(str, second.str) > 0)
		return 1;
	else
		return 0;
}

bool String::operator == (const String &second) {	// == ������ �����ε� 
	if (strcmp(str, second.str) == 0)
		return 1;
	else
		return 0;
}

int main() {
	cout << "<< �� ���ڿ��� �� >>\n";
	String str1("Orange");	str1.Print();
	String str2("Apple");	str2.Print();

	if (str1 < str2)
		cout << "=> �� ��° ���ڿ��� ũ��." << endl;
	else
		cout << "=> ù ��° ���ڿ��� ũ��." << endl;

	String str3("Blue");	str3.Print();
	String str4("Yellow");	str4.Print();

	if (str3 > str4)
		cout << "=> ù ��° ���ڿ��� ũ��." << endl;
	else
		cout << "=> �� ��° ���ڿ��� ũ��." << endl;

	String str5("Watch");	str5.Print();
	String str6("Clock");	str6.Print();

	if (str5 == str6)
		cout << "=> �� ���ڿ��� ����." << endl;
	else
		cout << "=> �� ���ڿ��� �ٸ���." << endl;
}