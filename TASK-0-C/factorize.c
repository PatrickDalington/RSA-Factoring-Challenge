#include "main.h"

/**
 * factorize - find the factors of given number
 *
 * @number: number whose factors are to be found
 */

void factorize(long int number)
{
	int factor_check;
	long int factor1, factor2, i;

	i = 2;
	factor_check = 0;

	while (i <= number)
	{
		if ((number % i) == 0)
		{
			factor1 = i;
			factor2 = number / i;
			factor_check = 1;
			break;
		}

		i++;
	}

	if (factor_check == 1)
	{
		if ((factor1 > factor2) || (factor1 == factor2))
			printf("%ld=%ld*%ld\n", number, factor1, factor2);
		else if (factor2 > factor1)
			printf("%ld=%ld*%ld\n", number, factor2, factor1);
	}
}
