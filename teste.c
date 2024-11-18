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

//Tabela:
//ID de caso teste:
//lg_login_001.
//Titúlo:
//Verificar a funcionalidade de login com credenciais válidas.
//Objetivo:
//Ter certeza que o sistema consegue barrar acessos incorretos e assegurar acessos corretos.
//Pre-condições:
//Usuario deve cadastrar o codigo de entrada correto para adentrar o sistema.