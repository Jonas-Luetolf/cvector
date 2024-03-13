#include "cvector/vector.h"
#include "cvector/line.h"
#include <stdio.h>

double radtodeg(double a){

    return a*(180.0/3.14596);
}


void printvec(vector *vec){
    for (int i=0; i<vec->len; i++){
        printf("%d: %f\n",i,vec->components[i]);
    }    


}

int main(){
    vector x=createVector(3);
    x.components[0]=0;
    x.components[1]=0;
    x.components[2]=0;

    vector y=createVector(3);
    y.components[0]=0;
    y.components[1]=1;
    y.components[2]=0;

    line l = createLine(x, y);

    vector z = getPoint(&l, 2);
    printf("%d\n",iselementof(&z, &l));

    freeLine(&l);
    freeVector(&z);


    return 0;
}
