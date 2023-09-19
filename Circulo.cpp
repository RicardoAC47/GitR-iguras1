#include <stdio.h>
int main() {
	float fBase, fAltura, fArea;
	float farea, fRadio;
	printf("Calcular el Area de un Rectangulo \n");

	printf("introduzca la cantidad para la Base: ");

	scanf_s("%f", &fBase);
	printf("Introduzca la cantidad para la altura: ");
	scanf_s("%f", &fAltura);

	
	printf("Calcular el Area de un Circulo \n");
	printf("introduzca la cantidad para el radio: ");
	scanf_s("%f", &fRadio);

	fArea = fBase * fAltura;
	farea = fRadio * fRadio * 3.1416;
	printf("El area para el rectangulo es: %f\n", fArea);
	printf("El area para el circulo es: %f", farea);
}