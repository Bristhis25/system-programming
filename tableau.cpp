#include<iostream>
using namespace std ;

int main()
{
    /// Manipulation des tableaux

    cout << "Manipulation des tableaux \n" ;

    /// Etape 0 : Demander la taille du tableau

    int n ;

        cout << "\t SVP, donner la taille du tableau : " ;
        cin >> n ;

    /// Etape 1 : créer le tableau

    int A[n] ;

    /// Etape 2 : Initialiser le tableau

    int i ;

    i = 0 ;

    cout << "\t SVP, donner maintenant les elements du tableau \n";

    while (i < n)
        {
            /// Etape 3 : Demander A[i]

            cout << "\t\t A[" << i << "] = " ;
            cin >> A[i] ;


            i = i + 1 ;
        }

    /// Etape 3 : Afficher le tableau

        cout << "\tVoici votre tableau : " <<endl ;


        i = 0 ;
        cout <<"\t A[";

          while (i<n)
            {
                cout <<A[i]<<",";
                i=i+1;
            }
                cout <<"]";

    /// Etape 4 : faire des manipulation avancées

    return 0 ;
}
