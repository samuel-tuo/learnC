//"华氏度和摄氏度温度对照表"
#include <stdio.h>

int main()
{
	int fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5 * (fahr - 32) / 9;
		printf("%3d\t%3d\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}


