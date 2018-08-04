#include <assert.h>
#include <limits.h>
#include <math.h>
#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char* readline();

// Complete the powerSum function below.
int powerSum(int X, int N,int i) {
    int j,count=0,n2=0;
    if (X == 0) return count+1;
	   if (X < 0) return 0;
    for (j = i; n2 >= 0; ++j) {
        n2 = X - (int)pow(j,N);
        count+=powerSum(n2, N,j+1);
    }
    return count;

}

int main()
{
    FILE* fptr = fopen(getenv("OUTPUT_PATH"), "w");

    char* X_endptr;
    char* X_str = readline();
    int X = strtol(X_str, &X_endptr, 10);

    if (X_endptr == X_str || *X_endptr != '\0') { exit(EXIT_FAILURE); }

    char* N_endptr;
    char* N_str = readline();
    int N = strtol(N_str, &N_endptr, 10);

    if (N_endptr == N_str || *N_endptr != '\0') { exit(EXIT_FAILURE); }

    int result = powerSum(X, N, 1);

    printf("%d\n", result);

    fclose(fptr);

    return 0;
}

char* readline() {
    size_t alloc_length = 1024;
    size_t data_length = 0;
    char* data = malloc(alloc_length);

    while (true) {
        char* cursor = data + data_length;
        char* line = fgets(cursor, alloc_length - data_length, stdin);

        if (!line) { break; }

        data_length += strlen(cursor);

        if (data_length < alloc_length - 1 || data[data_length - 1] == '\n') { break; }

        size_t new_length = alloc_length << 1;
        data = realloc(data, new_length);

        if (!data) { break; }

        alloc_length = new_length;
    }

    if (data[data_length - 1] == '\n') {
        data[data_length - 1] = '\0';
    }

    data = realloc(data, data_length);

    return data;
}
