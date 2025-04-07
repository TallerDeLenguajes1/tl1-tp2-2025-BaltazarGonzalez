#include <stdio.h>
#include <stdlib.h>
#include <time.h>
struct compu{
    int velocidad;
    int anio;
    int cNucleos;
    char *tipoCpu;
};
typedef struct compu Compu;

int main() {
    
    srand(time(NULL));
   
    int num;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
"Pentium"};
   
    Compu pcs[5];
    for(int i=0;i<5;i++){
        pcs[i].velocidad = 1+rand()%3;
        pcs[i].anio = 2015+rand()%2024;
        pcs[i].cNucleos = 1+rand()%8;
        num = rand()%5;
        pcs[i].tipoCpu = tipos[num];
        
    }
    return 0;
    }