/*
    Programmer : Anamaria Andra Pescaru
    Loto 6/49
Loteria Romana v-a angajat să scrieți un program care analizează biletele jucate de clienți la 6/49.
Date de intrare:
Se vor citi de la tastatură linii separate conținând următoarele date, în ordine:
● Un număr natural 𝑐 ϵ {1, 2}reprezentând o comandă;
● Un număr natural k reprezentând numărul de jucători;
● Un număr natural reprezentând N valori ce vor fi citite pentru fiecare jucător;
● De pe următoarele k linii se vor citi datele jucătorilor sub forma:
<prenume> <nume> x_1 x_2 x_3 ... x_N
unde:
○ <prenume> si <nume> sunt șiruri de maxim 30 caractere fiecare, fără spații;
○ x_1 x_2 x_3 ... x_N sunt N valori reprezentând combinațiile jucate. Fiecare grup consecutiv de 6
numere (dintre cele N) reprezintă o combinație jucată. În cadrul unei secvențe de N numere există
posibilitatea ca un număr să apară de mai multe ori, însă se garantează că nu există repetiții într-un
grup de 6 numere consecutive. Numerele combinațiilor sunt separate prin " "(spațiu).
În funcție de valorea comenzii (1 sau 2), se vor executa diferite procese:
● Valoarea 1 – Pentru fiecare jucător să se afișeze pe ecran numele și numerele jucate, întocmai în ordinea
introducerii de la tastatură. Pentru a simplifica afișarea, fiecare valoare va fi urmată de caracterul ' ' (spațiu) și
fiecare linie (inclusiv ultima) va fi urmată de un caracter newline (tasta Enter).
● Valoarea 2 – Pentru fiecare jucător să se afișeze numele urmat de numărul maxim de numere ghicite dintre
toate combinațiile jucate de respectivul jucător. În cazul în care jucătorul nu a ghicit niciun număr se va afișa 0
în dreptul lui. Pentru a simplifica afișarea, fiecare linie (inclusiv ultima) va fi urmată de un caracter newline
(tasta Enter).
*/
#include<stdio.h>
#include<stdlib.h>

struct loterie{
    char *nume;
    char *prenume;
    int *numere;
};


int main(){

    FILE *input, *output;
    input = fopen("input.txt", "rt");
    output = fopen("output.txt", "wt");
    int test;
    fscanf(input,"%d", &test);
    int persoane, nr_numere;
    fscanf(input,"%d", &persoane);
    fscanf(input,"%d", &nr_numere);
    int *extragere = (int*)malloc(6*sizeof(int));
    int i, j;
    for(i = 0; i < 6; i ++)
    fscanf(input,"%d", &(*(extragere + i)));
    struct loterie *p = (struct loterie*)malloc(persoane*sizeof(struct loterie));
    for(i = 0;i < persoane; i ++){
        (p + i)->prenume = (char*)malloc(31*sizeof(char));
          fscanf(input, "%s", (p + i)->prenume);

         (p + i)->nume = (char*)malloc(31*sizeof(char));
          fscanf(input, "%s", (p + i)->nume);

          (p + i)->numere = (int*)malloc(nr_numere*sizeof(int));
          for(j = 0; j < nr_numere; j ++){
               fscanf(input, "%d", &(*((p + i)->numere + j)));
          }
    }
    if(test == 1){
        for(i = 0;i < persoane; i ++){
        fprintf(output, "%s ", (p + i)->prenume);
        //printf("%s ", (p + i)->prenume);
          fprintf(output, "%s ", (p + i)->nume);
        //printf("%s ", (p + i)->nume);
          
          for(j = 0; j < nr_numere; j ++){
              fprintf(output, "%d ", *((p + i)->numere + j));
             //printf( "%d ", *((p + i)->numere + j));
          }
        fprintf(output, "\n");
         //printf( "\n");
    }
    }
    else{
        int *stocare = (int*)malloc(nr_numere*sizeof(int));
       for(int k = 0; k < persoane; k ++){
           fprintf(output, "%s ", (p + k)->prenume);
           fprintf(output, "%s ", (p + k)->nume);
            for(i = 0; i < nr_numere; i ++){
                int ok = 1;
                for(j = 0;j < 6 && ok; j ++){
                if(*((p+k)->numere+i) == *(extragere+j) ){
                    *(stocare + i) = 1, ok = 0;
                }
                else
                *(stocare + i) = 0;
                }
            }
            int nr = 0, max = -1;
            for(i = 0 ; i < nr_numere - 6 ;i ++){
                int mm = 6 + i; nr = 0;
                for(j = i; j < mm; j++){
                    if(*(stocare + j) == 1)
                    nr ++;
                }
                if(nr > max)
                max = nr;
            }
            fprintf(output, "%d", max);
            fprintf(output, "\n");
       }
    }

    
	return 0;
}


