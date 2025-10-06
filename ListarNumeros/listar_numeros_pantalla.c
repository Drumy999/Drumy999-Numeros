/*Programa para listar por pantalla, de menor a mayor y de forma consecutiva, los números enteros entre dos números de mediana cantidad de dígitos enteros*/

#include <stdio.h>
#include <math.h>

int main(void)
{
	double numero1, numero2;
	long int limite1, limite2, numero, numeroi, intercambio = 1;

	printf("Programa para listar por pantalla, de menor a mayor y de forma consecutiva, los números enteros entre dos números de mediana cantidad de dígitos enteros\n");
	printf("Al introducir números reales debe usar punto para separar los decimales\n");
	printf("Introduzca un límite del listado de números enteros:\n");
	scanf("%lf", &numero1);
	limite1 = (int) numero1;
	printf("Su valor entero es %ld\n",limite1);
	printf("Introduzca el otro límite del listado de números enteros:\n");
	scanf("%lf", &numero2);
	limite2 = (int) numero2;
	printf("Su valor entero es %ld\n",limite2);

	if (limite1 >= limite2)
	{
		intercambio = limite2;
		limite2 = limite1;
		limite1 = intercambio;
	}

	printf("Listado entre %ld y %ld:\n", limite1, limite2);
	numero = limite1;

	while(numero <= limite2)
	{
		numeroi = numero++;
		printf("%ld\t", numeroi);
	}

	printf("\n El programa ha terminado\n");
	return 0;
}
