#include <stdio.h>

static void exercice_1(void)
{
    printf("--- R1 : entiers ---\n");
    
    int a = 2147483647; /* le plus grand int sur 32 bits */
    
    unsigned int b = 4294967295U; /* le plus grand unsigned int */



    printf(" int max = %d\n", a);
    printf(" int max + 1 = %d\n", a + 1);

    printf(" uint max = %u\n", b);
    printf(" uint max + 1 = %u\n", b + 1);

    int n = -7;
    
    printf(" -7 %% 3 = %d\n", n % 3);
    return;
}

int main(void)
{
    exercice_1();
    return 0;
}

/*
 --- Réponses aux questions (Exercice 1) ---

Question A :
Non. Le débordement (overflow) sur un entier signé est un comportement indéfini selon la norme C.

Question B :
Oui. La norme C garantit que l'arithmétique non signée fonctionne modulo 2^N,
donc UINT_MAX + 1 reboucle obligatoirement à 0.

Question C :
Accès mémoire invalide. L'indice calculé étant négatif, accéder au tableau avec
cette valeur entraîne un comportement indéfini (corruption mémoire).
 */