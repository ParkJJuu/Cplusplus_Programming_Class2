/*// 20102072 박주연
// stack의 선언과 pop 연산 프로그램
#include <iostream> 
#include <stack> 
using namespace std;

void showstack(stack <int> s) {
	while (!s.empty()) {
		cout << '\t' << s.top();
		s.pop();
	}
	cout << '\n';
}

int main() {
	stack <int> s;
	s.push(10);
	s.push(30);
	s.push(20);
	s.push(5);
	s.push(1);

	cout << "현재 스텍 요소 : ";
	showstack(s); // 현재 값 출력
	cout << "\n현재 스텍 크기 : ";
	cout << s.size();
	cout << "\n현재 스텍 맨위 요소 : ";
	cout << s.top() << endl << endl;

	// for문과 pop() 함수를 이용하여 스텍의 요소 삭제
	for (int i = 1; i < 6; i++) {
		cout << "마지막 요소 삭제 " << endl;
		s.pop();
		cout << "현재 스텍 요소 : ";
		showstack(s);
		cout << endl;
	}

	cout << "스텍의 모든 요소가 삭제되었습니다 !!" << endl;
}*/


