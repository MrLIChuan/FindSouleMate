
/*
PROJET LANGAGE C 
Trouver l'âme soeur
nom: saisir_profil_src.c
date: 01/2019
programmé par:  Chuan LI
*/

#include <stdio.h>
//  Déclaration de fonction 
//, pour « Standard Input/Output Header » ou « En-tête 
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
#include <stdbool.h>
//<stdbool.h> est l'en-tête de la bibliothèque standard C consacré aux booléens.
//Il a été introduit avec la norme C99 et contient quatre macros.
//Les macros telles que définies dans l'IEEE Std 1003.1-2001 sont les suivantes :
//bool qui équivaut à _Bool
//true qui équivaut à 1
//false qui équivaut à 0
//__bool_true_false_are_defined qui équivaut à 1
//Les programmes utilisant ces macros peuvent redéfinir bool, true et false. 
//Cette possibilité est en revanche considérée comme obsolète et devrait être 
//retirée dans les versions à venir.
#include "erreur.h"
// on utiliser des donnée (bibliothèque) de document d'erreur dans ce 
//system
typedef struct ST_profil{
    char *VS_nom;
    int TS_reponses_question[32];		//Tableau d'entiers de la taille du nombre de questions, permettant de enregistrer les réponses
}ST_profil;  


void FN_affichage_question(int VI_num_question)
{   // Nous allons poser des différences questions à utilisateur et récupérer leur information à faire une comparaison.
	switch(VI_num_question)	
	{	
		case 1:
			printf("\nQuel age avez vous? (entre 18 et 77 ans)\nVotre choix:");
			break;
		case 2:
			printf("\nÊtes-vous un homme(1) ou une femme(2)\nVotre choix:");
			break;
		case 3:
			printf("\nQuel est votre signe astrologique?\n  Bélier(0)  Taureau(1)  Gémeaux(2)  Cancer(3)  Lion(4)  Vierge(5)\n  Balance(6)  Scorpion(7)  Sagitaire(8)  Capricorne(9)  Verseau(10)  Poissons(11)\nVotre choix:");
			break;
		case 4:
			printf("\nChoisiez votre taille, s'il vous plaît?\n  <1m50(0)  1m50-1m60(1)  1m60-1m70(2)  1m70-1m80(3)\n  1m80-1m90(4)  1m90-2m00(5)  2m00-2m10(6)  >2m10(7)\nVotre choix:");  
			break;
		case 5:
			printf("\nQuelle est la couleur de vos cheveux?\n  Noirs(0)  Chatains(1)  Blond(2)  Roux(3)\n  Bruns(4)  Gris(5)  Blancs(6)\nVotre choix:");
			break;
		case 6:
			printf("\nQuelle est la couleur de vos yeux?\n  Noirs(0)  Marrons(1)  Verts(2)  Bleus(3)  Gris(4)\nVotre choix:");
			break;
		case 7:
			printf("\nQuel age vous voulez rechercher chez l'âme soeur? (entre 18 et 77 ans)\nVotre choix:");
			break;
		case 8:
			printf("\nVous voulez rechercher un homme(1) ou une femme(2) chez l'âme soeur?\n  ATTENTION:Il faut obligatoirement être différent de votre sexe! Sinon le recherche ne passe pas!\nVotre choix:");
			break;
		case 9:
			printf("\nQuelle taille vous voulez rechercher chez l'âme soeur?\n  <1m50(0)  1m50-1m60(1)  1m60-1m70(2)  1m70-1m80(3)\n  1m80-1m90(4)  1m90-2m00(5)  2m00-2m10(6)  >2m10(7)\nVotre choix:");
			break;
		case 10:
			printf("\nQuelle couleur des cheveux vous voulez rechercher chez l'âme soeur?\n  Noirs(0)  Chatains(1)  Blond(2)  Roux(3)\n  Bruns(4)  Gris(5)  Blancs(6)\nVotre choix:");
			break;
		case 11:
			printf("\nQuelle couleur des yeux vous voulez rechercher chez l'âme soeur?\n  Noirs(0)  Marrons(1)  Verts(2)  Bleus(3)  Gris(4)\nVotre choix:");
			break;
		case 12:
			printf("\nAimez-vous Star Wars?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 13:
			printf("\nAimez-vous le sport?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 14:
			printf("\nAimez-vous les animaux?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 15:
			printf("\nAimez-vous les voyages?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 16:
			printf("\nAimez-vous la politique?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 17:
			printf("\nAimez-vous les séries télé?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 18:
			printf("\nAimez-vous la cuisine?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 19:
			printf("\nAimez-vous les jeux de société?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 20:
			printf("\nAimez-vous la nature?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 21:
			printf("\nAimez-vous les enfants?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 22:
			printf("\nAimez-vous l'informatique?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 23:
			printf("\nAimez-vous bricoler?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 24:
			printf("\nAimez-vous fumer?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 25:
			printf("\nAimez-vous vos parents?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 26:
			printf("\nAimez-vous la viande?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 27:
			printf("\nAimez-vous l'argent?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 28:
			printf("\nAimez-vous le théâtre?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 29:
			printf("\nAimez-vous les super-héros?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 30:
			printf("\nAimez-vous les films de fille?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		case 31:
			printf("\nAimez-vous les films de garçon?\n  entre 0(je déteste) et 9(j'adore)\nVotre choix:");
			break;
		default:
			FN_Notice_Erreur(11);
			break;
	}
}



int FN_Verification(int VI_boucle_i,int VI_valeur,int VI_response_sex)
{
	int VI_return;

	if ((VI_boucle_i==1) || (VI_boucle_i==7))//Questions sur âge
	{
		if ((VI_valeur>77) || (VI_valeur<18))//Pour informer que l'utilisateur devrait donner un résultat à répondre à notre cahier de charge.
		{
			printf("\n\nATTENTION!\n\nIl faut obligatoirement saisir un age entre 18 et 77 ans! Sinon le recherche ne passe pas!\n\n");
			return 0;
		}
		else 
			return 1;
	}
	//vérification format d'entrée Q2 et Q8
	else if ((VI_boucle_i==2) || (VI_boucle_i==8))
	{
		//vérifucation du sexe différent Q8
		if (VI_boucle_i==8)
		{
			if (VI_valeur==VI_response_sex)// Cette condition est pour éviter homosexuelité!!
			{
				printf("\n\nATTENTION!\n\nIl faut obligatoirement être différent de votre sexe! Sinon le recherche ne passe pas!\n\n");
				return 0;
			}
		}
		if ((VI_valeur>2) || (VI_valeur<1))//Pour informer que l'utilisateur devrait donner un résultat à répondre à notre cahier de charge.
		{
			printf("\n\nATTENTION!\n\nIl faut obligatoirement saisir un homme(1) ou une femme(2)! Sinon le recherche ne passe pas!\n\n");
			return 0;
		}
		else 
			return 1;
		
	}
	
	//vérification format d'entrée Q3
	else if (VI_boucle_i==3)
	{
		if ((VI_valeur>11) || (VI_valeur<0))//Pour informer que l'utilisateur devrait donner un résultat à répondre à notre cahier de charge.
		{
			printf("\n\nATTENTION!\n\nIl faut obligatoirement saisir entre 0 et 13 selon la liste! Sinon le recherche ne passe pas!\n\n");
			return 0;
		}
		else 
			return 1;
	}
	//vérification format d'entrée Q4 et Q9
	else if ((VI_boucle_i==4) || (VI_boucle_i==9))
	{
		if ((VI_valeur>7) || (VI_valeur<0))
		//Pour informer que l'utilisateur devrait donner un résultat à répondre à notre cahier de charge.
		{
			printf("\n\nATTENTION!\n\nIl faut obligatoirement saisir entre 0 et 7 selon la liste! Sinon le recherche ne passe pas!\n\n");
			return 0;
		}
		else 
			return 1;
	}
	//vérification format d'entrée Q5 et Q10
	else if ((VI_boucle_i==5) || (VI_boucle_i==10))
	{
		if ((VI_valeur>6) || (VI_valeur<0))
	  //Pour informer que l'utilisateur devrait donner un résultat à répondre à notre cahier de charge.
		{
			printf("\n\nATTENTION!\n\nIl faut obligatoirement saisir entre 0 et 6 selon la liste! Sinon le recherche ne passe pas!\n\n");
			return 0;
		}
		else 
			return 1;
	}
	//vérification format d'entrée Q6 et Q11
	else if ((VI_boucle_i==6) || (VI_boucle_i==11))
	{
		if ((VI_valeur>4) || (VI_valeur<0))
		 //Pour informer que l'utilisateur devrait un résultat à répondre à notre cahier de charge.
		{
			printf("\n\nATTENTION!\n\nIl faut obligatoirement saisir entre 0 et 4 selon la liste! Sinon le recherche ne passe pas!\n\n");
			return 0;
		}
		else 
			return 1;
	}
	//vérification format d'entrée entre Q12 et Q31
	else if ((VI_boucle_i>=12) && (VI_boucle_i<=31))
	{
		if ((VI_valeur>9) || (VI_valeur<0))
		 //Pour informer que l'utilisateur devrait un résultat à répondre à notre cahier de charge.
		{
			printf("\n\nATTENTION!\n\nIl faut obligatoirement saisir entre 0(je déteste) et 9(j'adore)! Sinon le recherche ne passe pas!\n\n");
			return 0;
		}
		else 
			return 1;
	}
	else 
		FN_Notice_Erreur(12);
}

int FI_Correspondance_Lettres_Nombres_boucle(int VI_nombre)
//Ici, nous allons calculer des numéros qui correspon aux noms d'utilisateur
{
	int VI_Tens,VI_Ones;//Déclaration de variable du numéro de caractère
	if (VI_nombre<1)// Si le numéro est inférieur que 1
	{	
		FN_Notice_Erreur(13);
		//Afficharge notice Erreur 13, cela permet à faciliter de trouver où sont les problèmes.
	}
	else
	{
		do 
		{
			VI_Tens=VI_nombre/10;//Si les nombre spécifique de caractères est divisé par 10 
			VI_Ones=VI_nombre%10;//VI_One est la valeur reste, par exemple 11/10, le reste est 1
			VI_nombre=VI_Tens+VI_Ones;// nous allone les sommer
		}
		while (VI_Tens!=0);//si le nombre spécifique de caractères n'est pas null
	}
	return VI_nombre;
}

int FN_Correspondance_Lettres_Nombres(char *VI_Nom)//Pour convertir la caractère en numérique
{
	
	
	int VI_Nombre=0,VI_Return=0;//déclaration le nomre de caractère et initialiser par 0. VI_Return:le résultat
	int VI_taille=0; // la longue de caractère de nom de utilisateur
	int BL_i;   //// la déclaration de variable de numéro de placement
	
	VI_taille = strlen(VI_Nom);
	//Copie le nom de l'utilisateur pour calculer dans la fonction de caractère.
	
	for (BL_i=0;BL_i<VI_taille;BL_i++)//une boucle pour tri chaque caractère dans le nom d'utilisateur
	{
		if(VI_Nom[BL_i]!='\0')//Si le caractère n'est pas null.
		{
			if((VI_Nom[BL_i]=='a')||(VI_Nom[BL_i]=='j')||(VI_Nom[BL_i]=='s')||(VI_Nom[BL_i]=='A')||(VI_Nom[BL_i]=='J')||(VI_Nom[BL_i]=='S'))
				VI_Nombre+=1;
			else if((VI_Nom[BL_i]=='b')||(VI_Nom[BL_i]=='k')||(VI_Nom[BL_i]=='t')||(VI_Nom[BL_i]=='B')||(VI_Nom[BL_i]=='K')||(VI_Nom[BL_i]=='T'))
				VI_Nombre+=2;
			else if((VI_Nom[BL_i]=='c')||(VI_Nom[BL_i]=='l')||(VI_Nom[BL_i]=='u')||(VI_Nom[BL_i]=='C')||(VI_Nom[BL_i]=='L')||(VI_Nom[BL_i]=='U'))
				VI_Nombre+=3;
			else if((VI_Nom[BL_i]=='d')||(VI_Nom[BL_i]=='m')||(VI_Nom[BL_i]=='v')||(VI_Nom[BL_i]=='D')||(VI_Nom[BL_i]=='M')||(VI_Nom[BL_i]=='V'))
				VI_Nombre+=4;
			else if((VI_Nom[BL_i]=='e')||(VI_Nom[BL_i]=='n')||(VI_Nom[BL_i]=='w')||(VI_Nom[BL_i]=='E')||(VI_Nom[BL_i]=='N')||(VI_Nom[BL_i]=='W'))
				VI_Nombre+=5;
			else if((VI_Nom[BL_i]=='f')||(VI_Nom[BL_i]=='o')||(VI_Nom[BL_i]=='x')||(VI_Nom[BL_i]=='F')||(VI_Nom[BL_i]=='O')||(VI_Nom[BL_i]=='X'))
				VI_Nombre+=6;
			else if((VI_Nom[BL_i]=='g')||(VI_Nom[BL_i]=='p')||(VI_Nom[BL_i]=='y')||(VI_Nom[BL_i]=='G')||(VI_Nom[BL_i]=='P')||(VI_Nom[BL_i]=='Y'))
				VI_Nombre+=7;
			else if((VI_Nom[BL_i]=='h')||(VI_Nom[BL_i]=='q')||(VI_Nom[BL_i]=='z')||(VI_Nom[BL_i]=='H')||(VI_Nom[BL_i]=='Q')||(VI_Nom[BL_i]=='Z'))
				VI_Nombre+=8;
			else if((VI_Nom[BL_i]=='i')||(VI_Nom[BL_i]=='r')||(VI_Nom[BL_i]=='I')||(VI_Nom[BL_i]=='R'))
				VI_Nombre+=9;
			else 
				VI_Nombre+=0;
		}
	}

	VI_Return=FI_Correspondance_Lettres_Nombres_boucle(VI_Nombre);//Transormation des réponse aux numéros.
	return VI_Return;

}

