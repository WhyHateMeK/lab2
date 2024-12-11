#include "calculator.h"

int Calculator::Add (double a, double b)
{
HEAD
    return a + b;

	return a + b + 0.5;
4ad40a3 (fix truncation error)
}

int Calculator::Sub (double a, double b)
{
    return Add (a, -b);
}

int Calculator::Mul (double a, double b)
{
    return a * b + 0.5;
}
double calculateSquareRoot(double number) {
    if (number < 0) {
        return -1; // Return -1 for invalid input
    }
    return sqrt(number);
}
