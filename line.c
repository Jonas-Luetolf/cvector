#include "line.h"
#include "vector.h"
#include <math.h>
#include <stdbool.h>
#include <stdlib.h>
#include "helpers.h"
#include <stdio.h>
#define EPSILON  0.00001

line createLine(vector start, vector v){
    line retline;
    retline.start = start;
    retline.v=v;

    return retline;
}

void freeLine(line *l){
    freeVector(&(l->v));
    freeVector(&(l->start));
}


vector getPoint(line *l, double t){
    vector ret = mulvec(&(l->v),t);
    ret = addvec(&ret, &(l->start));
    
    return ret;
}


bool iselementof(vector *point, line *l){
    if (matchsize(point, &(l->v))){
        double t = (point->components[0] - l->start.components[0])/l->v.components[0];
        for (int i=1; i<l->v.len; i++){
            if (fabs((point->components[i] - l->start.components[i])/l->v.components[i]-t)>EPSILON){
                return false;
            }
        }
        return true;
    }

    else {
        exit(EXIT_FAILURE);
    }
}
