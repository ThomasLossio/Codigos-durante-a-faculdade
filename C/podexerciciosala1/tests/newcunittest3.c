/*
 * File:   newcunittest3.c
 * Author: ThomasJefferson
 *
 * Created on 29/05/2016, 15:20:25
 */

#include <stdio.h>
#include <stdlib.h>
#include <CUnit/Basic.h>

/*
 * CUnit Test Suite
 */

int init_suite(void) {
    return 0;
}

int clean_suite(void) {
    return 0;
}

int isInversamenteOrdenado(int n);

void testIsInversamenteOrdenado() {
    int n;
    int result = isInversamenteOrdenado(n);
    if (result == 1) {
        CU_ASSERT(1);
    } else {
        CU_ASSERT(0);
    }
}

int isOrdenado(int n);

void testIsOrdenado() {
    int n;
    int result = isOrdenado(n);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

int mesmosElementos(int vetor1[], int vetor3[], int n);

void testMesmosElementos() {
    int* vetor1;
    int* vetor3;
    int n;
    int result = mesmosElementos(vetor1, vetor3, n);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest3", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testIsInversamenteOrdenado", testIsInversamenteOrdenado)) ||
            (NULL == CU_add_test(pSuite, "testIsOrdenado", testIsOrdenado)) ||
            (NULL == CU_add_test(pSuite, "testMesmosElementos", testMesmosElementos))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
