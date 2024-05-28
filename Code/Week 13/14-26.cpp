// 20102072 박주연
// 큐의 삽입과 검색 프로그램
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<string> strQueue;      // 큐의 생성
	string word, str;
	cout << "6개의 단어를 입력하세요 : ";
	for (int i = 1; i <= 6; i++) {
		cin >> word;
		strQueue.push(word);     //요소를 뒤에서 삽입
	}

	// 앞과 뒤 그리고 크기를 검색
	cout << "\nFront 요소 : " << strQueue.front() << endl;
	cout << "Back 요소 : " << strQueue.back() << endl;
	cout << "Queue의 크기 : " << strQueue.size() << endl;

	// 큐의 출력 (큐의 앞의 요소를 제거하면서 큐의 요소를 출력)
	cout << "\nQueue 의 내용 : ";
	while (!strQueue.empty()) {
		cout << strQueue.front() << " ";
		strQueue.pop();     // 앞에서 요소를 제거
	}

	// 큐의 공백 확인
	cout << "\n\nQueue 가 비었음을 확인 : ";
	if (strQueue.empty())	// 큐가 공백일 경우, 비었음을 출력
		cout << "O\n" << "Queue 가 비었습니다!!" << endl;
	else  // 큐가 공백이 아닐 경우, 비지 않았음을 출력
		cout << "X\n" << "Queue 가 비지 않았습니다!!" << endl;
}





