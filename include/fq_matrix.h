#ifndef CONST_VAR
#define CONST_VAR

typedef short Vi;
typedef float Vf;
typedef struct {
  Vi col;
  Vi row;
  Vf *data;
} Matrix;

#define EPSILON 0.00001
#define LADEF 
#define PI 3.141592653589793

#endif

#ifndef FQ_UTILS_H
#define FQ_UTILS_H

LADEF Vf min(Vf a, Vf b);
LADEF Vf max(Vf a, Vf b);
LADEF Vi equals(Vf a, Vf b);
LADEF Vi exactEquals(Vi a, Vi b);
LADEF Vf deg2rad(Vf deg);

#endif


#ifndef FQ_MATRIX_H
#define FQ_MATRIX_H

Matrix *create(Vi row, Vi col, Vf fill);
Vi destroy(Matrix *mat);
Vf find(const Matrix *const mat, Vi row, Vi col);
void identity(Matrix *mat);
Matrix *clone(const Matrix * const mat);
void copy(Matrix *dest, const Matrix *const src);
void fill(Matrix *mat, Vf *data, Vi length);
Matrix *transpose(Matrix *mat);

Matrix *cofactor(const Matrix *const mat, Vi row, Vi col);
Matrix *adjoint(const Matrix *const mat);
Vf determinant(const Matrix *const mat);
Matrix *inverse(const Matrix *const mat);

Matrix *add(const Matrix *const mat1, const Matrix *const mat2);
Matrix *subtract(const Matrix *const mat1, const Matrix *const mat2);
Matrix *multiply(const Matrix *const mat1, const Matrix *const mat2);
Matrix *scalar(const Matrix *const mat, Vf scalar);

void eye(const Matrix *const mat);
#endif