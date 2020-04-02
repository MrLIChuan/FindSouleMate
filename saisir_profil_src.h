
/*
PROJET LANGAGE C EI2I S5
Trouver l'âme soeur
nom: saisir_profil_src.h
date: 01/2019
programmé par: Dongxun LIU, Chuan LI
*/

typedef struct ST_profil{
    char *VS_nom;
    int TS_reponses_question[32];		//Tableau d'entiers de la taille du nombre de questions, permettant de stocker les réponses
}ST_profil;

void FN_affichage_question(int);
int FN_Verification(int,int,int);
int FI_Correspondance_Lettres_Nombres_boucle(int);
int FN_Correspondance_Lettres_Nombres(char *);
