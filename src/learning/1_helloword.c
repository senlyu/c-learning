#include <stdio.h>
#include <stdlib.h>



int oneTestRound() {
    int total = 0;
    for (int i=0;i<10;i++) {
        float p = rand() % 1000;
        if (p<4) {
            total += 2;
        } else {
            if (p<20) {
                total += 1;
            };
        };
    };
    return total;
};

int main() {
    float p;
    int testRound = 1 << 24;
    int totalCount = 0;
    for (int i = 0;i<testRound;i++) {
        int result = oneTestRound();
        if (result>=4) {
            totalCount++;
        };
    };
    printf("total round: %d \n", testRound);
    printf("total count: %d \n", totalCount);
    printf("total rate: %f \n", totalCount * 1.0 / testRound);
}
