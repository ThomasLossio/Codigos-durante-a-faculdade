/*
 * File:   newcunittest.c
 * Author: ThomasJefferson
 *
 * Created on 31/05/2016, 19:18:58
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

//int analisar(char palavra[], int maior, int menor);
//
//void testAnalisar() {
//    char palavra = "arara";
//    int maior = 0;
//    int menor = strlen(palavra) - 1;
//    int result = analisar("arara", maior, menor);
//    if (result == 1) {
//        CU_ASSERT(1);
//    } else {
//        CU_ASSERT(0);
//    }
//}

int checkNome(char letra, int i);

void testCheckNome() {
    char letra;
    int i;
    int result = checkNome(letra, i);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

int perfeito(int n, int soma, int prximpar);

void testPerfeito() {
    int n;
    int soma;
    int prximpar;
    int result = perfeito(n, soma, prximpar);
    if (1 /*check result*/) {
        CU_ASSERT(0);
    }
}

int primo(int n, int numcorrente, int cont);

void testPrimo() {
    int n;
    int numcorrente;
    int cont;
    int result = primo(n, numcorrente, cont);
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
    pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testAnalisar", testAnalisar)) ||
            (NULL == CU_add_test(pSuite, "testCheckNome", testCheckNome)) ||
            (NULL == CU_add_test(pSuite, "testPerfeito", testPerfeito)) ||
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
