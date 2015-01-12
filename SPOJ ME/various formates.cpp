#include <stdio.h>

int main()
{
	int n;
	float f;
	double d;
	char s[100];

	/* input an integer */
	scanf("%d", &n);
	/* print an integer, no formatting */
	printf("%d\n", n);
	/* print an integer, padded on left with spaces to total 6 chars */
	printf("%6d\n", n);
	/* print an integer, padded on right with spaces to total 6 chars */
	printf("%-6d", n);
	/* print an integer, padded on left with zeroes to total 6 chars */
	printf("%.6d\n", n);

	/* input a string (whitespace delineated) */
	scanf("%s", s);
	/* print a string, no formatting */
	printf("%s\n", s);
	/* print a string, padded with spaces on left to 20 chars */
	printf("%20s\n", s);
	/* print a string, padded with spaces on right to 20 chars */
	printf("%-20s\n", s);
	/* print a string, truncated after 3 chars */
	printf("%.3s\n", s);

	/* input a single precision floating point number */
	scanf("%f", &f);
	/* print a float, default precision is 6 places */
	printf("%f\n", f);
	/* input a double precision floating point number */
	scanf("%lf", &d);
	/* print a double, default precision is 6 places */
	printf("%f\n", d);
	/* print a double, 2 places of precision */
	printf("%.2f\n", d);
	/* print a double, 2 places of precision, padded with space to 10 */
	printf("%10.2f\n", d);
	/* print a double, use exponential notation if more than 3 digits */
	printf("%.3g\n", d);
}

