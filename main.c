#include <stdio.h>

__attribute__((constructor)) void hello() { printf("ctor\n"); }

int main() { printf("main\n"); }

__attribute__((destructor)) void goodbye() { printf("dtor\n"); }
