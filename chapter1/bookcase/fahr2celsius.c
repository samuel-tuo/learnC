//"华氏度和摄氏度温度对照表"
//"浮点数版本"
#include <stdio.h>

int main()
{
	float fahr, celsius;
	int lower, upper, step;

	lower = 0;
	upper = 300;
	step = 20;

	fahr = lower;
	while (fahr <= upper) {
		celsius = 5.0 * (fahr - 32.0) / 9.0;
		printf("%3.0f\t%5.2f\n", fahr, celsius);
		fahr += step;
	}
	return 0;
}


