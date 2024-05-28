/*// 20102072 박주연
// 벡터 자료 구조에서 자료의 삽입과 삭제 연산 프로그램
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
	// 자료의 삭제
	for (int i = pos; i < v.size() - 1; i++)
		v[i] = v[i + 1];
	v.pop_back();
}
void print(vector<string> v) {
	// 벡터 전체 출력
	for (int i = 0; i < v.size(); i++)
		cout << "[" << i << "] " << v[i] << "\n";
	cout << endl;
}

int main() {
	vector<string> member(5); // 벡터의 선언 및 자료 입력
	member[0] = "홍길동";
	member[1] = "이순신";
	member[2] = "강감찬";
	member[3] = "임꺽정";
	member[4] = "권율";

	cout << "입력된 데이터 !!" << endl;
	print(member);

	int pos;
	cout << "삽입할 위치 : ";   cin >> pos;
	insert(member, pos, "류성용");
	print(member);

	cout << "삭제할 위치 : ";   cin >> pos;
	erase(member, pos);
	print(member);

	// sort함수를 이용하여 member 데이터를 오름차순으로 정렬
	cout << "오름차순 정렬 !!" << endl;
	sort(member.begin(), member.end());
	print(member);
}*/



