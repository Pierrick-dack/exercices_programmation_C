#include <stdio.h>
#include <string.h>

static void exercice_2(void)
{
    printf("--- R2 : tableaux et chaines ---\n");

    char mot[20];
    
    snprintf(mot, sizeof(mot), "%s", "bonjour");
    printf(" mot = %s\n", mot);
    printf(" strlen(mot) = %zu\n", strlen(mot));
    printf(" sizeof(mot) = %zu\n", sizeof(mot));
    
    const char *a = "chat";
    char b[10];
    
    snprintf(b, sizeof(b), "%s", "chat");
    printf("a == b = %s\n", ((const char *)a == b) ? "true" : "false");
    printf("strcmp(a,b)==0 = %s\n", (strcmp(a, b) == 0) ? "true" : "false");
}

int main(void)
{
    exercice_2();
    return 0;
}


/*
--- Réponses aux questions (Exercice 2) ---

Valeurs prédites :
- strlen(mot) = 7 (longueur de "bonjour" sans le '\0')
- sizeof(mot) = 20 (taille totale du tableau alloué en octets)

Question A :
L'opérateur == compare les adresses mémoire des pointeurs et non le contenu
des chaînes.

Question B :
Message d'erreur exact obtenu :
"error: assignment to expression with array type".

Question C :
Il y aurait un débordement de tampon (buffer overflow) : "bonjour" nécessite
8 octets avec le caractère de fin '\0', écrasant la mémoire adjacente sur
la pile avec un risque de plantage ou de faille de sécurité.

*/