#include <iostream>
#include <stdlib.h>
#include <cstdio>

using namespace std;

int main()
{
    int menustart, menufin, credit, reponse1, reponse2, reponse3, rv1(0), rv2(0), rv3(0), rf1(0), rf2(0), rf3(0), rs1, rs2;

    error1 : ;
    cout << "**********************************************************************" << endl;
	cout << "*                     Bienvenue dans ce Quiz                         *" << endl;
	cout << "*                                                                    *" << endl;
	cout << "*                                                                    *" << endl;
	cout << "*                         Menu Principale                            *" << endl;
	cout << "*                                                                    *" << endl;
	cout << "*        |   1- Start   |   2 - Option   |   3 - Credits   |         *" << endl;
	cout << "*                                                                    *" << endl;
	cout << "**********************************************************************" << endl << endl;
	cout << "Choix : ";
	cin >> menustart;

    if (menustart==1)
        {
        system ("CLS");
        question1 : ;
        rv1 = 0;
        rv2 = 0;
        rv3 = 0;
        rf1 = 0;
        rf2 = 0;
        rf3 = 0;
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 1                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique C++ ?             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        1 - Dennis Ritchie                          *" << endl;
        cout << "*                        2 - Bjarne Stroustrup                       *" << endl;
        cout << "*                        3 - Brian Kernighan                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        cout << "Reponse : ";
        cin >> reponse1;
        //CHOIX QUESTION 1
        if (reponse1==1)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 1                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique C++ ?             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        2 - Bjarne Stroustrup                       *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                         MAUVAISE REPONSE !                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rf1 = rf1 + 1;
        system("pause");
        system ("CLS");
        goto question2;
        }
        else if (reponse1==2)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 1                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique C++ ?             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        2 - Bjarne Stroustrup                       *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                           BONNE REPONSE !                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rv1 = rv1 + 1;
        system("pause");
        system ("CLS");
        goto question2;
        }
        else if (reponse1==3)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 1                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique C++ ?             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        2 - Bjarne Stroustrup                       *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                         MAUVAISE REPONSE !                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rf1 = rf1 + 1;
        system("pause");
        system ("CLS");
        goto question2;
        }
        else
        {
            system ("CLS");
            goto question1;
        }
//FIN CHOIX QUESTION 1
}
    else if (menustart==2)
        {
        system ("CLS");
        }
    else if (menustart==3)
        {
        error2 : ;
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                              Credits                               *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                       Idee : Yannis Benbourahla                    *" << endl;
        cout << "*                      Codage : Yannis Benbourahla                   *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                         |   1- Retour   |                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        cout << "Choix : ";
        cin >> credit;
        //CHOIX DU MENU CREDIT
        if (credit==1)
        {
            system ("CLS");
            goto error1;
        }
        else
        {
            goto error2;
        }
        //FIN CHOIX DU MENU CREDIT
        }
    else
        {
        system ("CLS");
        goto error1;
        }

// ******************************************QUESTION2****************************************************

        question2 : ;
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 2                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique HTML ?            *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        1 - Alan Turing                             *" << endl;
        cout << "*                        2 - Robert Cailliau                         *" << endl;
        cout << "*                        3 - Tim Berners-Lee                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        cout << "Reponse : ";
        cin >> reponse2;
        //CHOIX QUESTION 2
        if (reponse2==1)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 2                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique HTML ?            *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        3 - Tim Berners-Lee                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                         MAUVAISE REPONSE !                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rf2 = rf2 + 1;
        system("pause");
        system ("CLS");
        goto question3;
        }
        else if (reponse2==2)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 2                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique HTML ?            *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        3 - Tim Berners-Lee                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                         MAUVAISE REPONSE !                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rf2 = rf2 + 1;
        system("pause");
        system ("CLS");
        goto question3;
        }
        else if (reponse2==3)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 2                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique HTML ?            *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        3 - Tim Berners-Lee                         *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                           BONNE REPONSE !                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rv2 = rv2 + 1;
        system("pause");
        system ("CLS");
        goto question3;
        }
        else
        {
            system ("CLS");
            goto question2;
        }
//FIN CHOIX QUESTION 2

// *******************************************************************************************************



// ******************************************QUESTION3****************************************************

        question3 : ;
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 3                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique C ?               *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        1 - Dennis Ritchie                          *" << endl;
        cout << "*                        2 - Rob Pike                                *" << endl;
        cout << "*                        3 - Richard Stallman                        *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        cout << "Reponse : ";
        cin >> reponse2;
        //CHOIX QUESTION 3
        if (reponse2==1)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 3                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique HTML ?            *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        1 - Dennis Ritchie                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                           BONNE REPONSE !                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rv3 = rv3 + 1;
        system("pause");
        system ("CLS");
        goto menufin;
        }
        else if (reponse2==2)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 3                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique HTML ?            *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        1 - Dennis Ritchie                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                          MAUVAISE REPONSE !                        *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rf3 = rf3 + 1;
        system("pause");
        system ("CLS");
        goto menufin;
        }
        else if (reponse2==3)
        {
        system ("CLS");
        cout << "**********************************************************************" << endl;
        cout << "*                             QUESTION 3                             *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*              Qui a cree le language informatique HTML ?            *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                        1 - Dennis Ritchie                          *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "*                          MAUVAISE REPONSE !                        *" << endl;
        cout << "*                                                                    *" << endl;
        cout << "**********************************************************************" << endl << endl;
        rf3 = rf3 + 1;
        system("pause");
        system ("CLS");
        goto menufin;
        }
        else
        {
            system ("CLS");
            goto question3;
        }
//FIN CHOIX QUESTION 3

// *******************************************************************************************************


// ****************************************MENU FIN*******************************************************
    menufin : ;
    rs1 = rv1+rv2+rv3;
    rs2 = rf1+rf2+rf3;
    cout << "**********************************************************************" << endl;
	cout << "*                   Merci d'avoir jouer a ce quiz                    *" << endl;
	cout << "*                                                                    *" << endl;
	cout << "*                    Total bonne reponses : " << rs1 << "                        *" << endl;
	cout << "*                    Total mauvaise reponses : " << rs2 << "                     *" << endl;
	cout << "*                                                                    *" << endl;
	cout << "*       |   1 - Restart   |   2 - Credits   |   3 - Quitter   |      *" << endl;
	cout << "*                                                                    *" << endl;
	cout << "**********************************************************************" << endl << endl;
	cout << "Choix : ";
    cin >> menufin;

    if (menufin==1)
    {
        system ("CLS");
        goto question1;
    }
    else if (menufin==2)
    {
        system ("CLS");
        goto error2;
    }
    else if (menufin==3)
    {
        system ("CLS");
        goto fin;
    }
    else
    {
        system ("CLS");
        goto menufin;
    }



// *******************************************************************************************************

    fin : ;
	return 0;
}
