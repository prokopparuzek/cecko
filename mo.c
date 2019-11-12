#include <stdio.h>
#include <stdint.h>
#include <inttypes.h>

int main() {
    uint64_t i, j, c;
    for (i = 1; i < 18446744073709551615U; i++) {
        c = 0;
        for (j = 10; j <= 99; j++) {
            if (i % j == 0) {
                c++;
            }
        }
        if (c == 73) {
            printf("%" PRIu64 "\n", i);
        }
    }
}
