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

void listarPc(Compu pc[],int cant);

int main() {
    
    srand(time(NULL));
   
    int num;
    char tipos[6][10] = {"Intel", "AMD", "Celeron", "Athlon", "Core",
"Pentium"};


   
    Compu pcs[5];
    for(int i=0;i<5;i++){
        pcs[i].velocidad = 1+rand()%3;
        pcs[i].anio = (rand()%(2024-2015+1)+2015);
        pcs[i].cNucleos = 1+rand()%8;
        num = rand()%5;
        pcs[i].tipoCpu = tipos[num];
        
    }
    return 0;
    }
void listarPc(Compu pc[],int cant){
    for(int a=0;a<cant;a++){
        printf("velocidad: %d año: %d  nucleos: %d  Procesador: %s\n",pc[a].velocidad,pc[a].anio,pc[a].cNucleos,pc[a].tipoCpu);
    }
}        