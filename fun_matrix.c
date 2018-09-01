//
//  fun_matrix.c
//  Assignment_1B
//  This c file is intended to implement all the functions declared in fun_matrix.h
//
//  This file contains the implement of function:
//  **malloc_matrix
//  free_matrix
//  matrix_multiply
//  fill_matrix
//  print_matrix
//
//  Created by Jingran He on 8/31/2018.
//  Copyright © 2018 Jingran He. All rights reserved.
//

#include "fun_matrix.h"
#include <stdlib.h>
#include <time.h>
#include <stdio.h>


/***************** function for creating a two-dimensional matrix *****************/

double **malloc_matrix(int n1, int n2){
    
    double **a = malloc(n1*sizeof(double*));        /* allocate the memory for a n1-sized double pointers array */
    for(int i=0;i<n1;++i){
        a[i] = malloc(n2*sizeof(double));           /* allocate the memory for each double array */
    }
    return a;
    
}
/***************** function for creating a two-dimensional matrix *****************/


/********** functiong for releasing the memory allocated for the matrix ***********/

void free_matrix(int n1, int n2, double **a){
    
    for(int i = 0; i<n1;++i){
        free(a[i]);                                 /* free the memory for each row array */
    }
    free(a);                                        /* free the memory for the whole two-dimensional matrix */
    
}
/********** functiong for releasing the memory allocated for the matrix ***********/


/** function for computing C=A*B, where A, B, and C are two-dimensional matrics ***/

int matrix_multiply(int n1, int n2, int n3, double **a, double **b, double **c){
    
    /* return nonzero for invalid situation */
    if ( n1 <= 0 || n2 <= 0 || n3 <= 0
        || a == NULL || b == NULL) {
        return 1;
    }
    
    /* return 0 for successful computation */
    else{
        for(int i = 0;i < n1; ++i){
            for(int j = 0;j < n3; ++j){
                double temp = 0;
                for (int k=0; k<n2; ++k) {
                    temp += (*(*(a+i)+k)) * (*(*(b+k)+j));
                }
                *(*(c+i)+j) = temp;
            }
        }
        
        return 0;
    }
}
/** function for computing C=A*B, where A, B, and C are two-dimensional matrics ***/


/******************* function for initializing and filling the matrix *************/

void fill_matrix(int n1, int n2, double **a){
    
    for(int i=0;i<n1;++i){
        for (int j=0; j<n2; ++j) {
            *(*(a+i)+j) = (double)rand()/RAND_MAX * 10.0;
        }
    }
    
}
/******************* function for initializing and filling the matrix *************/


/************************** function for printing the matrix **********************/

void print_matrix(int n1, int n2, double **a){
    
    printf("\n\n");
    for(int i=0;i<n1;++i){
        for (int j=0; j<n2; ++j) {
            printf("%4.1f\t",*(*(a+i)+j));
        }
        printf("\n");
    }
    printf("\n");
    
}
/************************** function for printing the matrix **********************/

