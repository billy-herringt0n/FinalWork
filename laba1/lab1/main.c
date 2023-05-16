#include<stdio.h>
#include<math.h>
#include <locale.h>

void main() {
	const double k1 = 2.0;
	const double k2 = 1.0;
	const double k3 = 10;
	double x;
	double y;
	double ln; // переменная для вычисления логарифма
	double tg; 
	double eax;
	double b; 
	double c;
	setlocale(LC_ALL, ".1251");
	printf("Введите число x\n");
	scanf_s("%lf", &x);
	ln = log(x);
	eax = (k1 + x) / pow(x, 2);
	tg = tan(x);
	b = sqrt(pow(x, 2) + k3);
	c = k2 / b;
	y = (ln + eax) / (tg - c);
	printf("Искомое значение y равно - %lf", y);
}