// 20102072 ���ֿ�
// ť�� ���԰� �˻� ���α׷�
#include <iostream>
#include <queue>
#include <string>
using namespace std;

int main() {
	queue<string> strQueue;      // ť�� ����
	string word, str;
	cout << "6���� �ܾ �Է��ϼ��� : ";
	for (int i = 1; i <= 6; i++) {
		cin >> word;
		strQueue.push(word);     //��Ҹ� �ڿ��� ����
	}

	// �հ� �� �׸��� ũ�⸦ �˻�
	cout << "\nFront ��� : " << strQueue.front() << endl;
	cout << "Back ��� : " << strQueue.back() << endl;
	cout << "Queue�� ũ�� : " << strQueue.size() << endl;

	// ť�� ��� (ť�� ���� ��Ҹ� �����ϸ鼭 ť�� ��Ҹ� ���)
	cout << "\nQueue �� ���� : ";
	while (!strQueue.empty()) {
		cout << strQueue.front() << " ";
		strQueue.pop();     // �տ��� ��Ҹ� ����
	}

	// ť�� ���� Ȯ��
	cout << "\n\nQueue �� ������� Ȯ�� : ";
	if (strQueue.empty())	// ť�� ������ ���, ������� ���
		cout << "O\n" << "Queue �� ������ϴ�!!" << endl;
	else  // ť�� ������ �ƴ� ���, ���� �ʾ����� ���
		cout << "X\n" << "Queue �� ���� �ʾҽ��ϴ�!!" << endl;
}





