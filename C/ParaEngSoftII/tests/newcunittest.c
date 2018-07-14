/*
 * File:   newcunittest.c
 * Author: ThomasJefferson
 *
 * Created on 02/06/2016, 17:21:06
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
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

int analisar(char palavra[], int maior, int menor);

void testAnalisar() {
    char palavra[50] = "thomas";
    int maior = 0; 
    int menor = strlen(palavra) - 1;
    int result = analisar(palavra, maior, menor);
    if (result == 1) {
        CU_ASSERT(1);
    } else {
        CU_ASSERT(0);
    }
}

int checkNome(char nome[], char letra[], int i);

void testCheckNome() {
    char nome[50] = "thomas";
    char letra[2] = "a";
    int i = 0;
    int result = checkNome(nome, letra, i);
    if (result == 1) {
        CU_ASSERT(1);
    } else {
        CU_ASSERT(0);
    }
}

int maiorNumero(int vetor[], int maiorEsperado);

void testMaiorNumero() {
    int vetor[6] = {1, 6, 3, 9, 10, 4};
    int maiorEsperado = 5;
    int result = maiorNumero(vetor, maiorEsperado);
    if (result > maiorEsperado) {
        CU_ASSERT(1);
    } else {
        CU_ASSERT(0);
    }
}

int perfeito(int n, int soma, int prximpar);

void testPerfeito() {
    int n = 4;
    int soma = 1;
    int prximpar = 1;
    int result = perfeito(n, soma, prximpar);
    if (result == 1) {
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
    pSuite = CU_add_suite("newcunittest", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testAnalisar", testAnalisar)) ||
            (NULL == CU_add_test(pSuite, "testCheckNome", testCheckNome)) ||
            (NULL == CU_add_test(pSuite, "testMaiorNumero", testMaiorNumero)) ||
            (NULL == CU_add_test(pSuite, "testPerfeito", testPerfeito))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
