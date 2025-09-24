#include <stdlib.h>
#include <iostream>

int main () {
    int *v, n, *i;
    std::cin >> n;
    v = (int*) malloc(n * sizeof(int));
    i = v;
    for (int j = 0; j < n; j++) {
        std::cin >> *v;
        v += 1;
    }   
    delete v;
    for (int j = 0; j < n; j++) {
        std::cout << *i << " ";
        i += 1;
    }
}