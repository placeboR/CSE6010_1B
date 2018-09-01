//  fun_matrix.h
//  Assignment_1B
//  This Header file is intended to declare all the functions related to the computation of the product of two dense matrices
//
//  Declared function:
//  **malloc_matrix
//  free_matrix
//  matrix_multiply
//  fill_matrix
//  print_matrix
//
//
//  Created by Jingran He on 8/31/2018.
//  Copyright © 2018 Jingran He. All rights reserved.
//

#ifndef fun_matrix_h
#define fun_matrix_h

/***************** Prototypes *********************/

/* function for creating a two-dimensional matrix */

double **malloc_matrix(int n1, int n2);


/* functiong for releasing the memory allocated for the matrix */

void free_matrix(int n1, int n2, double **a);


/* function for computing C=A*B, where A, B, and C are two-dimensional matrics */

int matrix_multiply(int n1, int n2, int n3, double **a, double **b, double **c);


/* function for initializing and filling the matrix */

void fill_matrix(int n1, int n2, double **a);


/* function for printing the matrix */

void print_matrix(int n1, int n2, double **a);

/***************** Prototypes *********************/

#endif /* fun_matrix_h */
