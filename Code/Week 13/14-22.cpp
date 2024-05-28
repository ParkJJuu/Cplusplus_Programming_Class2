/*// 20102072 ���ֿ�
// set�� ������ �˻� ���α׷�
#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main() {
	set<int> s;
	s.insert(40);
	s.insert(30);	// set�� �ߺ� �����
	s.insert(30);	// ������ �����Ͱ� ������, �� �����ʹ� �� �̻� ���� �ʴ´�.
	s.insert(50);
	s.insert(80);
	s.insert(10);
	s.insert(90);
	s.insert(70);

	set<int>::iterator iter;
	cout << "set�� ��� ���" << endl;
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// count�� �ش� ������ ������ ��ȯ.
	// 30 ���Ұ� 2�� ���ԵǾ������� �ߺ��� ������� �ʱ� ������ 1��ȯ
	cout << "\n���� 30�� ���� : " << s.count(30) << endl;
	// 50 ���Ұ� 1�� �ֱ� ������	1��ȯ
	cout << "���� 50�� ���� : " << s.count(50) << endl;
	// 100 ���Ұ� ���� ������ 1��ȯ
	cout << "���� 100�� ���� : " << s.count(100) << endl;

	// find�� �ش� ���Ҹ� ã�´�. ���Ұ� ������ end() �� ��ȯ
	iter = s.find(30);
	cout << endl;
	if (iter != s.end())
		cout << *iter
		<< "�� set�� �ִ�" << endl;
	else
		cout << "30�� set�� ����." << endl;

	cout << *s.lower_bound(30) << endl;				// 30 ������ ù��°
	cout << *s.upper_bound(30) << endl;	// 30 ���� �������� ���� ����

	// 55 ���Ҵ� �������� �ʱ� ������, 55�� ���� ��, 70 ���Ұ� ��µ��� Ȯ��
	cout << "\n55 ��� ��� : " << *s.lower_bound(55) << endl;
	cout << "55 ���� ��� ��� : " << *s.upper_bound(55) << endl << endl;

	set<int>::iterator iter_lower_55;
	set<int>::iterator iter_upper_55;

	iter_lower_55 = s.lower_bound(55);
	iter_upper_55 = s.upper_bound(55);

	// 55�� ù��° ���ҿ� �������Ҹ� ����Ű�� iter�� ������ ���� ����
	if (iter_lower_55 != iter_upper_55)
		cout << "55�� set�� �ִ�" << endl;
	else
		// 	iter_lower_55�� 	iter_upper_55�� ��� ���� ���ٸ�.. 
		cout << "55�� set�� ����" << endl;

	// equal_range�� �ش� ������ ������ pair�� ��ȯ�Ѵ�.
	pair<set<int>::iterator, set<int>::iterator> iter_pair;

	iter_pair = s.equal_range(30);
	cout << *iter_pair.first << endl;
	cout << *iter_pair.second << endl << endl;

	iter_pair = s.equal_range(55);
	if (iter_pair.first != iter_pair.second)
		cout << "55�� set�� �ִ� " << endl;
	else
		cout << "55�� set�� ���� " << endl;
}*/




