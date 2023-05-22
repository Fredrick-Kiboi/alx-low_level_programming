#include "main.h"

int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

__attribute__((visibility("default"))) my_div_t my_div(int numerator, int denominator) {
    my_div_t result;
    result.quot = numerator / denominator;
    result.rem = numerator % denominator;
    return result;
}

// Export the div function with the correct symbol name
__attribute__((visibility("default"))) div_t div(int __numer, int __denom) {
    my_div_t result = my_div(__numer, __denom);
    div_t output;
    output.quot = result.quot;
    output.rem = result.rem;
    return output;
}

int mod(int a, int b)
{
	return a % b;
}
