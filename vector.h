#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double *components;
    int len;
} vector;

vector createVector(int length);
void freeVector(vector *vec);

// vector operations

/**
 * Calculates the Euclidean norm of a vector.
 *
 * @param vec Pointer to a vector structure with 'len' and 'components'.
 * @return Euclidean norm as a double.
 */
double vecabs(vector *vec);


/**
 * Calculates the scalar product (dot product) of two vectors.
 *
 * Computes the sum of the pairwise products of corresponding components
 * from vec1 and vec2.
 *
 * @param vec1 Pointer to the first vector.
 * @param vec2 Pointer to the second vector.
 * @return Scalar product of the two vectors as a double.
 * @note Both vectors must have the same length.
 */
double scalprod(vector *vec1, vector *vec2);


/**
 * Calculates the angle between two vectors.
 *
 * Computes the angle (in radians) between vec1 and vec2 using the scalarproduct
 *
 * @param vec1 Pointer to the first vector.
 * @param vec2 Pointer to the second vector.
 * @return Angle between the two vectors in radians.
 * @note Both vectors must have the same length.
 */
double vecangel(vector *vec1, vector *vec2);


/**
 * Calculates the cross product of two vectors.
 *
 * Computes the cross product of vec1 and vec2, resulting in a new vector perpendicular
 * to both input vectors.
 *
 * @param vec1 Pointer to the first vector.
 * @param vec2 Pointer to the second vector.
 * @return Cross product vector as a new vector structure.
 * @note Both vectors must have the length 3
 */
vector vecprod(vector *vec1, vector *vec2);

#endif /* VECTOR_H */
