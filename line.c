#include "line.h"
#include "vector.h"

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
