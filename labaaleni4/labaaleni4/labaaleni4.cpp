#include <locale>
#include <stdio.h>
#include "Systlin.h"
int main() {
	setlocale(LC_ALL, "Ru");
	Systlin ur;
	ur.getSolution();
	ur - ur;
}