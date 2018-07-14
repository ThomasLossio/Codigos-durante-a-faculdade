/*
 * File:   newcunittest2.c
 * Author: ThomasJefferson
 *
 * Created on 31/05/2016, 19:32:52
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

int perfeito(int n, int soma, int prximpar);

void testPerfeito() {
    int n = 9;
    int soma = 1;
    int prximpar = 1;
    int result = perfeito(n, soma, prximpar);
    if (result > 0) {
        CU_ASSERT(1);
    } else {
        CU_ASSERT(0);
    }
}

int primo(int n, int numcorrente, int cont);

void testPrimo() {
    int n = 3;
    int numcorrente = 1;
    int cont = 0;
    int result = primo(n, numcorrente, cont);
    if (result > 0) {
        CU_ASSERT(1);
    } else {
        CU_ASSERT(0);
    }
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest2", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testPerfeito", testPerfeito)) ||
            (NULL == CU_add_test(pSuite, "testPrimo", testPrimo))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
