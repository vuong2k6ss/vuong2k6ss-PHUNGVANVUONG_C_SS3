#include <stdio.h>

int main()
{
	int edge;
	int height;
	printf("nhap vao do dai canh: ");
	scanf("%d", &edge);
	printf("nhap vao do dai chieu cao: ");
	scanf("%d", &height);
	int S = 0.5 * edge * height;// dien tich tam giac
	printf("dien tich tam giac la %d", S);
	return 0;
}

