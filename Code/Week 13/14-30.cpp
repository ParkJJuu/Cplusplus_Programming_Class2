/*// 20102072 박주연
// deque의 삽입과 출력 프로그램
#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> dq; 
	dq.push_back(10);
	dq.push_back(20);
	dq.push_back(30);
	dq.push_back(40);
	dq.push_back(50);
	dq.push_back(60);

	// 데큐 요소 출력
	cout << "데큐 요소의 출력" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;

	dq.push_front(90);
	dq.push_front(100);
	cout << "\n추가연산 후의 데큐 요소 출력" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;

	// pop_back() 함수를 이용하여 데큐의 마지막 원소 제거
	// 50, 60 삭제
	dq.pop_back();
	dq.pop_back();
	cout << "\n삭제연산 후의 데큐 요소 출력" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;

	// pop_front() 함수를 이용하여 데큐의 첫 원소 제거
	// 100, 90 삭제
	dq.pop_front();
	dq.pop_front();
	cout << "\n첫 요소 삭제연산 후의 데큐 요소 출력" << endl;
	for (int i = 0; i < dq.size(); ++i) {
		cout << dq[i] << ' ';
	}
	cout << endl;
	cout << "====================================" << endl;

	// 새로운 dq를 구축하고 복사
	deque<int>::iterator iter;
	deque<int>::iterator iter2;
	cout << "\n새로운 데큐 요소의 출력" << endl;
	for (iter = dq.begin(); iter != dq.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter = dq.begin() + 2;            
	iter2 = dq.insert(iter, 500);    
	cout << "\n삽입할 요소의 출력\n" << *iter2 << endl;
	cout << "\n전체 요소의 출력" << endl;
	for (iter = dq.begin(); iter != dq.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter = dq.begin() + 3;   // 데크의 4번째 원소에 접근
	// 데큐의 4번째 원소 삭제
	cout << "\n삭제할 요소의 출력\n" << *iter << endl;
	dq.erase(iter);			 // 30 삭제
	cout << "\n전체 요소의 출력" << endl;
	for (iter = dq.begin(); iter != dq.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
}*/


