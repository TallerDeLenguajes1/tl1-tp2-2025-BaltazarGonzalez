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
void masVieja(Compu pc[],int cant);
void masVeloz(Compu pc[],int cant);

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
void masVieja(Compu pc[],int cant){
    int com,vieja=3000,i=0;
    
    while(i<cant){
        if(pc[i].anio < vieja){
            vieja = pc[i].anio;
            com=i;
        }
        i++:
    }
    printf("la pc mas vieja velocidad: %d año: %d  nucleos: %d  Procesador: %s\n",pc[com].velocidad,pc[com].anio,pc[com].cNucleos,pc[com].tipoCpu);
}
void masVeloz(Compu pc[],int cant){
    int compu=0,veloz=0,i=0;
    
    while(i<cant){
        if(pc[i].velocidad>veloz){
            veloz=pc[i].velocidad;
            compu = i;
        }
        i++;
    }
     printf("la pc mas veloz: %d año: %d  nucleos: %d  Procesador: %s\n",pc[compu].velocidad,pc[compu].anio,pc[compu].cNucleos,pc[compu].tipoCpu);
}        