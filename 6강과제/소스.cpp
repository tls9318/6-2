#include <stdio.h>

int main(void)
{
	double a, b, c;

	printf("�� �Ǽ��Է�: ");
	scanf_s("%lf %lf", &a, & b);
	printf("�������� ��ȣ���� 1<+>, 2<->, 3<*>, 4</>: ");
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