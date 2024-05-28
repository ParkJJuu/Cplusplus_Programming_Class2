/*// 20102072 박주연
// 순방향과 역방향 검색 실습 프로그램
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int ar1[] = { 3,1,4,1,5,9,2,6,5,3,5,8,9,9,9,3,2,3,1,5,9,2,2,2,2 };
	int ar2[] = { 1, 5, 9 };
	int *p;

	// serarch 함수의 매개 변수 요소를 배열의 이름으로 구현
	p = search(ar1, ar1 + 25, ar2, ar2 + 3);
	if (p != ar1 + 25) {
		cout << (p - ar1) << "번째에서 구간이 발견되었습니다.\n" << endl;
	}

	p = find_end(ar1, ar1 + 25, ar2, ar2 + 3);
	if (p != ar1 + 25) {
		cout << (p - ar1) << "번째에서 구간이 발견되었습니다.\n" << endl;
	}

	// ar1배열의 요소 중에 하나인 2가 4번 연속되는 구간 발견
	p = search_n(ar1, ar1 + 25, 4, 2);
	if (p != ar1 + 25) {
		cout << (p - ar1) << "번째에서 4연속의 2를 발견했습니다." << endl;
	}
}*/

