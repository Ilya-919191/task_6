#include <stdio.h>
#include <math.h>

int main(void)
{
    int x1, y1, x2, y2;
    double length;

	printf("Введіть чотири координати через пробіл: ");
    if (scanf("%d %d %d %d", &x1, &y1, &x2, &y2) != 4) {
		printf("\nНекоректні дані\n");
		return 1;
	}

    length = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
    printf("\nДовжина вектора: %.6lf\n", length);

    return 0;
}
