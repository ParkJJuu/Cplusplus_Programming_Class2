/*// 20102072 박주연
// set의 지정과 검색 프로그램
#include <iostream>
#include <set>
#include <functional>
using namespace std;

int main() {
	set<int> s;
	s.insert(40);
	s.insert(30);	// set은 중복 비허용
	s.insert(30);	// 동일한 데이터가 있으면, 그 데이터는 더 이상 들어가지 않는다.
	s.insert(50);
	s.insert(80);
	s.insert(10);
	s.insert(90);
	s.insert(70);

	set<int>::iterator iter;
	cout << "set의 요소 출력" << endl;
	for (iter = s.begin(); iter != s.end(); ++iter)
		cout << *iter << " ";
	cout << endl;

	// count는 해당 원소의 개수를 반환.
	// 30 원소가 2개 삽입되었음에도 중복을 허용하지 않기 때문에 1반환
	cout << "\n원소 30의 개수 : " << s.count(30) << endl;
	// 50 원소가 1개 있기 때문에	1반환
	cout << "원소 50의 개수 : " << s.count(50) << endl;
	// 100 원소가 없기 때문에 1반환
	cout << "원소 100의 개수 : " << s.count(100) << endl;

	// find는 해당 원소를 찾는다. 원소가 없으면 end() 를 반환
	iter = s.find(30);
	cout << endl;
	if (iter != s.end())
		cout << *iter
		<< "가 set에 있다" << endl;
	else
		cout << "30이 set에 없다." << endl;

	cout << *s.lower_bound(30) << endl;				// 30 원소의 첫번째
	cout << *s.upper_bound(30) << endl;	// 30 원소 마지막의 다음 원소

	// 55 원소는 존재하지 않기 때문에, 55의 다음 수, 70 원소가 출력됨을 확인
	cout << "\n55 요소 출력 : " << *s.lower_bound(55) << endl;
	cout << "55 다음 요소 출력 : " << *s.upper_bound(55) << endl << endl;

	set<int>::iterator iter_lower_55;
	set<int>::iterator iter_upper_55;

	iter_lower_55 = s.lower_bound(55);
	iter_upper_55 = s.upper_bound(55);

	// 55의 첫번째 원소와 다음원소를 가리키는 iter가 같으면 값이 없다
	if (iter_lower_55 != iter_upper_55)
		cout << "55가 set에 있다" << endl;
	else
		// 	iter_lower_55와 	iter_upper_55에 담긴 값이 같다면.. 
		cout << "55가 set에 없다" << endl;

	// equal_range는 해당 원소의 범위를 pair로 반환한다.
	pair<set<int>::iterator, set<int>::iterator> iter_pair;

	iter_pair = s.equal_range(30);
	cout << *iter_pair.first << endl;
	cout << *iter_pair.second << endl << endl;

	iter_pair = s.equal_range(55);
	if (iter_pair.first != iter_pair.second)
		cout << "55가 set에 있다 " << endl;
	else
		cout << "55가 set에 없다 " << endl;
}*/




