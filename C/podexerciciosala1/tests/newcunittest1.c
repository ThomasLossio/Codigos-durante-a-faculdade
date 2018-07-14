/*
 * File:   newcunittest1.c
 * Author: ThomasJefferson
 *
 * Created on 19/05/2016, 21:34:26
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

void bubbleSort();

void testBubbleSort() {
    bubbleSort();
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void criaVetorDesordenado(int n);

void testCriaVetorDesordenado() {
    int n;
    criaVetorDesordenado(n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void criaVetorInversamentoOrdenado(int n);

void testCriaVetorInversamentoOrdenado() {
    int n;
    criaVetorInversamentoOrdenado(n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void criaVetorOrdenado(int n);

void testCriaVetorOrdenado() {
    int n;
    criaVetorOrdenado(n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void exibirVetor2(int op);

void testExibirVetor2() {
    int op;
    exibirVetor2(op);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

int getMaiorElemento(int vetor[], int n);

void testGetMaiorElemento() {
    int* vetor;
    int n;
    int result = getMaiorElemento(vetor, n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void insertionsort();

void testInsertionsort() {
    insertionsort();
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

int isInversamenteOrdenado(int n);

void testIsInversamenteOrdenado() {
    int n;
    int result = isInversamenteOrdenado(n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

int isOrdenado(int n);

void testIsOrdenado() {
    int n;
    int result = isOrdenado(n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

int mesmosElementos(int vetor1[], int vetor3[], int n);

void testMesmosElementos() {
    int* vetor1;
    int* vetor3;
    int n;
    int result = mesmosElementos(vetor1, vetor3, n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void preencheComContagem(int vetor1[], int vetor3[], int n);

void testPreencheComContagem() {
    int* vetor1;
    int* vetor3;
    int n;
    preencheComContagem(vetor1, vetor3, n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void preencheVetorComNum(int vetor[], int n, int numero);

void testPreencheVetorComNum() {
    int* vetor;
    int n;
    int numero;
    preencheVetorComNum(vetor, n, numero);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void removerVetor();

void testRemoverVetor() {
    removerVetor();
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void selectionsort();

void testSelectionsort() {
    selectionsort();
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void selectionsortinverso();

void testSelectionsortinverso() {
    selectionsortinverso();
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void shellSort();

void testShellSort() {
    shellSort();
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

void shellSortHIdeal();

void testShellSortHIdeal() {
    shellSortHIdeal();
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

int testarOrdenacao(int n);

void testTestarOrdenacao() {
    int n;
    int result = testarOrdenacao(n);
    if (1 /*check result*/) {
        CU_ASSERT(1);
    }
}

int main() {
    CU_pSuite pSuite = NULL;

    /* Initialize the CUnit test registry */
    if (CUE_SUCCESS != CU_initialize_registry())
        return CU_get_error();

    /* Add a suite to the registry */
    pSuite = CU_add_suite("newcunittest1", init_suite, clean_suite);
    if (NULL == pSuite) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Add the tests to the suite */
    if ((NULL == CU_add_test(pSuite, "testBubbleSort", testBubbleSort)) ||
            (NULL == CU_add_test(pSuite, "testCriaVetorDesordenado", testCriaVetorDesordenado)) ||
            (NULL == CU_add_test(pSuite, "testCriaVetorInversamentoOrdenado", testCriaVetorInversamentoOrdenado)) ||
            (NULL == CU_add_test(pSuite, "testCriaVetorOrdenado", testCriaVetorOrdenado)) ||
            (NULL == CU_add_test(pSuite, "testExibirVetor2", testExibirVetor2)) ||
            (NULL == CU_add_test(pSuite, "testGetMaiorElemento", testGetMaiorElemento)) ||
            (NULL == CU_add_test(pSuite, "testInsertionsort", testInsertionsort)) ||
            (NULL == CU_add_test(pSuite, "testIsInversamenteOrdenado", testIsInversamenteOrdenado)) ||
            (NULL == CU_add_test(pSuite, "testIsOrdenado", testIsOrdenado)) ||
            (NULL == CU_add_test(pSuite, "testMesmosElementos", testMesmosElementos)) ||
            (NULL == CU_add_test(pSuite, "testPreencheComContagem", testPreencheComContagem)) ||
            (NULL == CU_add_test(pSuite, "testPreencheVetorComNum", testPreencheVetorComNum)) ||
            (NULL == CU_add_test(pSuite, "testRemoverVetor", testRemoverVetor)) ||
            (NULL == CU_add_test(pSuite, "testSelectionsort", testSelectionsort)) ||
            (NULL == CU_add_test(pSuite, "testSelectionsortinverso", testSelectionsortinverso)) ||
            (NULL == CU_add_test(pSuite, "testShellSort", testShellSort)) ||
            (NULL == CU_add_test(pSuite, "testShellSortHIdeal", testShellSortHIdeal)) ||
            (NULL == CU_add_test(pSuite, "testTestarOrdenacao", testTestarOrdenacao))) {
        CU_cleanup_registry();
        return CU_get_error();
    }

    /* Run all tests using the CUnit Basic interface */
    CU_basic_set_mode(CU_BRM_VERBOSE);
    CU_basic_run_tests();
    CU_cleanup_registry();
    return CU_get_error();
}
