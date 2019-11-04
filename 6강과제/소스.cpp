#include <stdio.h>

int main(void)
{
	double a, b, c;

	printf("두 실수입력: ");
	scanf_s("%lf %lf", &a, & b);
	printf("연상종류 번호선택 1<+>, 2<->, 3<*>, 4</>: ");
	scanf_s("%d", &c);

	if (c = 1)
		printf("a + b = %.2lf", a + b);
	else if (c = 2)
		printf("a - b = %.2lf", a - b);
	else if (c = 3)
		printf("a * b = %.2lf", a * b);
	else if (c = 4)
		printf("a / b = %.2lf", a / b);

	return 0;

}