/*// 20102072 박주연
// priority_queue의 구축과 출력 프로그램
#include <iostream>
#include <vector>
#include <queue>
#include <functional>
using namespace std;

int main() {
	priority_queue<int> maxHeap;
	for (int i = 0; i < 10; i++) {
		maxHeap.push(i);
	}

	// size() 함수를 통해, 히프의 크기 알아보기
	cout << "최대 히프의 크기 : " << maxHeap.size() << endl;

	cout << "최대 히프의 내용 : ";
	while (!maxHeap.empty()) {
		cout << maxHeap.top() << " ";
		maxHeap.pop();
	}

	cout << "\n최대 히프가 비었습니까? ";
	if (true == maxHeap.empty())	// empty() 함수를 통해 히프가 비었을 경우,
		cout << " 예" << endl;		// 예를 반환
	else
		cout << " 아니오" << endl;

	priority_queue<int, vector<int>, greater<int>> minHeap;
	for (int i = 0; i < 5; i++) {
		minHeap.push(i); // 0 ~ 4를 최소 히프에 삽입
	}

	// size() 함수를 통해, 히프의 크기 알아보기
	cout << "\n최소 히프의 크기 : " << minHeap.size() << endl;

	cout << "최소 히프가 비었습니까? ";
	if (true == minHeap.empty())	// empty() 함수를 통해 히프가 비었을 경우,
		cout << " 예" << endl;		// 예를 반환
	else
		cout << " 아니오" << endl;

	cout << "최소 히프의 내용 : ";
	while (!minHeap.empty()) {
		cout << minHeap.top() << " ";
		minHeap.pop();
	}
	cout << endl;
}*/




