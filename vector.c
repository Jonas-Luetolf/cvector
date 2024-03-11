#include <stdlib.h>
#include <stdio.h>
#include "vector.h"

vector createVector (int len){
    vector vec;
    vec.len = len;
    vec.components = (double *)malloc(sizeof(double) * len);
    if (vec.components == NULL) {
        fprintf(stderr,"Speicherzuweisung fehlgeschlagen\n");
        exit(EXIT_FAILURE);
    }

    return vec;
}


void freeVector(vector *vec){
    free(vec->components);
    vec->len = 0;
}
