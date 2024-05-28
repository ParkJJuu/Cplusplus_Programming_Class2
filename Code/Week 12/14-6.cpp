/*// 20102072 박주연
// 문자열 sort의 과정과 결과 실습 프로그램
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
#include <functional>	// 내림차순 정렬 greater 사용
using namespace std;

bool compare(string a, string b) {
	cout << "비교(" << a << "," << b << ")" << endl;
	return (a.compare(b) < 0);
}

int main() {
	string str[] = { "홍길동", "이순신", "강감찬", "임꺽정", "권율", "류성룡" };
	vector<string> myvector(str, str + 6);
	vector<string>::iterator it;

	// 보기 좋게 코드 정리 
	sort(myvector.begin(), myvector.end(), compare);

	cout << "\nvector 포함 : ";
	for (it = myvector.begin(); it != myvector.end(); ++it)
		cout << *it << ' ';

	// greater을 이용하여 str 배열의 요소를 내림차순 정렬
	sort(myvector.begin(), myvector.end(), greater<string>());
	cout << "\n\nvector 포함 : ";
	for (it = myvector.begin(); it != myvector.end(); ++it)
		cout << *it << ' ';
	cout << endl;
}*/



