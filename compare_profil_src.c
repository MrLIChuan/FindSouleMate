
/*
PROJET LANGAGE C 
Trouver l'âme soeur
nom: compare_profil_src.c
date: 12/2018
programmé par:  Chuan LI
*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

#include "erreur.h"
#include "astrologique.h"

typedef struct ST_profil{
    char *VS_nom;
    int TS_reponses_question[32];		
}ST_profil;

//lire des fichiers
void FN_lire_fichier(ST_profil *VI_personne, FILE *VI_src_fichier, char *VI_nom_fichier)
{
	int BL_i=0;
	char VI_tempo;

    if (VI_src_fichier != NULL)	
    {
		do							
		{
			VI_tempo=fgetc(VI_src_fichier);	//obtenir de nom
		}
		while(VI_tempo!='\n');//le nom se termine par /n
        for(BL_i=0; BL_i<32; BL_i++)
        {
            fscanf(VI_src_fichier, "%d", &VI_personne->TS_reponses_question[BL_i]);//obtenir des résultats des autres questions
        }
    }
	else
    {
        printf("Impossible d'ouvrir le fichier %s\n", VI_nom_fichier);
		FN_Notice_Erreur(22);
    }
}

//comparer des résultats
int FN_compare(int *VT_homme,int *VT_femme)
{
	int VI_res=0;
	int VT_detail_F[5],VT_detail_H[5],VT_veux_F[5],VT_veux_H[5];
	int VT_question_F[20],VT_question_H[20];
	int BL_i;

	//sauvegarder des details de femme
	VT_detail_F[0]=VT_femme[1];
	VT_detail_F[1]=VT_femme[2];
	VT_detail_F[2]=VT_femme[4];//le VT_femme[3] est l'astrologie de femme
	VT_detail_F[3]=VT_femme[5];
	VT_detail_F[4]=VT_femme[6];
	
	//sauvegarder des details d'homme
	VT_detail_H[0]=VT_homme[1];
	VT_detail_H[1]=VT_homme[2];
	VT_detail_H[2]=VT_homme[4];//le VT_homme[3] est l'astrologie d'homme
	VT_detail_H[3]=VT_homme[5];
	VT_detail_H[4]=VT_homme[6];
	
	//sauvegarder des désirs d'homme et de femme
	for(BL_i=0;BL_i<5;BL_i++)
	{
		VT_veux_F[BL_i]=VT_femme[7+BL_i];
		VT_veux_H[BL_i]=VT_homme[7+BL_i];
	}
	VI_res=abs(VT_femme[0]-VT_homme[0]);//comparer le nom
	VI_res=VI_res+FN_astrologique(VT_homme[3],VT_femme[3]);//comparer l'astrologie
	for(BL_i=0;BL_i<5;BL_i++)
	{
		VI_res=VI_res+abs(VT_detail_F[BL_i]-VT_veux_H[BL_i]);//comparer entre les profils de femme et les désirs d'homme
		VI_res=VI_res+abs(VT_detail_H[BL_i]-VT_veux_F[BL_i]);//comparer entre les profils d'homme et les désirs de femme
	}
	for(BL_i=0;BL_i<20;BL_i++)
		VI_res=VI_res+abs(VT_femme[12+BL_i]-VT_homme[12+BL_i]);////comparer des résultats de questions
	return VI_res;
}








