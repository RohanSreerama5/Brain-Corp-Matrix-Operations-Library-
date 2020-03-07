/*
 * matrixop.h
 *
 *
 *
 */

typedef long long lld;
#ifndef MATRIXOP_H_
#define MATRIXOP_H_

void TransposeBlockScalar(float *A, float *B, const int lda, const int ldb, const int block_size);
void TransposeBlock(float *A, float *B, const int n, const int m, const int lda, const int ldb, const int block_size);

//transpose_block works by utilizing loop blocking, where the block size is set to 16.

//lda and ldb represent the width of the matrix. This could be a 2x3 matrix for example.

lld** MatrixMultiply(lld** a, lld** b, int n, int l, int m); //uses naive multiplication method

lld** Strassen(lld** a, lld** b, int n, int l, int m);  //uses Strassens algorithm to perform fast multiplication


//The following functions use SIMD intrinsics to significantly boost the performance of matrix multiplication and transposition
void transposeSSE(float *A, float *B, const int lda, const int ldb);
void transpose_block_SSE(float *A, float *B, const int n, const int m, const int lda, const int ldb ,const int block_size);



#endif /* MATRIXOP_H_ */
