// 20102072 ���ֿ�
// ��Ʈ�� ���۱� ��� �� ��� ���α׷�
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
	cout << "100(dec) => " << dec << 100 << endl;	// 100�� 10������ ��ȯ
	cout << 100 << endl;							// 10������ ��ȯ�� 100�� Ȯ��

	cout << "\n100(oct) => " << oct << 100 << endl;	// 100�� 8������ ��ȯ
	cout << 100 << endl;							// 8������ ��ȯ�� 100�� Ȯ��

	cout << "\n100(hex) => " << hex << 100 << endl;	// 100�� 16������ ��ȯ
	cout << 100 << endl << endl;					// 16������ ��ȯ�� 100�� Ȯ��

	cout.fill('=');									// fill�� �̿���, ������ =�� ä��
	cout << setw(10) << "Train" << endl;
	cout << setw(10) << 100 << endl;
	cout << setw(10) << 123.45 << endl << endl;

	cout.fill('*');									// fill�� �̿���, ������ *�� ä��
	cout.setf(ios::left);							// setf�� �̿���, ���� ����
	cout << setw(10) << 100 << endl;				// 100�� �������� ���ĵ��� Ȯ��

	cout.setf(ios::right);							// setf�� �̿���, ���� ����	
	cout << setw(10) << 100 << endl << endl;		// 100�� �������� ���ĵ��� Ȯ��

	cout.setf(ios::showbase);						// setf�� �̿���, 16�� ǥ������ ���
	cout << 100 << endl;							// 100�� 16�� ǥ������ ��µ��� Ȯ��
}



