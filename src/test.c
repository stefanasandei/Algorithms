#include <stdio.h>
#include <stdlib.h>

#include <minunit.h>
#include <hello.h>

int tests_run = 0;

char *test_hello(void) {
  hello();
  mu_assert("hello is yes", 1);
  return 0;
}

char *all_tests() {
    mu_run_test(test_hello);
    return 0;
}

int main(int argc, char** argv) {
    char *test_message = all_tests();
    if (test_message != 0) printf("Test failed. Msg: %s\n", test_message);
    else printf("All tests in passed! (%i total test%c)\n", tests_run, (tests_run==1)?0:'s');

    return 0;
}
