/*// 20102072 ���ֿ�
// map ����� �Ҵ�� �߰� ����
#include <iostream> 
#include <iterator> 
#include <map> 
using namespace std;

int main() {
	// map1�� ����
	map<int, int> map1;

	// ����� �߰� 
	map1.insert(pair<int, int>(1, 40));
	map1.insert(pair<int, int>(2, 30));
	map1.insert(pair<int, int>(3, 60));
	map1.insert(pair<int, int>(4, 20));
	map1.insert(pair<int, int>(5, 50));
	map1.insert(pair<int, int>(6, 50));
	map1.insert(pair<int, int>(7, 10));

	// map1�� ���
	map<int, int>::iterator itr;
	cout << "map1�� ��� ���\n";
	cout << "\tŰ\t���\n";
	for (itr = map1.begin(); itr != map1.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// map1���� map2�� ����� �Ҵ�
	map<int, int> map2(map1.begin(), map1.end());

	// map2�� ���
	cout << "map2�� ��� ���\n";
	cout << "\tŰ\t���\n";
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	cout << "map2�� Ű 3���� ���� ��� ����" << endl;
	cout << "\tŰ\t���\n";
	map2.erase(map2.begin(), map2.find(3));
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	int num;
	num = map2.erase(4);
	cout << "\nmap2�� 4��° Ű �����Ǿ��� " << endl;
	cout << "\tŰ\t���\n";
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// map2�� Ű ����
	map2[8] = 20;	// Ű 8, �� 20
	cout << "\nmap2�� 8��° Ű ���� " << endl;
	cout << "\tŰ\t���\n";
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// map2�� 3�� ���
	cout << "map2�� 3�� ��� : " << "\tŰ = " << map2.lower_bound(3)->first << '\t';
	cout << "\t��� = " << map2.lower_bound(3)->second << endl;

	// map2�� 3�� ���� ��� ��� (4�� Ű�� �����߱� ������ 5�� ��Ұ� ��µ�)
	cout << "map2�� 3�� ���� ��� : " << "\tŰ = " << map2.upper_bound(3)->first << '\t';
	cout << "\t��� = " << map2.upper_bound(3)->second << endl;
}*/


