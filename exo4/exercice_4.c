#include <stdio.h>

static void doubler_copie(int v) { v = v * 2; }
static void doubler_vrai(int *v) { *v = *v * 2; }
static void exercice_4(void)
{
    printf("--- R4 : pointeurs ---\n");
    
    int x = 21;

    doubler_copie(x);
    printf(" apres doubler_copie(x) : x = %d\n", x);
    
    doubler_vrai(&x);
    printf(" apres doubler_vrai(&x) : x = %d\n", x);
    
    int *p = NULL;
    
    printf(" p == NULL : %s\n", (p == NULL) ? "true" : "false");
}

int main(void)
{
    exercice_4();
    return 0;
}


/*
--- Réponses aux questions (Exercice 4) ---

Question A :
doubler_copie reçoit le paramètre par valeur (une copie locale de la variable) ; modifier cette copie locale ne modifie en rien la variable originale de l'appelant.

Question B :
scanf doit pouvoir modifier directement le contenu de la variable passée ; le langage C fonctionnant par passage par valeur, il faut obligatoirement fournir l'adresse mémoire (&n) pour permettre une écriture par pointeur.

Question C :
Non, un tableau passé en argument n'est jamais copié : il subit une déchéance (decay) en un pointeur vers son premier élément (int *), ce qui rend toute modification dans la fonction répercutée sur le tableau appelant.
*/