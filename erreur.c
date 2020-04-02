
/*
PROJET LANGAGE C EI2I S5
Trouver l'âme soeur
nom: erreur.c
date: 01/2019
programmé par: Dongxun LIU, Chuan LI
*/

#include <stdio.h>
#include <stdlib.h>


void FN_Notice_Erreur(int VI_numero_erreur)
{
	printf("ERREUR %d !\nPROGRAMME STOP\n", VI_numero_erreur);
	exit(0);
}
