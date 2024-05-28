/*// 20102072 ���ֿ�
// priority_queue�� ����� ��� ���α׷�
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

	// size() �Լ��� ����, ������ ũ�� �˾ƺ���
	cout << "�ִ� ������ ũ�� : " << maxHeap.size() << endl;

	cout << "�ִ� ������ ���� : ";
	while (!maxHeap.empty()) {
		cout << maxHeap.top() << " ";
		maxHeap.pop();
	}

	cout << "\n�ִ� ������ ������ϱ�? ";
	if (true == maxHeap.empty())	// empty() �Լ��� ���� ������ ����� ���,
		cout << " ��" << endl;		// ���� ��ȯ
	else
		cout << " �ƴϿ�" << endl;

	priority_queue<int, vector<int>, greater<int>> minHeap;
	for (int i = 0; i < 5; i++) {
		minHeap.push(i); // 0 ~ 4�� �ּ� ������ ����
	}

	// size() �Լ��� ����, ������ ũ�� �˾ƺ���
	cout << "\n�ּ� ������ ũ�� : " << minHeap.size() << endl;

	cout << "�ּ� ������ ������ϱ�? ";
	if (true == minHeap.empty())	// empty() �Լ��� ���� ������ ����� ���,
		cout << " ��" << endl;		// ���� ��ȯ
	else
		cout << " �ƴϿ�" << endl;

	cout << "�ּ� ������ ���� : ";
	while (!minHeap.empty()) {
		cout << minHeap.top() << " ";
		minHeap.pop();
	}
	cout << endl;
}*/




