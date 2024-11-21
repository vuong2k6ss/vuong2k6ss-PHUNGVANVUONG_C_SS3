#include <stdio.h>

int main()
{
	int num, sum;
	printf("nhap so nguyen co 4 chu so: ");
	scanf("%d", &num);
	int nghin = num / 1000;
	int tram = num % 1000 / 100;
	int chuc = num % 100 / 10;
	int donvi = num % 10;
	sum = nghin + tram + chuc + donvi;
	printf("tong cac chu so da nhap la: %d", sum);
	return 0;
}

