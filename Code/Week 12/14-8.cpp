/*// 20102072 ���ֿ�
// ������� ������ �˻� �ǽ� ���α׷�
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int ar1[] = { 3,1,4,1,5,9,2,6,5,3,5,8,9,9,9,3,2,3,1,5,9,2,2,2,2 };
	int ar2[] = { 1, 5, 9 };
	int *p;

	// serarch �Լ��� �Ű� ���� ��Ҹ� �迭�� �̸����� ����
	p = search(ar1, ar1 + 25, ar2, ar2 + 3);
	if (p != ar1 + 25) {
		cout << (p - ar1) << "��°���� ������ �߰ߵǾ����ϴ�.\n" << endl;
	}

	p = find_end(ar1, ar1 + 25, ar2, ar2 + 3);
	if (p != ar1 + 25) {
		cout << (p - ar1) << "��°���� ������ �߰ߵǾ����ϴ�.\n" << endl;
	}

	// ar1�迭�� ��� �߿� �ϳ��� 2�� 4�� ���ӵǴ� ���� �߰�
	p = search_n(ar1, ar1 + 25, 4, 2);
	if (p != ar1 + 25) {
		cout << (p - ar1) << "��°���� 4������ 2�� �߰��߽��ϴ�." << endl;
	}
}*/

