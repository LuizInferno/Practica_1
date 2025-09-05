#include <stdio.h>

double calcular_pi(int n){
    double pi = 0.0;
    int i = 0, signo = 1;

    while (i < n){
        pi += signo * (4.0 / (2 * i + 1));
        signo = -signo;
        i++;
    }
    return pi;
    
}
int main(){
    int n;
    printf("Ingresar el numero de la serie:");
    scanf("%d", &n);
    
    double pi = calcular_pi(n);
    printf("aproximacion de Pi con %d terminos: %.15f/", n, pi);
    return 0;
}