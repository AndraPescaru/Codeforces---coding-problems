/*
    Programmer : Anamaria Andra Pescaru
    Cerinta : Descriere
Ați fost angajați de conducerea unui spital de urgență să scrieți un program care să decidă ordinea preluării pacienților în UPU (Unitatea Primiri Urgențe). Fiecărui pacient i se atribuie o prioritate la venire, în funcție de cât de severă este starea sa. Medicii de gardă vor prelua apoi pacienții întâi în ordinea priorității și apoi în ordinea venirii. Altfel spus, dacă în coadă sunt doar pacienți cu aceeași prioritate, primul pacient sosit este și cel servit. Dacă în coadă sunt pacienți cu priorități diferite, este consultat pacientul cu prioritatea maximă, indiferent de când a fost adăugat în coadă. Dacă există mai mulți pacienți cu aceeași prioritate maximă, se va consulta acela dintre ei care a venit primul. Prioritatea este reprezentată de o valoare numerică întreagă fără semn, unde 0 este prioritatea maximă și pe măsură ce valoarea crește, prioritatea scade. 

Formatul liniilor citite de la tastatură este:
+ NUME PRENUME VÂRSTĂ SEX PRIORITATE
sau
-
sau
*
Dacă linia citită de la tastatură începe cu +, atunci se va introduce pacientul respectiv în coada cu priorități. Exemple:
+ Ion Popescu 36 M 3
+ Maria Ghitescu 23 F 2
+ Ghita Ion 12 M 0
Dacă linia începe cu -, ea nu va mai conține nimic după și acest lucru comandă extragerea și afișarea pe ecran a informațiilor a primului pacientul sosit cu prioritatea maximă, dar fără valoarea priorității. Dacă linia începe cu *, ea nu va mai conține nimic după și acest lucru comandă dezalocarea memoriei utilizate și oprirea aplicației. 
*/
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct nod nod;
typedef struct lista lista;
struct nod{
    char *nume;
    char *prenume;
    int ani;
    char *sex;
    int prioritate;
     
};
int main(){

    // FILE *input, *output;
    // input = fopen("input.txt", "rt");
    // output = fopen("output.txt", "wt");
    char *cod; 
    nod *p = (nod*)malloc(100*sizeof(nod));
    
    int comanda = 1;
    int  i = 1;
    int *v = (int*)malloc(100*sizeof(char));
    while(comanda){
        cod = (char*)malloc(sizeof(char));
        scanf("%s", cod);
        if( *cod == '+'){
            (p + i) -> nume = (char*)malloc(20*sizeof(char));
            (p + i) -> prenume = (char*)malloc(20*sizeof(char));
            (p + i) -> sex = (char*)malloc(10*sizeof(char));
            scanf("%s", (p + i) -> nume);
            scanf("%s", (p + i) -> prenume);
            scanf("%d", &((p + i) -> ani));
            scanf("%s", (p + i) -> sex);
            scanf("%d", &((p + i) -> prioritate));
            // fscanf(input,"%s", (p + i) -> nume);
            // fscanf(input,"%s", (p + i) -> prenume);
            // fscanf(input,"%d", &((p + i) -> ani));
            // fscanf(input,"%s", (p + i) -> sex);
            // fscanf(input,"%d", &((p + i) -> prioritate));
            *(v + i) = (p + i) -> prioritate;
            i++;
        }
        if(*cod == '-'){
            int mini = 999999;
            for(int j = 1;j < i;j++){
                if(*(v + j) != -1)
                if(mini > (p + j) -> prioritate)
                mini = (p + j) -> prioritate;
            }
            int ok = 1, pozitie;
            for(int j = 1;j < i && ok;j++){
                if(*(v + j) != -1)
                if(mini == (p + j) -> prioritate)
                ok = 0, pozitie = j;
            }
            printf("%s ", (p + pozitie) -> nume);
            printf("%s ", (p + pozitie) -> prenume);
            printf("%s\n", *(&((p + pozitie) -> sex)));
            *(v + pozitie) = -1;
        }
        if(*cod == '*'){
            comanda = 0;
        }

    }
    
	return 0;
}


