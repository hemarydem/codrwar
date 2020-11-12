#include "func.h"

int square_sum(const int *values, size_t count){
    int result = 0;
    for (size_t i = 0; i < count; i++)
    {
        result += values[i] * values[i];
    }
    return result;
}