#include <stdio.h>

typedef struct {
    char nom[30];
    int age;
} Personne;

static void exercice_3(void)
{
    printf("--- R3 : structures ---\n");

    Personne p;
    snprintf(p.nom, sizeof(p.nom), "%s", "Camille");
    p.age = 23;
    Personne *ptr = &p; /* l'adresse de p */
    printf(" p.nom = %s\n", p.nom);
    printf(" ptr->nom = %s\n", ptr->nom);
    printf(" (*ptr).age = %d\n", (*ptr).age);
    printf(" sizeof(Personne) = %zu octets\n", sizeof(Personne));
}

int main(void)
{
    exercice_3();
    return 0;
}

/*
--- Réponses aux questions (Exercice 3) ---

Question A :
Non, sizeof(Personne) vaut généralement 32 ou 36 octets.

Question B :
Message d'erreur exact obtenu :
"error: request for member 'nom' in something not a structure or union".

Question C :
Non, la déclaration d'un type est uniquement une description de format pour
le compilateur ; aucune mémoire n'est allouée tant qu'une variable de ce type
n'est pas instanciée.
*/