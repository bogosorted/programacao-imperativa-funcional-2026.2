#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    
    int d1 = (rand() % 6) + 1;
    int d2 = (rand() % 6) + 1;
    int d3 = (rand() % 6) + 1;
    
    printf("Dado 1: %d\n", d1);
    printf("Dado 2: %d\n", d2);
    printf("Dado 3: %d\n", d3);
    
    return 0;
}
