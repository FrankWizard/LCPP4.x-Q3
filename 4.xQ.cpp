#include <iostream>
#include "functions.h"

int main()
{
    double x = valueInput();
    double y = valueInput();
    char operation = operatorInput();
    calculateAndPrint(x, y, operation);

}