#include "helpers.h"
#include "vector.h"
#include <stdbool.h>

bool matchsize(vector *vec1, vector *vec2){
    return vec1->len == vec2->len;
}
