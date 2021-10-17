/*
    Programmer : Anamaria Andra Pescaru
    Cerinta :
    Sunteți un dezvoltator de aplicații software și lucrați la o aplicație de tip calendar. Pentru ca aplicația să aibă succes, trebuie să poată să realizeze funcții uzuale, cum ar fi: adăugarea de evenimente în calendar, afișarea evenimentelor [în ordine cronologică] și căutare de evenimente după dată, respectiv titlu. În acest context, doriți să folosiți formatul yyyymmdd (y = year/an, m = month/lună, d = day/zi, ex: 20210407) pentru a reprezenta data evenimentului, lucru ce permite și indexarea lui. Să se implementeze codul care realizează aplicația menționată, astfel încât să permiteți adăugarea de evenimente, afișarea de evenimente și căutarea de evenimente după titlu, respectiv dată. 

Se va citi de la tastatură (fluxul stdin) un întreg c, în buclă, reprezentând selecția unei comenzi. În funcție de valoarea comenzii se vor executa astfel:
comanda de adăugare eveniment: se citește un șir de caractere fără spații reprezentând titlul unui eveniment, urmat de un număr întreg reprezentând ziua evenimentului în formatul menționat (ex: "Workshop 20210407"). Evenimentul se adaugă la sfârșitul evenimentelor deja existente în calendar.
comanda de căutare a unui eveniment după titlu: se citește un șir de caractere fără spații reprezentând titlul unui eveniment. Se afișează, în consolă, toate datele în care a avut loc evenimentul respectiv, fiecare pe un nou rând. Dacă există mai multe repetări ale aceluiași eveniment, se vor afișa în ordinea în care au fost introduse de la tastatură.
comanda de căutare a evenimentelor după dată: se citește un număr întreg reprezentând data unui eveniment în formatul menționat. Se afișează în consolă, numele tuturor evenimentelor ce au avut loc în acea dată, fiecare pe un nou rând. Dacă mai multe evenimente au avut loc în aceeași dată, se vor afișa în ordinea în care au fost introduse de la tastatură.
comanda de afișare a tuturor evenimentelor: se afișează în consolă, evenimentele în ordinea în care au fost introduse. Afișarea unui eveniment se face sub forma <titlu> <dată>, fiecare eveniment pe un nou rând.
comanda de afișare a tuturor evenimentelor în ordine cronologică. Dacă mai multe evenimente au avut loc în aceeași dată, se vor afișa în ordinea în care au fost introduse de la tastatură, fiecare pe un nou rând. Afișarea unui eveniment se face sub forma <titlu> <dată>, fiecare eveniment pe un nou rând.
comanda de întrerupere și ieșire din program.
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct node node;
typedef struct lista lista;
struct node{
    char *nume;
    int data;
    node *next;
};
struct lista{
    node *root;
    int nr_evenimente;
};

int main(){

    // FILE *input, *output;
    // input = fopen("input.txt", "rt");
    // output = fopen("output.txt", "wt");

    lista *eveniment = (lista*)malloc(sizeof(lista));
    eveniment -> root = (node*)malloc(sizeof(node));
    eveniment -> nr_evenimente = 0;

    int comanda;
    node *p = eveniment -> root;
    int afara = 1;
    while (scanf("%d", &comanda) != EOF && afara)
    {
        if(comanda == 1){
            p -> nume = (char*)malloc(20*sizeof(char));
            p -> next = NULL;
            scanf("%s", p -> nume);
            scanf("%d", &(p -> data));
            eveniment -> nr_evenimente ++;
            p -> next = (node*)malloc(sizeof(node));
            p = p -> next;
        }
        if(comanda == 2){
            p = eveniment -> root;
            char *ev = (char*)malloc(20*sizeof(char));
            scanf("%s", ev);
            int nr2 = 0;
            for(int j = 0; ev[j]; j ++)
            nr2++;
            for(int i = 1;i <= eveniment -> nr_evenimente; i ++){
                int ok = 1;
                int nr1 = 0;
                for(int j = 0; p -> nume[j] ; j ++)
                nr1++;
                if(nr1 != nr2)
                ok = 0;
                else
                for(int j = 0; j < nr1  && ok; j ++)
                if(p -> nume[j] != ev[j] )
                ok = 0;
                if(ok)
                printf("%d \n", *(&(p -> data)));
                p = p -> next; 
            }
        }
        if(comanda == 3){
            p = eveniment -> root;
            int numar;
            scanf("%d", &numar);
            for(int i = 1;i <= eveniment -> nr_evenimente; i ++){
                if(p -> data == numar)
                printf("%s ", p -> nume);
                p = p -> next;
            }
        }
        if(comanda == 4){
            p = eveniment -> root;
            for(int i = 1; i <= eveniment -> nr_evenimente; i++){
                printf("%s ", p -> nume);
                printf("%d \n", *(&(p -> data)));
                p = p -> next;
            }
        }
        if(comanda == 5){
            int ocupat[eveniment -> nr_evenimente];
            for(int i = 1;i <= eveniment -> nr_evenimente; i++)
            ocupat[i] = 0;
            int ll = 0;
            while(ll <= eveniment -> nr_evenimente ){ 
                p = eveniment -> root;
                long long mini = 9999999999;

                for(int i = 1; i <= eveniment -> nr_evenimente; i++){
                    if(mini > p -> data && ocupat[i] != -1)
                    mini = p -> data;
                    p = p -> next;
                }

                p = eveniment -> root;
                for(int i = 1; i <= eveniment -> nr_evenimente; 
                i++){
                    if(mini == p -> data ){
                        printf("%s ", p -> nume);
                        printf("%d \n", *(&(p -> data)));
                        ocupat[i] = -1;
                        ll ++;
                    }
                    p = p -> next;

                }

            }
        }
        if(comanda == 6)
        afara = 0;
    }
   
    
	return 0;
}


