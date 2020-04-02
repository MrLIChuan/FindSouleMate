
/*
PROJET LANGAGE C 
Trouver l'âme soeur
nom: 0_compare_profil.c
date: 12/2018
programmé par:  Chuan LI
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "erreur.h"
#include "compare_profil_src.h"



int main(int argc, char *argv[])
{
	char *VI_extension = ".txt",*VI_profil_1,*VI_profil_2;
    ST_profil VST_P1,VST_P2;//information de la 1ère et 2ème personne
    int VI_res,BL_i;//le résultat de la comparasion
	int VT_Homme[32],VT_Femme[32];//tableau pour sauvegarder des information
	int VS_Lock_Homme=0, VS_Lock_Femme=0;//une serrure pour vérifier le tableau n'est pas doublement rempli
	
	/*********** Récupération des noms de fichiers ************/
	VI_profil_1=(char *)malloc(sizeof(VI_profil_1));//Allocation de mémoire
	VI_profil_2=(char *)malloc(sizeof(VI_profil_2));
	strcpy(VI_profil_1,argv[1]);//On copie le nom de la 1ère personne à comparer dans une nouvelle chaîne de caractères
    strcat(VI_profil_1,VI_extension);//On ajoute un nom d'extension (".txt")
	strcpy(VI_profil_2,argv[2]);
    strcat(VI_profil_2,VI_extension);
	/**********************************************************/

	/***************** Ouverture des fichiers *****************/
	FILE* VI_fichier1=fopen(VI_profil_1,"r");//Ouverture du premier fichier en lecture seule
    FILE* VI_fichier2=fopen(VI_profil_2,"r");//Ouverture du deuxième fichier en lecture seule
	/**********************************************************/

	/************* Lecture des fichiers de profils ************/
	FN_lire_fichier(&VST_P1,VI_fichier1,VI_profil_1);
	FN_lire_fichier(&VST_P2,VI_fichier2,VI_profil_2);
	
	if (VST_P1.TS_reponses_question[2]==VST_P2.TS_reponses_question[2])//verification des sexes de deux profils
	{
		printf("Il faut obligatoirement comparer entre un homme ou une femme! \nPROGRAMME STOP\n");
		exit (0);
	}
	/**********************************************************/
	
	/************* Sauvegarder des information de 1ère personne ************/
	if ((VST_P1.TS_reponses_question[2]==1)&&(VS_Lock_Homme!=1))//1ère est un homme et le tableau d'homme n'est pas rempli
	{
		for (BL_i=0;BL_i<32;BL_i++)
			VT_Homme[BL_i]=VST_P1.TS_reponses_question[BL_i];
		VS_Lock_Homme=1;
	}
	else if ((VST_P1.TS_reponses_question[2]==2)&&(VS_Lock_Femme!=1))//1ère est une femme et le tableau de femme n'est pas rempli
	{
		for (BL_i=0;BL_i<32;BL_i++)
			VT_Femme[BL_i]=VST_P1.TS_reponses_question[BL_i];
		VS_Lock_Femme=1;
	}
	else
	{
		FN_Notice_Erreur(23);
	}
	/**********************************************************/
	
	/************* Sauvegarder des information de 2ère personne ************/
	if ((VST_P2.TS_reponses_question[2]==1)&&(VS_Lock_Homme!=1))//2ème est un homme et le tableau d'homme n'est pas rempli
	{
		for (BL_i=0;BL_i<32;BL_i++)
			VT_Homme[BL_i]=VST_P2.TS_reponses_question[BL_i];
		VS_Lock_Homme=1;
	}
	else if ((((VST_P2.TS_reponses_question[2]==2)&&(VS_Lock_Femme!=1))))//2ème est une femme et le tableau de femme n'est pas rempli
	{
		for (BL_i=0;BL_i<32;BL_i++)
			VT_Femme[BL_i]=VST_P2.TS_reponses_question[BL_i];
		VS_Lock_Femme=1;
	}
	else
	{
		FN_Notice_Erreur(24);
	}
	/**********************************************************/
	
	/************* Vérifier les deux tableaux sont bien remplis ************/
	if ((VS_Lock_Femme!=1)||(VS_Lock_Homme!=1))
		FN_Notice_Erreur(25);
	/**********************************************************/
	
	/************* fermeture des fichiers ************/
	fclose(VI_fichier1);
    fclose(VI_fichier2);
	/**********************************************************/
	
	/************* comparer et afficher ************/
	VI_res=FN_compare(VT_Homme,VT_Femme);
	printf("Le resultat totale entre les 2 profils est de %d\n", VI_res);
	
	return 0;
}