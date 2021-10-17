/*
    Programmer : Anamaria Andra Pescaru
*/
#include<stdio.h>
#include<stdlib.h>

typedef long long ll;



char* citire_sir(FILE *input){
	char* sir = (char *)malloc(100 * sizeof(char));
	int caracter = -1, d = 0;
    while(caracter){
        caracter = fgetc(input);
        if(caracter == EOF || caracter == '\n'){
            caracter = 0;
        }
        else{
            sir[d] = caracter;
            ++d;
        }
    }
    sir[d] = '\0';

	return sir;
}
void afisare_sir(char* sir, FILE *output){
	while(!*sir)
	fprintf(output, "%c", *sir++);
}
int main(){
	//sort(v + 1, v + n + 1);
	//for(i = 1;i <= n;i++)

	struct gara{
		char *nume;
		int nrTrenuri;
		struct tren *trenuri;
	};

	struct tren{
		int idTren;
		int nrVagoane;
		struct vagon *vagoane;
		struct ruta *route;
	};

	struct vagon{
		int **hartaScaune;
		int randuriScaune;
		int coloaneScaune;
	};

	struct ruta{
		int nrStatii;
		struct statie *statii;
		float distantaTotala;
	};

	struct statie{
		char *numeStatie;
		float coord_x;
		float coord_y;
	};
	struct calator{
		char destinatie[255];
		int *trenuriDestinatie;
		int nrTrenuriDestinatieGasite;
	};
	
    FILE *input, *output;
    input = fopen("input.txt", "rt");
    output = fopen("output.txt", "wt");

	struct gara *GARA = (struct gara*)malloc(sizeof(struct gara));
	GARA->nume = citire_sir(input);
    fprintf(output, "%s\n", GARA->nume);
	fscanf(input, "%d", &GARA->nrTrenuri);
    fprintf(output, "%d\n", GARA->nrTrenuri);
	int i;

    GARA->trenuri = (struct tren*)malloc(GARA->nrTrenuri * sizeof(struct tren));
	
    for(int i = 0; i < GARA->nrTrenuri; ++i){
        fscanf(input, "%d", &(GARA->trenuri + i)->idTren);
        fscanf(input, "%d", &(GARA->trenuri + i)->nrVagoane);
        (GARA->trenuri + i)->vagoane = (struct vagon*)malloc((GARA->trenuri + i)->nrVagoane * sizeof(struct vagon));
        (GARA->trenuri + i)->route = (struct ruta*)malloc(sizeof(struct ruta));
        struct tren *Aux = (GARA->trenuri + i); 
        for(int j = 0; j < Aux->nrVagoane; ++j){
            struct vagon *Aux2 = (Aux->vagoane + j);
            fscanf(input, "%d", &Aux2->randuriScaune);
            fscanf(input, "%d", &Aux2->coloaneScaune);
            Aux2->hartaScaune = (int **)malloc(Aux2->randuriScaune * sizeof(int*));
            for(int t = 0; t < Aux2->randuriScaune; ++t){
                Aux2->hartaScaune[t] = (int *)malloc(Aux2->coloaneScaune * sizeof(int));
            }
            for(int t = 0; t < Aux2->randuriScaune; ++t){
                for(int t1 = 0; t1 < Aux2->coloaneScaune; ++t1){
                    fscanf(input, "%d", &Aux2->hartaScaune[t][t1]);
                }
            }
        }
    }

    for(int i = 0; i < GARA->nrTrenuri; ++i){
        fprintf(output, "%d\n", (GARA->trenuri + i)->idTren);
        fprintf(output, "%d\n", (GARA->trenuri + i)->nrVagoane);
        struct tren *Aux = (GARA->trenuri + i); 
        for(int j = 0; j < Aux->nrVagoane; ++j){
            struct vagon *Aux2 = (Aux->vagoane + j);
            fprintf(output, "%d ", Aux2->randuriScaune);
            fprintf(output, "%d ", Aux2->coloaneScaune);
            for(int t = 0; t < Aux2->randuriScaune; ++t){
                for(int t1 = 0; t1 < Aux2->coloaneScaune; ++t1){
                    fprintf(output, "%d ", Aux2->hartaScaune[t][t1]);
                }
                fprintf(output, "\n");
            }
        }
    }





	return 0;
}


