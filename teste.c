#include<stdio.h>
#include<assert.h>

int registro_teste(int r){
    assert(r==r);
    printf("\t\tprimeiro teste correto\n");
    assert(r==99929);
    printf("\t\tsegundo teste correto\n");
    return(r);
}

int main(){
    int r;
    printf("\t\tSeu registro e 99929\n");
    printf("\t\tEntre seu registro na locadora:\n");
    scanf("%d", &r);
    registro_teste(r);
    printf("\t\tVerificacao de registros %d", r);
    return 0;
}
