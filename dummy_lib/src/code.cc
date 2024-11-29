#include <dummy_lib/header.h>
#include <internal/dummy_lib/header.h>
#include <cstdio>
#include <cstdlib>

void function() {
    printf ("From public header: %d\n", kConstant);
    printf ("From private header: %d\n", kConstantInternal);
}
