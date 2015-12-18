#include<cstdio>
#include<cstdlib>


struct nodo{
    int info;
    struct nodo *sgt;
};

int main(){
    struct nodo *cabe;
    struct nodo *nuevo;
    struct nodo *aux;
    cabe=NULL;
    int dato;
    int cant=20, cont;

       for(int i=0; i<cant; i++ )
    {
    nuevo=(struct nodo *)malloc(sizeof(struct nodo));
    nuevo->sgt=cabe;

    dato = rand()%(100);
    nuevo->info=dato;
    cabe=nuevo;
    }

    while(nuevo!=NULL){
        printf("%i,",nuevo->info);
        nuevo=nuevo->sgt;
    }


}
