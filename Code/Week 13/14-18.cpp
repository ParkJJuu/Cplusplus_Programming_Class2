/*// 20102072 박주연
// 연결 리스트에서 요소 제거 프로그램
#include <iostream>
#include <list>
using namespace std;

bool Predicate(int n) {
	return n > 40;
}

bool Predicate2(int n) {
	return n < 30;
}

int main() {
	list<int> lt;
	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	lt.push_back(50);

	cout << "리스트 출력" << endl;
	list<int>::iterator iter;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	iter = lt.begin();
	iter++;
	iter++;

	// 3번 데이터 30 제거
	cout << "\n3번 데이터 " << *iter << " 제거" << endl;
	list<int>::iterator iter2 = lt.erase(iter);

	cout << "\n리스트 출력" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	lt.push_back(10);
	lt.push_back(20);
	lt.push_back(30);
	lt.push_back(40);
	cout << "\n4개의 요소 추가" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	// 리스트에서 원소 10 제거
	lt.remove(10);
	cout << "\n리스트에서 10의 요소 삭제" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	// Predicate 함수에 해당하는 원소 제거 (40보다 크다)
	lt.remove_if(Predicate);
	cout << "\n리스트에서 40보다 큰 요소 삭제" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;

	// Predicate2 함수에 해당하는 원소 제거 (30보다 작다)
	lt.remove_if(Predicate2);
	// remove_if 함수를 사용하여 참인 요소들만 모두 삭제
	cout << "\n리스트에서 30보다 작은 요소 삭제" << endl;
	for (iter = lt.begin(); iter != lt.end(); ++iter) {
		cout << *iter << ' ';
	}
	cout << endl;
}*/
