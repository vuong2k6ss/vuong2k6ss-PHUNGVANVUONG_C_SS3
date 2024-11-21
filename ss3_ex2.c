#include <stdio.h>

int main()
{
	int Celsius;
	float Fahrenheit;
	printf("moi ban nhap nhiet do(Celsius): ");
	scanf("%d", &Celsius);
	Fahrenheit = (Celsius * 9 / 5) + 32;
	printf("\n%d do Celsius tuong duong voi %.0f do Fahrenheit", Celsius, Fahrenheit);
	return 0;
}

