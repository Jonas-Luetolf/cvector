#include "vector.h"
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
bool matchsize(vector *vec1, vector *vec2){
    return vec1->len == vec2->len;
}



double vecabs(vector *vec){
    double squersum = 0;
    for (int i =0; i<vec->len; i++){
        squersum += pow((vec->components[i]),2);
    }
    return sqrt(squersum);
}

double scalprod(vector *vec1, vector *vec2){
    double res = 0;
    if (! matchsize(vec1,vec2)){
        exit(EXIT_FAILURE);
    }
    for (int i = 0; i<vec1->len; i++){
        res += vec1->components[i] * vec2->components[i];
    }

    return res;
}



double vecangel(vector *vec1, vector *vec2){
    return acos(scalprod(vec1, vec2)/(vecabs(vec1)*vecabs(vec2)));
}


vector vecprod(vector *vec1, vector *vec2){
    if (!matchsize(vec1, vec2) || vec1->len !=3){
        exit(EXIT_FAILURE);
    }
    vector retvec = createVector(3);
    retvec.components[0] = vec1->components[1]*vec2->components[2] - vec1->components[2]*vec2->components[1];
    retvec.components[1] = vec1->components[2]*vec2->components[0] - vec1->components[0]*vec2->components[2];
    retvec.components[2] = vec1->components[0]*vec2->components[1] - vec1->components[1]*vec2->components[0];

    return retvec;
}

vector addvec(vector *vec1, vector *vec2){
    if (!matchsize(vec1, vec2)){
        exit(EXIT_FAILURE);
    }

    vector resvec = createVector(vec1->len);
    for (int i=0; i<vec1->len; i++){
        resvec.components[i]=vec1->components[i]+vec2->components[i];
    }
    return resvec;
}

vector mulvec(vector *vec, double factor){
    vector resvec=createVector(vec->len);
    for (int i=0; i<vec->len; i++){
        resvec.components[i]=vec->components[i]*factor;
    }
    return resvec;
}
