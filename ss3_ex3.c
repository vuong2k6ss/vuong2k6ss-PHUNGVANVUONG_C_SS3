#include <stdio.h>

int main()
{
	const float PI = 3.14;
	float R;	
	printf("moi ban nhap vao ban kinh:");
	scanf("%f",&R);
	float P = 2 * PI * R;//chu vi 
	float S = PI * R * R;//dien tich
	printf("chu vi hinh tron la %.2f   dien tich hinh tron la %.2f", P, S);
	return 0;
}

