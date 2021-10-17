/*
    Programmer : Anamaria Andra Pescaru
    Cerinta : Sunteți un dezvoltator de aplicații software pentru mobil și doriți să realizați un joc de cărți. Pornind
de la premisa că timpul de concentrare pe care o persoană îl alocă de obicei pentru o aplicație este
scurt, doriți ca și jocul sa fie rapid si ușor de urmărit de către utilizatori. În acest context, stabiliți ca
jocul de cărți să se desfășoare în runde scurte de joc unde, pentru fiecare rundă posibilă, fiecare
jucător primește câte o carte din setul de cărți în ordinea în care s-au înscris în joc, iar fiecare carte
corespunde unei anumite runde, în ordinea de desfășurare a rundelor, e.g., prima carte din set
corespunde rundei 1, a doua carte corespunde rundei 2, ..., a n-1 carte corespunde rundei finale.
Cărțile extrase de jucători sunt apoi comparate iar la finalul fiecărei runde, jucătorul care a extras
cartea cu cea mai mică valoarea este exclus din joc, moment ce declanșează o nouă rundă. Jocul
continuă în acest fel până când va ramâne un singur jucător în joc, acesta fiind declarat câștigător.
Pachetul din care jucătorii vor extrage cărți conține câte o carte din fiecare categorie: 14 (King), 13
(Queen), 12 (Jack), 11 (Ace), 10, ..., 2, toate de aceeași culoare, astfel că doi sau mai mult jucători
nu pot avea aceași categorie de carte într-o anumită rundă. Să se implementeze codul care să
realizeze aplicația menționată, astfel încât să permiteți adăugarea de jucători în ordinea înscrierii lor
în joc împreună cu setul de cărți de joc precum și afișarea jucătorilor rămași în fiecare rundă de joc.
Se vor citi de la tastatură (fluxul stdin) următoarele date:
● O valoare întreagă cuprinsă în intervalul [1; 2], reprezentând valoarea de testare test în
funcţie de care se va executa o anumită operație prezentată în continuare.
Pentru fiecare valoare de testare test, se va citi suplimentar:
Test 1.
Date de intrare:
Se vor citi de la tastatură (fluxul stdin) următoarele date:
1. Un număr n întreg reprezentând numărul inițial de jucători.
2. De pe următoarele n linii, un șir de caractere reprezentând numele fiecărui jucător
înregistrat, urmat de secvența de n-1 întregi reprezentând cărțile jucătorului pentru
cele n-1 posibile runde, fiecare linie urmată de caracterul linie nouă (tasta Enter).
Date de ieșire:
1. n șiruri de caractere reprezenând numele jucătorilor înregistrați în joc urmați fiecare
de secvența de întregi reprezentânt cărțile fiecăruia pentru cele n-1 posibile runde.
Test 2.
Date de intrare:
Se vor citi de la tastatură (fluxul stdin) următoarele date:
1. Un număr n întreg reprezentând numărul inițial de jucători.
2. De pe următoarele n linii, un șir de caractere reprezentând numele fiecărui jucător
înregistrat, urmat de secvența de n-1 întregi reprezentând cărțile jucătorului pentru
cele n-1 posibile runde, fiecare linie urmată de caracterul linie nouă (tasta Enter).
*/

#include<stdio.h>
#include<stdlib.h>
#include <string.h>
typedef long long ll;
typedef struct jucator jucator;
struct jucator{
        char *nume;
        int *runde;
};

int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)

    FILE *input, *output;
    input = fopen("input.txt", "rt");
    output = fopen("output.txt", "wt");

    jucator *p;
    int test, n, k;
    fscanf(input, "%d", &test);
   // scanf( "%d", &test);

    if(test == 1){
    fscanf(input, "%d", &n);
    //scanf( "%d", &n);
    p = ((jucator*)malloc(n*sizeof(jucator)));
    int i;
    for(i = 0;i < n; i++){
        (p + i)->nume = (char*)malloc(100*sizeof(char));
        fscanf(input, "%s", (p + i)->nume);
        //scanf( "%s", (p + i)->nume);
        (p + i)->runde = (int*)malloc((n - 1)*sizeof(int));
        int j;
        int *aux = (p + i)->runde;
        for(j = 0; j < n - 1; j++){
            fscanf(input, "%d", &(*((p + i)->runde + j)));
            //scanf("%d", &(*((p + i)->runde + j)));
        }
    }
    for(i = 0;i < n; i++){
        char *aux = (p + i)->nume;
        fprintf(output, "%s ", aux);
        //printf( "%s ", aux);
        int j;
        for(j = 0; j < n - 1; j++)
        fprintf(output, "%d ", *((p + i)->runde + j));
        //printf( "%d ", *((p + i)->runde + j));
        fprintf(output, "\n");
        //printf( "\n");
    }

    }
    else{
    fscanf(input, "%d", &n);
    //scanf("%d", &n);
     p = ((jucator*)malloc(n*sizeof(jucator)));
     int i, j;
     for(i = 0;i < n; i++){
        (p + i)->nume = (char*)malloc(100*sizeof(char));
        fscanf(input, "%s", (p + i)->nume);
        //scanf( "%s", (p + i)->nume);
        (p + i)->runde = (int*)malloc((n - 1)*sizeof(int));
       
        int *aux = (p + i)->runde;
        for(j = 0; j < n - 1; j++){
            fscanf(input, "%d", &(*((p + i)->runde + j)));
            // scanf("%d", &(*((p + i)->runde + j)));
        }
    }
    int mini;
    
     for(i = 0;i < n - 1;i ++){
         if(i != 0){
            fprintf( output,"\n");
              //  printf( "\n");
         }
         mini = 9999;
         for(int f = 0; f < n; f ++){
             if((mini > *((p+f)->runde+i)) && (*((p+f)->runde+i) != -1) )
             mini = *((p+f)->runde+i);
         }
         for(j = 0; j < n; j ++){
             if(mini == *((p+j)->runde + i)){
                 for(int f = i; f < n - 1; f ++)
                 *((p+j)->runde + f) = -1;
             }
             if( *((p+j)->runde + i) != -1  ){
                 char *aux = (p + j)->nume;
                  fprintf(output, "%s ", aux);
               //printf( "%s ", aux);
                  for(k = 0; k < n - 1; k++)
                fprintf( output,"%d ", *((p + j)->runde + k));
                  //printf("%d ", *((p + j)->runde + k));
                 fprintf( output,"\n");
                // printf( "\n");
             }
         }
     }

    }
    
	return 0;
}


