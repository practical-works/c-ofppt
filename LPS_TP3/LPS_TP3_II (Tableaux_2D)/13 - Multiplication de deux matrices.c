/* Exercice 13 : la multiplication de deux matrices
En multipliant une matrice A(N,M) avec une matrice B(M,P) on obtient une matrice C(N,P) : A(N,M) * B(M,P) = C(N,P)
La multiplication de deux matrices se fait en multipliant les composantes des deux matrices lignes par colonnes.
Ecrire un programme qui effectue la multiplication de deux matrices A et B. Le résultat de la
multiplication sera mémorisé dans une troisième matrice C qui sera ensuite affichée. */
#include <stdio.h>
main()
{
	int I, J, K, A[100][100], B[100][100], C[100][100], N, M, P;
	start:
	system("color 4f");
	printf("La multiplication de deux matrices\n\n");
	
// Création et Remplissage des tableaux
	printf("1ere Matrice A(N,M):\n\n");
	printf("\tEntrez un nombre de lignes (N): ");
	scanf("%d", &N);
	printf("\tEntrez un nombre de colonnes (M): ");
	scanf("%d", &M);
	printf("\n");
	printf("2eme Matrice B(M,P):\n\n");
	printf("\tLe nombre de lignes (M) est: %d\n", M);
	printf("\tEntrez un nombre de colonnes (P): ");
	scanf("%d", &P);
	
	printf("\nRemplissage des tableaux:\n\n");
	printf(" Remplir la 1ere Matrice A(%d,%d):\n\n", N,M);
	for (I=0; I<N; I++) {
		for (J=0; J<M; J++) {
	        printf("\t(%d,%d) Entrez une valeur: ",I,J);
	        scanf("%d", &A[I][J]);
	    }
	}
	    
	printf("\n Remplir 2eme Matrice B(%d,%d):\n\n", M,P);
	for (I=0; I<M; I++) {
	 	for (J=0; J<P; J++) {
	        printf("\t(%d,%d) Entrez une valeur: ",I,J);
	        scanf("%d", &B[I][J]);
	    }
	}
	    

// Affichage des tableaux
	printf("\nAffichage de la 1ere Matrice A(%d,%d):\n\n", N,M);
	for (I=0; I<N; I++) {
	    for (J=0; J<M; J++) {
	    	printf("\t%d", A[I][J]);
		}
	    printf("\n\n");
	}
	printf("\nAffichage de la 2eme Matrice B(%d,%d):\n\n", M,P);
	for (I=0; I<M; I++) {
	    for (J=0; J<P; J++) {
	    	printf("\t%d", B[I][J]);
		}
	    printf("\n\n");
	}

// Multiplication, affectation, et affichage du résultat ( A(N,M) * B(M,P) = C(N,P) )
	for (I=0; I<N; I++) {
		for (J=0; J<P; J++) {
	        
			C[I][J]=0;
	        for (K=0; K<M; K++) {
	        	C[I][J] += A[I][K]*B[K][J];
			}
	               
	    }
	}
	    

	 printf("Affichage de la Matrice resultat C(%d,%d):\n\n", N,P);
	 for (I=0; I<N; I++) {
	    for (J=0; J<P; J++) {
	     	printf("\t%d", C[I][J]);
		}      
	    printf("\n\n");
	}
//----------------------------------------------------------
system("pause>nul");
system("cls");
fflush(stdin);
goto start;
return 0;
}
