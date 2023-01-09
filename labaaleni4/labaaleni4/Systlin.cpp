#define _CRT_SECURE_NO_WARNINGS
#include "Systlin.h"
#include <stdio.h>
Systlin::Systlin() {
	printf("вам нужно ввести 2 линейных уравнения вида: y = kx+b\n");
	printf("введите коэфициенты k и b первого уравнения\n");
	scanf("%d %d", &k, &b);
	printf("\nвведите коэффициенты k и b второго уравнения\n");
	scanf("%d %d", &k1, &b1);
}
void Systlin::getSolution() {
	if (k1 == k) printf("\nваши прямые параллельны, у них нет пересечений, а следовательно и решений!\n");
	else {
		x = (b1 - b) / (k1 - k);
		y = k * x + b;
		printf("решения есть!\n x = %d\n y = %d\n", x, y);
	}
}
void Systlin::operator-(Systlin ur) {
	if (k - k1 == 0 and b - b1 == 0) printf("все хорошо");
	else printf("все плохо");
}