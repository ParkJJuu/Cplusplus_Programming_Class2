/*// 20102072 ���ֿ�
// ���� �ڷ� �������� �ڷ��� ���԰� ���� ���� ���α׷�
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

void insert(vector<string>& v, int pos, string str) {
	int last = v.size() - 1;
	v.push_back(v[last]);
	for (int i = last; i > pos; i--)
		v[i] = v[i - 1];
	v[pos] = str;
}

void erase(vector<string>& v, int pos) {
	// �ڷ��� ����
	for (int i = pos; i < v.size() - 1; i++)
		v[i] = v[i + 1];
	v.pop_back();
}
void print(vector<string> v) {
	// ���� ��ü ���
	for (int i = 0; i < v.size(); i++)
		cout << "[" << i << "] " << v[i] << "\n";
	cout << endl;
}

int main() {
	vector<string> member(5); // ������ ���� �� �ڷ� �Է�
	member[0] = "ȫ�浿";
	member[1] = "�̼���";
	member[2] = "������";
	member[3] = "�Ӳ���";
	member[4] = "����";

	cout << "�Էµ� ������ !!" << endl;
	print(member);

	int pos;
	cout << "������ ��ġ : ";   cin >> pos;
	insert(member, pos, "������");
	print(member);

	cout << "������ ��ġ : ";   cin >> pos;
	erase(member, pos);
	print(member);

	// sort�Լ��� �̿��Ͽ� member �����͸� ������������ ����
	cout << "�������� ���� !!" << endl;
	sort(member.begin(), member.end());
	print(member);
}*/



