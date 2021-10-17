/*
    Programmer : Anamaria Andra Pescaru
    Comenzi robot
Cerință
Sunteți un dezvoltator de aplicații software și lucrați la o aplicație care să permită controlul unui
robot de la distanță. Pentru a asigura buna funcționare a robotului, trebuie să dezvoltați un mediu de
testare prin care să permiteți construirea unei liste de instrucțiuni pe care robotul trebuie să le
execute întocmai ordinii lor. Se cunoaște despre robot că poate să realizeze următoarele funcții:
deplasare înainte, înapoi, dreapta și respectiv, stânga. În cazul în care o comandă este introdusă
eronat, se poate adăuga o comanda numită șterge, care șterge comanda ce o precede. Mai multe
comenzi de ștergere vor șterge din listă comenzi succesive anterioare. Robotul va executa
comenzile de îndată ce primește comanda numită execută. Să se implementeze codul care să
realizeze aplicația menționată, afișând în consolă lista de comenzi pe care trebuie sa o execute
robotul.
Se vor citi de la tastatură (fluxul stdin) următoarele date:
● O valoare întreagă cuprinsă în intervalul [1; 2], reprezentând valoarea de testare test în
funcţie de care se va executa o anumită operație prezentată în continuare.
Pentru fiecare valoare de testare test, se va citi suplimentar:
Test 1.
Date de intrare:
Se vor citi de la tastatură (fluxul stdin) următoarele date:
Până la întâlnirea EOF, se vor citi linii conținând instrucțiunile date robotului, fiecare
urmată de caracterul linie nouă (tasta Enter).
Date de ieșire:
Lista de instrucțiuni transmisă robotului, incluzând instrucțiunile de ștergere și execuție,
fiecare urmată de caracterul linie nouă (tasta Enter).
*/
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
typedef long long ll;
typedef struct lista lista;
typedef struct node node;

struct node{
    char *comanda;
    node *next;
};

struct lista{
        node *cap;
        int nr_total;
};
int main(){
	
    FILE *input, *output;
    input = fopen("input.txt", "rt");
    output = fopen("output.txt", "wt");

    lista *robot = (lista *)malloc(sizeof(lista));
    robot->cap = (node *)malloc(sizeof(node));
    robot->nr_total = 0;
    robot->cap->comanda = (char *)malloc(100 * sizeof(char));
    robot->cap->next = NULL;
    node *p = robot->cap;
    while(fscanf(input, "%s", p->comanda) != EOF){
        robot->nr_total++;
        p->next = (node *)malloc(sizeof(node));
        p = p->next;
        p->next = NULL;
        p->comanda = (char *)malloc(100 * sizeof(char));
    }
    



    p = robot->cap;
    for(int i = 1; i <= robot->nr_total; ++i){
        fprintf(output, "%s\n", p->comanda);
        p = p->next;
    }
    
    

	return 0;
}


