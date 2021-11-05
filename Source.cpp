// Lizogub Matvey П13121
#include <iostream>
using namespace std;
int main() {
	/* дано целое число n. найти его факториал n!, n! = 1*2*3..*n
	int n, f=1;
	cin >> n;
	for (int i = 1; i < n; i++) {
		f *= i;
	}
	cout << f;
	*/
	/*1. Составьте программу, выводящую на экран квадраты чисел от a до b.
	int a, b;
	cin >> a >> b;
	for (int i = a; i <= b; i++) {
		cout << i * i << ' ';
	}
	*/
	/*С клавиатуры вводятся n чисел. Составьте программу, которая определяет кол-во отрицательных,
	кол-во положительных и кол-во нулей среди введеных чисел.Значение n вводится с клавиатуры.*/
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