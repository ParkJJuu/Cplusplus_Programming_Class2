// 20102072 ���ֿ�
// put, flush �޼ҵ带 �̿��� ��� ���α׷� 
#include <iostream>
using namespace std;

int main() {
	// put �Լ��� �������� ����Ͽ� ���
	cout.put('C').put('+').put('+') << "\n";
	// put �Լ��� ���ڸ� ����ϴ� �Լ��̱� ������, �� ��ȯ����
	// ���ڸ� �Է��ϸ�, ���ڷ� ��µ�
	cout.put(65) << endl;
	cout.put(66) << endl;

	// char Ÿ���� �迭 fruit
	char fruit[] = "Apple";

	int len = strlen(fruit) + 1;
	cout << "====================\n";
	for (int i = 0; i < len; i++) // ���ڿ� 1���� �߰��� ���
		cout.write(fruit, i) << endl;
	cout << "\n====================\n\n";
	// len - 1 ���� for �ݺ��� ����
	for (int i = len - 1; i > 0; i--) // ���ڿ� 1���� ���鼭 ���
		cout.write(fruit, i) << endl;

	// flush �Լ� ����
	flush(cout); 
	cout << "\n�ȳ��ϼ��� ���� ��ħ�Դϴ�!!" << flush;
	cout << "\nC++ ���α׷���!!" << endl;
}


