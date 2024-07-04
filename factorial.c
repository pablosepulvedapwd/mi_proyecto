#include <stdio.h>

 

int factorial(int n) {

    if (n == 0) return 1;

    return n * factorial(n - 1);

}

 

int main() {

    int num;

    printf("Ingrese un número: ");

    scanf("%d", &num);

    printf("El factorial de %d es %d ", num, factorial(num));

    return 0;

}
