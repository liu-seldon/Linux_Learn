#include <stdio.h>
#include <unistd.h>

int main() {   
    int i;
    for(i = 0;i < 50; ++i) {
        printf("My counter: %d\n", i);
        sleep(2);

    }
    return 0;
}
