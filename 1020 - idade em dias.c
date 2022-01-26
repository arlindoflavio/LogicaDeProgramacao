#include <stdio.h>

int main() {
    
    int dias, mes, ano;
    
    scanf("%d", &dias);
    
    if(dias < 30){
        printf("0 ano(s)\n");
        printf("0 mes(es)\n");
        printf("%d dia(s)\n", dias);
    }
    
    else
        if(dias >= 30 && dias <= 365){
            mes = dias / 30;
            dias = dias - (mes * 30);
            printf("0 ano(s)\n");
            printf("%d mes(es)\n", mes);
            printf("%d dia(s)\n", dias);
        }
    
        else
            if(dias > 365){
                ano = dias / 365;
                mes = (dias - (ano * 365)) / 30;
                dias = (dias - (ano * 365) - (mes * 30)) / 2;
                printf("%d ano(s)\n", ano);
                printf("%d mes(es)\n", mes);
                printf("%d dia(s)\n", dias);
        }
        
    return 0;
}