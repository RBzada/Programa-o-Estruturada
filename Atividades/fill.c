#include <stdio.h>
#include <stdlib.h>

int *fill(int n, int v);

int main(){
    int n = 10;
    int v = 5;
    int *g = fill(n, v);

    for ( int i = 0; i < n; i++){
        printf("%d ", g[i]);
    }
    return 0;
}

int *fill(int n, int v){
    int *p = malloc(n * sizeof(int));
    for (int i = 0; i < n; i++){
        p[i] = v;
    }
    return p;
}