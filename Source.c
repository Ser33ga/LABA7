#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <locale.h>
void task3() {
	int isVis=0;
	int mNum = 0;
	printf("¬ведите 1 если год високосный, 0 если нет");
	int a = scanf("%d", &isVis);
	getchar();
	printf("¬ведите номер мес€ца");
	a = scanf("%d", &mNum);
	getchar();
	switch (mNum) {
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("¬ мес€це номер %d 31 день", mNum);
			break;
		case 4:
		case 6:
		case 9:
		case 11:
			printf("¬ мес€це номер %d 30 дней", mNum);
			break;
		case 2:
			switch (isVis) 
			{
			case 1:
				printf("¬ мес€це номер %d 29 дней", mNum);
				break;
			case 0:
				printf("¬ мес€це номер %d 28 дней", mNum);
				break;
			}
	}
}
void main() {
	setlocale(LC_CTYPE, "RUS");
	task3();
	return 0;
}