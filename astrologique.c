
/*
PROJET LANGAGE C 
Trouver l'âme soeur
nom: astrologique.c
date: 12/2018
programmé par:  Chuan LI
*/

#include <stdio.h>
#include "erreur.h"

int FN_astrologique(int VI_astro_Homme, int VI_astro_Femme)

{
	if(VI_astro_Homme==0)//Bélier
	{
		if (VI_astro_Femme==0)//Bélier
			return 50;
		else if (VI_astro_Femme==1)//Taureau
			return 85;
		else if (VI_astro_Femme==2)//Gémeaux
			return 50;
		else if (VI_astro_Femme==3)//Cancer
			return 50;
		else if (VI_astro_Femme==4)//Lion
			return 50;
		else if (VI_astro_Femme==5)//Vierge
			return 40;
		else if (VI_astro_Femme==6)//Balance
			return 60;
		else if (VI_astro_Femme==7)//Scorpion
			return 55;
		else if (VI_astro_Femme==8)//Sagittaire
			return 60;
		else if (VI_astro_Femme==9)//Capricorne
			return 60;
		else if (VI_astro_Femme==10)//Verseau
			return 70;
		else if (VI_astro_Femme==11)//Poissons
			return 45;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==1)//Taureau
	{
		if (VI_astro_Femme==0)//Bélier
			return 70;
		else if (VI_astro_Femme==1)//Taureau
			return 90;
		else if (VI_astro_Femme==2)//Gémeaux
			return 60;
		else if (VI_astro_Femme==3)//Cancer
			return 95;
		else if (VI_astro_Femme==4)//Lion
			return 55;
		else if (VI_astro_Femme==5)//Vierge
			return 55;
		else if (VI_astro_Femme==6)//Balance
			return 55;
		else if (VI_astro_Femme==7)//Scorpion
			return 85;
		else if (VI_astro_Femme==8)//Sagittaire
			return 50;
		else if (VI_astro_Femme==9)//Capricorne
			return 95;
		else if (VI_astro_Femme==10)//Verseau
			return 55;
		else if (VI_astro_Femme==11)//Poissons
			return 90;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==2)//Gémeaux
	{
		if (VI_astro_Femme==0)//Bélier
			return 50;
		else if (VI_astro_Femme==1)//Taureau
			return 70;
		else if (VI_astro_Femme==2)//Gémeaux
			return 75;
		else if (VI_astro_Femme==3)//Cancer
			return 65;
		else if (VI_astro_Femme==4)//Lion
			return 45;
		else if (VI_astro_Femme==5)//Vierge
			return 55;
		else if (VI_astro_Femme==6)//Balance
			return 65;
		else if (VI_astro_Femme==7)//Scorpion
			return 60;
		else if (VI_astro_Femme==8)//Sagittaire
			return 70;
		else if (VI_astro_Femme==9)//Capricorne
			return 70;
		else if (VI_astro_Femme==10)//Verseau
			return 80;
		else if (VI_astro_Femme==11)//Poissons
			return 40;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==3)//Cancer
	{
		if (VI_astro_Femme==0)//Bélier
			return 50;
		else if (VI_astro_Femme==1)//Taureau
			return 80;
		else if (VI_astro_Femme==2)//Gémeaux
			return 60;
		else if (VI_astro_Femme==3)//Cancer
			return 55;
		else if (VI_astro_Femme==4)//Lion
			return 95;
		else if (VI_astro_Femme==5)//Vierge
			return 90;
		else if (VI_astro_Femme==6)//Balance
			return 75;
		else if (VI_astro_Femme==7)//Scorpion
			return 70;
		else if (VI_astro_Femme==8)//Sagittaire
			return 60;
		else if (VI_astro_Femme==9)//Capricorne
			return 65;
		else if (VI_astro_Femme==10)//Verseau
			return 60;
		else if (VI_astro_Femme==11)//Poissons
			return 70;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==4)//Lion
	{
		if (VI_astro_Femme==0)//Bélier
			return 60;
		else if (VI_astro_Femme==1)//Taureau
			return 55;
		else if (VI_astro_Femme==2)//Gémeaux
			return 50;
		else if (VI_astro_Femme==3)//Cancer
			return 95;
		else if (VI_astro_Femme==4)//Lion
			return 45;
		else if (VI_astro_Femme==5)//Vierge
			return 75;
		else if (VI_astro_Femme==6)//Balance
			return 90;
		else if (VI_astro_Femme==7)//Scorpion
			return 90;
		else if (VI_astro_Femme==8)//Sagittaire
			return 90;
		else if (VI_astro_Femme==9)//Capricorne
			return 90;
		else if (VI_astro_Femme==10)//Verseau
			return 80;
		else if (VI_astro_Femme==11)//Poissons
			return 50;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}	
	}
	else if(VI_astro_Homme==5)//Vierge
	{
		if (VI_astro_Femme==0)//Bélier
			return 50;
		else if (VI_astro_Femme==1)//Taureau
			return 80;
		else if (VI_astro_Femme==2)//Gémeaux
			return 60;
		else if (VI_astro_Femme==3)//Cancer
			return 90;
		else if (VI_astro_Femme==4)//Lion
			return 70;
		else if (VI_astro_Femme==5)//Vierge
			return 60;
		else if (VI_astro_Femme==6)//Balance
			return 60;
		else if (VI_astro_Femme==7)//Scorpion
			return 70;
		else if (VI_astro_Femme==8)//Sagittaire
			return 55;
		else if (VI_astro_Femme==9)//Capricorne
			return 50;
		else if (VI_astro_Femme==10)//Verseau
			return 40;
		else if (VI_astro_Femme==11)//Poissons
			return 65;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==6)//Balance
	{
		if (VI_astro_Femme==0)//Bélier
			return 70;
		else if (VI_astro_Femme==1)//Taureau
			return 70;
		else if (VI_astro_Femme==2)//Gémeaux
			return 70;
		else if (VI_astro_Femme==3)//Cancer
			return 75;
		else if (VI_astro_Femme==4)//Lion
			return 70;
		else if (VI_astro_Femme==5)//Vierge
			return 60;
		else if (VI_astro_Femme==6)//Balance
			return 70;
		else if (VI_astro_Femme==7)//Scorpion
			return 55;
		else if (VI_astro_Femme==8)//Sagittaire
			return 85;
		else if (VI_astro_Femme==9)//Capricorne
			return 45;
		else if (VI_astro_Femme==10)//Verseau
			return 90;
		else if (VI_astro_Femme==11)//Poissons
			return 70;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==7)//Scorpion
	{
		if (VI_astro_Femme==0)//Bélier
			return 60;
		else if (VI_astro_Femme==1)//Taureau
			return 90;
		else if (VI_astro_Femme==2)//Gémeaux
			return 60;
		else if (VI_astro_Femme==3)//Cancer
			return 80;
		else if (VI_astro_Femme==4)//Lion
			return 75;
		else if (VI_astro_Femme==5)//Vierge
			return 80;
		else if (VI_astro_Femme==6)//Balance
			return 65;
		else if (VI_astro_Femme==7)//Scorpion
			return 40;
		else if (VI_astro_Femme==8)//Sagittaire
			return 95;
		else if (VI_astro_Femme==9)//Capricorne
			return 65;
		else if (VI_astro_Femme==10)//Verseau
			return 50;
		else if (VI_astro_Femme==11)//Poissons
			return 65;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==8)//Sagittaire
	{
		if (VI_astro_Femme==0)//Bélier
			return 70;
		else if (VI_astro_Femme==1)//Taureau
			return 80;
		else if (VI_astro_Femme==2)//Gémeaux
			return 70;
		else if (VI_astro_Femme==3)//Cancer
			return 55;
		else if (VI_astro_Femme==4)//Lion
			return 90;
		else if (VI_astro_Femme==5)//Vierge
			return 80;
		else if (VI_astro_Femme==6)//Balance
			return 90;
		else if (VI_astro_Femme==7)//Scorpion
			return 95;
		else if (VI_astro_Femme==8)//Sagittaire
			return 90;
		else if (VI_astro_Femme==9)//Capricorne
			return 40;
		else if (VI_astro_Femme==10)//Verseau
			return 75;
		else if (VI_astro_Femme==11)//Poissons
			return 80;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==9)//Capricorne
	{
		if (VI_astro_Femme==0)//Bélier
			return 45;
		else if (VI_astro_Femme==1)//Taureau
			return 80;
		else if (VI_astro_Femme==2)//Gémeaux
			return 90;
		else if (VI_astro_Femme==3)//Cancer
			return 55;
		else if (VI_astro_Femme==4)//Lion
			return 80;
		else if (VI_astro_Femme==5)//Vierge
			return 60;
		else if (VI_astro_Femme==6)//Balance
			return 50;
		else if (VI_astro_Femme==7)//Scorpion
			return 55;
		else if (VI_astro_Femme==8)//Sagittaire
			return 65;
		else if (VI_astro_Femme==9)//Capricorne
			return 85;
		else if (VI_astro_Femme==10)//Verseau
			return 70;
		else if (VI_astro_Femme==11)//Poissons
			return 70;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==10)//Verseau
	{
		if (VI_astro_Femme==0)//Bélier
			return 90;
		else if (VI_astro_Femme==1)//Taureau
			return 60;
		else if (VI_astro_Femme==2)//Gémeaux
			return 90;
		else if (VI_astro_Femme==3)//Cancer
			return 70;
		else if (VI_astro_Femme==4)//Lion
			return 70;
		else if (VI_astro_Femme==5)//Vierge
			return 40;
		else if (VI_astro_Femme==6)//Balance
			return 90;
		else if (VI_astro_Femme==7)//Scorpion
			return 50;
		else if (VI_astro_Femme==8)//Sagittaire
			return 90;
		else if (VI_astro_Femme==9)//Capricorne
			return 80;
		else if (VI_astro_Femme==10)//Verseau
			return 75;
		else if (VI_astro_Femme==11)//Poissons
			return 45;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else if(VI_astro_Homme==11)//Poissons
	{
		if (VI_astro_Femme==0)//Bélier
			return 45;
		else if (VI_astro_Femme==1)//Taureau
			return 90;
		else if (VI_astro_Femme==2)//Gémeaux
			return 40;
		else if (VI_astro_Femme==3)//Cancer
			return 70;
		else if (VI_astro_Femme==4)//Lion
			return 45;
		else if (VI_astro_Femme==5)//Vierge
			return 55;
		else if (VI_astro_Femme==6)//Balance
			return 55;
		else if (VI_astro_Femme==7)//Scorpion
			return 90;
		else if (VI_astro_Femme==8)//Sagittaire
			return 90;
		else if (VI_astro_Femme==9)//Capricorne
			return 90;
		else if (VI_astro_Femme==10)//Verseau
			return 70;
		else if (VI_astro_Femme==11)//Poissons
			return 75;
		else
		{
			FN_Notice_Erreur(21);//Erreur
			return 0;
		}
	}
	else 
	{
		FN_Notice_Erreur(501);//Erreur
		return 0;
	}
}