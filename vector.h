#ifndef VECTOR_H
#define VECTOR_H

typedef struct {
    double *components;
    int len;
} vector;


/**
 * Creates a new vector with the specified length.
 * 
 * @param len The length of the vector to be created.
 * 
 * @return The newly created vector with uninitialized components.
 * 
 * @remarks Memory for the vector's components is allocated dynamically.
 *          The caller is responsible for freeing this memory when it's no
 *          longer needed using the `freeVector` function.
 */
vector createVector(int length);


/**
 * Frees the memory allocated for a vector.
 * 
 * @param vec A pointer to the vector to be freed.
 * 
 * @remarks After calling this function, the vector pointer `vec` becomes
 *          invalid and should not be used further.
 */
void freeVector(vector *vec);


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


/**
 * Multiplies each component of a vector by a given factor.
 * 
 * @param vec A pointer to the vector to be scaled.
 * @param factor The scalar by which to multiply each component of the vector.
 * 
 * @return The result of scaling `vec` by `factor`. The returned vector has the
 *         same length as `vec`.
 */
vector mulvec(vector * vec, double factor);


/**
 * Adds two vectors component-wise.
 * 
 * @param vec1 A pointer to the first vector.
 * @param vec2 A pointer to the second vector.
 * 
 * @return The result of adding `vec1` and `vec2` component-wise. The returned
 *         vector has the same length as the input vectors. If the input vectors
 *         do not have the same size, the function will terminate the program.
 */
vector addvec(vector * vec1,vector * vec2);

#endif /* VECTOR_H */
