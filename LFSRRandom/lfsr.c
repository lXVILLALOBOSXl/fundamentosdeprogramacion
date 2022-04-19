//Luis Adrian Villalobos Rivera 1ºISC 220120379 T/M
#include <stdio.h>

int getSemilla();

int main(){
    printf("%d\n",getSemilla());
    return 0;
}

int getSemilla(){
    int semilla;
    printf("Ingrese la semilla: ");
    scanf("%d", &semilla);
    return semilla;
}