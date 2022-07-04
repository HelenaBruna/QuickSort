#include <stdio.h>
#include <stdlib.h>

int dividir(int vetor[], int esq, int dir){
    int aux; 
    int cont = esq;

    for(int i= esq +1; i <= dir; i++){

        if( vetor[i] < vetor[esq] ){
            cont++;
            aux=vetor[i];
            vetor[i]=vetor[cont];
            vetor[cont]=aux;
        }
    }

    aux=vetor[esq];
    vetor[esq]=vetor[cont];
    vetor[cont]=aux;

    return cont;
}

void QuickSort(int vetor[],int esq, int dir){
    int pos;
    if(esq < dir){
        pos = dividir(vetor,esq,dir);
        QuickSort(vetor,esq,pos-1);
        QuickSort(vetor,pos+1,dir);
    }
}

int main(){

    int vetor[] = {49, 38, 58, 87, 34, 93, 26, 13};
    int n = 7;

    QuickSort(vetor,0,n);

    for(int i=0;i<=n;i++)
    {
        printf("%d ",vetor[i]);
    }

    return 0;
}