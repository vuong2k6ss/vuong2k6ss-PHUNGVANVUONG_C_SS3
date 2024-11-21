#include <stdio.h>

int main()
{
	int num;
	printf("nhap so nguyen co 4 chu so: ");
	scanf("%d", &num);
	int nghin = num / 1000;
	int tram = num % 1000 / 100;
	int chuc = num % 100 / 10;
	int donvi = num % 10;
	printf("so dao nguoc la: %d%d%d%d", donvi, chuc, tram, nghin);
	return 0;
}

