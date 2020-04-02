
/*
PROJET LANGAGE C 
Trouver l'âme soeur
nom: 0_saisir_profil.c
date: 12/2018
programmé par: Chuan LI
*/

#include <stdio.h>
//#include <stdio.h>, pour « Standard Input/Output Header » ou « En-tête 
//Standard d'Entrée/Sortie », est l'en-tête de la bibliothèque 
//standard du C déclarant les macros, les constantes et les 
//définitions de fonctions utilisées dans les opérations 
//d'entrée/sortie. Il descend du « portable I/O package » (ou 
//« paquet d'entrée/sortie portable ») écrit par Michael Lesk 
//dans les Laboratoires Bell au début des années 70. Pour des 
//raisons de compatibilité avec le C
#include <stdlib.h>
//Le fichier en-tête <stdlib.h> déclare des fonctions qui
//effectuent la conversion de nombres, la gestion de la 
//mémoire et d'autres tâches.
#include <string.h>
//<string.h> est l'en-tête de la bibliothèque standard du C,
//du langage C, qui contient les définitions des macros, des 
//constantes et les déclarations de fonctions et de types 
//utilisées non seulement pour la manipulation de chaînes de 
//caractères, mais aussi pour diverses fonctions de 
//manipulations de la mémoire.
#include "erreur.h"
// on utiliser des donnée (bibliothèque) de erreur dans ce 
//system
#include "saisir_profil_src.h"
// on utiliser des donnée (bibliothèque) de 
//saisir_profil_src.h dans ce system


int main(int argc, char *argv[])
//argc est le nombre de paramètres constituant la ligne de commande.
//argv est un tableau de pointeurs sur des chaînes de caractères qui
//représentent les paramètres de la ligne de commande.
//argv[0] représente le « nom du programme » et argv[1] à argv[argc - 1]
//les paramètres passés au programme. argv[argc] vaut toujours NULL.


{	
	int BL_i;               // la déclaration de variable de numéro
	char *VI_reponse_nom;   // la list de réponse d'un(e) utilisateur
	int VI_verification;    // déclaration d'une variable pour vérifier l'utilisateur qui a répondu à la question en cours ou pas
	ST_profil VST_reponse;  // Déclaration de structure de profit d'une personne.
	
    
    VI_reponse_nom=(char *)malloc(sizeof(VI_reponse_nom));//Pour stocker au system, c'est une partie d'allocation de mémoire
    strcpy(VI_reponse_nom, argv[1]);					  //On copie le nom de la personne dans une nouvelle chaîne de caractères
    VST_reponse.VS_nom = VI_reponse_nom;                  //VS nom est un nom d'une perssone pour faire une comparaison
    VST_reponse.TS_reponses_question[0]=FN_Correspondance_Lettres_Nombres(VI_reponse_nom);
	
	for (BL_i=1;BL_i<32;BL_i++)
 //Une boucle pour changer des questions différentes sur la liste.
	{
		FN_affichage_question(BL_i); //Afficharge des questions une par une 
        scanf("%d", &VST_reponse.TS_reponses_question[BL_i]); //enregistrer des réponses de l'utilisateur, puis, elle est stockée dans l'adresse de question
        VI_verification=FN_Verification(BL_i,VST_reponse.TS_reponses_question[BL_i],VST_reponse.TS_reponses_question[2]);
		 //la vérification des réponses qui correspondent aux caiher de chaige
        if (VI_verification!=1)
			// si l'utilisateur qui a mal répondu la question de sex, la validation de question suivant sera bloqué
        BL_i=BL_i-1;   // Refaire la question président
	}
	strcat(VI_reponse_nom, ".txt");						//On ajoute à la suite de la chaîne précédente l'extension souhaitée (".txt")
	FILE *VI_fichier=fopen(VI_reponse_nom, "w");		//Ouverture du fichier en écriture seule
	fprintf(VI_fichier, "%s\n",argv[1]);                //Ecrire le nom au première ligne
    
	for(BL_i=0; BL_i<32; BL_i++)                        //Une boucle pour changer des différences questions sur la liste.
		fprintf(VI_fichier, "%d\n",VST_reponse.TS_reponses_question[BL_i]);
		//Ecriture des autre réponse dans le même fichier
    fprintf(VI_fichier, "\n\n\n\n\n"); //Ecriture des symboles terminales dans le dossier .txt
	fclose(VI_fichier);                //Ferméture de dossier d'un(e) utilisateur.
	return 0;
}