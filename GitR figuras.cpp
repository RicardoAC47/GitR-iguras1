#include <stdio.h>
int main() {
	float fBase, fAltura, fArea;
	printf("Calcular el Area de un Cuadrado \n");
	printf("introduzca la cantidad para la Base: ");
	scanf_s("%f", &fBase);
	printf("Introduzca la cantidad para la altura: ");
	scanf_s("%f", &fAltura);
	fArea = fBase * fAltura;
	printf("El area para el cuadrado es: %f", fArea);

}