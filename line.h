#ifndef LINE_H
#define LINE_H
#include "vector.h"
typedef struct{
    vector start;
    vector v;
} line;


/**
 * Creates a line using a starting point and a direction vector.
 * 
 * @param start The starting point of the line.
 * @param v The direction vector of the line.
 * 
 * @return The created line with the specified starting point and direction vector.
 */
line createLine(vector start, vector v);


/**
 * Frees the memory allocated for a line.
 * 
 * @param l A pointer to the line to be freed.
 * 
 * @remarks After calling this function, the line pointer `l` becomes invalid
 *          and should not be used further. This function also frees the memory
 *          allocated for the start point and direction vector of the line.
 */
void freeLine(line *l);


/**
 * Computes a point on the line for a given parameter value.
 * 
 * @param l A pointer to the line.
 * @param t The parameter value indicating the position of the desired point
 *          along the line.
 * 
 * @return The point on the line corresponding to the given parameter value `t`.
 * 
 * @remarks The parameter `t` determines the position of the point along the
 *          line. For `t = 0`, the returned point is the starting point of the line.
 *          For other values of `t`, the point is calculated by moving along the
 *          direction vector of the line from the starting point.
 */
vector getPoint(line *l, double t);

#endif /* LINE_H */
