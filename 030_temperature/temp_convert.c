#include <stdio.h>
#include <stdlib.h>

int temperature(int value[]) {
    float result[3];
    result[0]=value[0]+273.15;
    result[1]=value[1]+273.15;
    result[2]=value[2]+273.15;
    return result;
}

int main(int argc, char *argv[]) {
    if (argc != 4) {
        fprintf(stderr, "%s: error: Wrong number of arguments. Expecting 3 arguments\n", argv[0]);
        abort();
    }
    int value[3];
    value[0] = atoi(argv[1]);
    value[1] = atoi(argv[2]);
    value[2] = atoi(argv[3]);
    for (int i = 0; i < 3; ++i) {
        printf("%d", temperature(value[i]));
    }
    return EXIT_SUCCESS;
}
