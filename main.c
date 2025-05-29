#include <stdio.h>
#include "helpers/vector.h"

int main(int argc, char const *argv[])
{
    vector *vec = vector_create(sizeof(int));
    int x = 50;
    vector_push(vec, &x);
    x = 20;
    vector_push(vec, &x);
    return 0;
}
