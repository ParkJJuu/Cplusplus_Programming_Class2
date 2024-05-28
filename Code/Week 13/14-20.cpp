/*// 20102072 박주연
// map 요소의 할당과 추가 삭제
#include <iostream> 
#include <iterator> 
#include <map> 
using namespace std;

int main() {
	// map1의 선언
	map<int, int> map1;

	// 요소의 추가 
	map1.insert(pair<int, int>(1, 40));
	map1.insert(pair<int, int>(2, 30));
	map1.insert(pair<int, int>(3, 60));
	map1.insert(pair<int, int>(4, 20));
	map1.insert(pair<int, int>(5, 50));
	map1.insert(pair<int, int>(6, 50));
	map1.insert(pair<int, int>(7, 10));

	// map1의 출력
	map<int, int>::iterator itr;
	cout << "map1의 요소 출력\n";
	cout << "\t키\t요소\n";
	for (itr = map1.begin(); itr != map1.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// map1에서 map2로 요소의 할당
	map<int, int> map2(map1.begin(), map1.end());

	// map2의 출력
	cout << "map2의 요소 출력\n";
	cout << "\t키\t요소\n";
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	cout << "map2의 키 3보다 작은 요소 삭제" << endl;
	cout << "\t키\t요소\n";
	map2.erase(map2.begin(), map2.find(3));
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}

	int num;
	num = map2.erase(4);
	cout << "\nmap2의 4번째 키 삭제되었음 " << endl;
	cout << "\t키\t요소\n";
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// map2의 키 삽입
	map2[8] = 20;	// 키 8, 값 20
	cout << "\nmap2의 8번째 키 삽입 " << endl;
	cout << "\t키\t요소\n";
	for (itr = map2.begin(); itr != map2.end(); ++itr) {
		cout << '\t' << itr->first
			<< '\t' << itr->second << '\n';
	}
	cout << endl;

	// map2의 3번 요소
	cout << "map2의 3번 요소 : " << "\t키 = " << map2.lower_bound(3)->first << '\t';
	cout << "\t요소 = " << map2.lower_bound(3)->second << endl;

	// map2의 3번 다음 요소 출력 (4번 키를 삭제했기 때문에 5번 요소가 출력됨)
	cout << "map2의 3번 다음 요소 : " << "\t키 = " << map2.upper_bound(3)->first << '\t';
	cout << "\t요소 = " << map2.upper_bound(3)->second << endl;
}*/


