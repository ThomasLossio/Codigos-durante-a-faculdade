/*
 * File:   newsimpletest.c
 * Author: ThomasJefferson
 *
 * Created on 02/06/2016, 21:08:44
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * Simple C Test Suite
 */

int fat(int x);

void testFat() {
    int x = 5;
    int result = fat(x);
    if (1 /*check result*/) {
        printf("%%TEST_FAILED%% time=0 testname=testFat (newsimpletest) message=error message sample\n");
    }
}

int main(int argc, char** argv) {
    printf("%%SUITE_STARTING%% newsimpletest\n");
    printf("%%SUITE_STARTED%%\n");

    printf("%%TEST_STARTED%%  testFat (newsimpletest)\n");
    testFat();
    printf("%%TEST_FINISHED%% time=0 testFat (newsimpletest)\n");

    printf("%%SUITE_FINISHED%% time=0\n");

    return (EXIT_SUCCESS);
}
