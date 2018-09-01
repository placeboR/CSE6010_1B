//
//  main.c
//  Assignment_1B
//  This is intended to test the functions of matrix multiplation
//
//  This part contains the matrix multiplation process. Allocate and initialize 3 matrix: a, b, and c. c=a*b. Print results when we get reasonable outcoming.
//
//  Created by Jingran He on 2018/8/31.
//  Copyright © 2018 Jingran He. All rights reserved.
//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include "fun_matrix.h"

int main(int argc, const char * argv[]) {
    
    srand(time(NULL));
    
    /********** variables declarations *************/
    
    int n1 = 4;
    int n2 = 3;
    int n3 = 2;
    double **a, **b, **c;
    
    /********** variables declarations *************/
    
    
    /*************** matrix allocation *************/
    
    a = malloc_matrix(n1, n2);
    b = malloc_matrix(n2, n3);
    c = malloc_matrix(n1, n3);
    
    /*************** matrix allocation *************/

    
    /************* matrix initialization ***********/
    
    if (a == NULL || b == NULL || c == NULL) {
        printf("Memory allocation error!");
        return 0;
    }
    else{
        fill_matrix(n1, n2, a);
        fill_matrix(n2, n3, b);
    }
    
    /************* matrix initialization ***********/

    
    /*************** print matrix ******************/
    
    if (a == NULL || b == NULL) {
        printf("Initialization error!");
        return 0;
    }
    else{
        printf("matrix A:");
        print_matrix(n1, n2, a);
    
        printf("matrix B:");
        print_matrix(n2, n3, b);
    }
    
    /*************** print matrix ******************/

    
    /*********** matrix multiplication *************/
    
    if(!matrix_multiply(n1, n2, n3, a, b, c)){
        printf("matrix C=A*B:");
        print_matrix(n1, n3, c);
    
    }
    else{
        printf("Invalid multiplication!");
        return 0;
    }
    
    /*********** matrix multiplication *************/
    
    
    /***************** free memory ****************/
    
    free_matrix(n1, n2, a);
    free_matrix(n2, n3, b);
    free_matrix(n1, n3, c);
    
    /***************** free memory ****************/

    
    return 0;
}
