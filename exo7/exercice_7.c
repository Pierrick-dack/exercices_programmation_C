#include <stdio.h>

static long compteur = 0;

static void boucle_simple(int n)
{
    compteur = 0;
    for (int i = 0; i < n; i++) compteur++;
}

static void boucle_double(int n)
{
    compteur = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++) compteur++;
}

static void boucle_moitie(int n)
{
    compteur = 0;
    for (int i = n; i > 0; i /= 2) compteur++;
}

static void exercice_7(void)
{
    printf("--- R7 : compter les operations ---\n");
    printf(" %8s %10s %10s %10s\n", "n", "simple", "double", "moitie");
    int tailles[] = { 10, 100, 1000 };
    for (int k = 0; k < 3; k++) {
        int n = tailles[k];
        boucle_simple(n);  long s = compteur;
        boucle_double(n);  long d = compteur;
        boucle_moitie(n);  long m = compteur;
        printf(" %8d %10ld %10ld %10ld\n", n, s, d, m);
    }
}

int main(void)
{
    exercice_7();
    return 0;
}