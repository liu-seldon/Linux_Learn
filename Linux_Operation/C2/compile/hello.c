#include <stdio.h>

#include "foo.h"

extern int foo2;
void foo2_func(int);

int main(int argc, char* argv[]) {
    foo2 = 5;
    foo2_func(50);
    int result;
    int r = 5;
#ifdef AREA
    result = PI * r * r;
#else
    result = PI * r * 2;
#endif
    return 0;
}
