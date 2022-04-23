#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define  MAX 100000


struct HashMap {
    char *key;
    int value;

};

struct HashMap *v;


int hashfunc( char *key) {
        
        int sum = 0;

        for (int i = 0; key[i] ; ++i) {

            sum += (int)(key[i]) * (i + 1);
            sum = sum % MAX;

        }

        return sum;
}

void add( char *key) {
    int code = hashfunc(key);
    int i = code;
    

    while (v[i].key != NULL && strcmp(v[i].key, key) != 0 ) {
        i++;
        if (i == MAX) {
            i = 0;
        }
    }

    if (v[i].key == NULL) {
        v[i].key = (char*) malloc((strlen(key) + 1) * sizeof(char));
        strcpy(v[i].key, key);
        v[i].value++;

    } else {
        v[i].value++;
    }
    
}

int getvalue(char *key) {
    int code = hashfunc(key);
    int i = code;
    

    while (strcmp(v[i].key, key) != 0) {
        i++;
        if (i == MAX) {
            i = 0;
        }
    }

    return v[i].value;
}

int main() {

    char s[1000001];

    int n;
    scanf("%d", &n);

    v = (struct HashMap*) malloc (MAX * sizeof(struct HashMap));

    for (int i = 0; i < MAX; ++i) {
        v[i].key = NULL;
        v[i].value = 0;
    }
    int maxi = -1;
    char retin[1000];


    for (int i = 0; i < n; ++i) {
        scanf("%s", s);
        add(s);
        
        if (maxi < getvalue(s)){
            maxi = getvalue(s);
            strcpy(retin,s);
        }
    }


    printf("%d  %s\n", maxi, retin);



    return 0;
}
