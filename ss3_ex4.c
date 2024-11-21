#include <stdio.h>

int main()
{
	float score_Math, score_Literature, score_English;
	printf("nhap diem toan:");
	scanf("%f", &score_Math);
	printf("nhap diem van:");
	scanf("%f", &score_Literature);
	printf("nhap diem anh:");
	scanf("%f", &score_English);
	float sum = score_Math + score_Literature + score_English;
	float average = (score_Math + score_Literature + score_English) / 3;
	printf("tong diem la %.2f  diem trung binh la %.2f", sum, average);
	return 0;
}

