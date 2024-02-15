#include <iostream>
#define _USE_MATH_DEFINES
#include <math.h>
#include <cmath>
#include <iostream>
#include <cmath>
#include <vector>

#ifdef USE_FLOAT
using DataType = float;
#else
using DataType = double;
#endif

int main() {
    const int arraySize = 10000000; 
    std::vector<DataType> sineArray(arraySize);

    double circle = 2 * M_PI / arraySize;
    for (int i = 0; i < arraySize; ++i) {
        double angle = (circle) * i;
        sineArray[i] = sin(angle); 
    }

    DataType sum = 0.0;
    for (DataType value : sineArray) {
        sum += value; 
    }

    std::cout << "Sum of sin values: " << sum << std::endl;

    return 0;
}
