#include "factorial.h"
#include <assert.h>
int factorial(int n){
    assert(n >= 0);
    if (n == 0){
        return 1;
    }
    else {
        return n * factorial(n - 1);
    }
}