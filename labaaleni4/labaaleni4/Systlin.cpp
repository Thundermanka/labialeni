#define _CRT_SECURE_NO_WARNINGS
#include "Systlin.h"
#include <stdio.h>
Systlin::Systlin() {
	printf("��� ����� ������ 2 �������� ��������� ����: y = kx+b\n");
	printf("������� ����������� k � b ������� ���������\n");
	scanf("%d %d", &k, &b);
	printf("\n������� ������������ k � b ������� ���������\n");
	scanf("%d %d", &k1, &b1);
}
void Systlin::getSolution() {
	if (k1 == k) printf("\n���� ������ �����������, � ��� ��� �����������, � ������������� � �������!\n");
	else {
		x = (b1 - b) / (k1 - k);
		y = k * x + b;
		printf("������� ����!\n x = %d\n y = %d\n", x, y);
	}
}
void Systlin::operator-(Systlin ur) {
	if (k - k1 == 0 and b - b1 == 0) printf("��� ������");
	else printf("��� �����");
}