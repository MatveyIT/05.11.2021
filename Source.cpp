// Lizogub Matvey �13121
#include <iostream>
using namespace std;
int main() {
	/* ���� ����� ����� n. ����� ��� ��������� n!, n! = 1*2*3..*n
	int n, f=1;
	cin >> n;
	for (int i = 1; i < n; i++) {
		f *= i;
	}
	cout << f;
	*/
	/*1. ��������� ���������, ��������� �� ����� �������� ����� �� a �� b.
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		cout << i * i << ' ';
	}
	*/
	/*� ���������� �������� n �����. ��������� ���������, ������� ���������� ���-�� �������������,
	���-�� ������������� � ���-�� ����� ����� �������� �����.�������� n �������� � ����������.*/
	int n, x, kp=0, ko=0, kn=0;
	for (int i = 0; i < 0; i++) {
	cin >> x;
		if (x > 0) kp++;
		else if (x < 0) ko++;
		else if (x == 0) km++;
	}
	cout << kp << ' ' << ko << ' ' << kn;
	

	return 0;
}