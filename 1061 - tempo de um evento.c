#include <stdio.h>
#include <math.h>

int main (){

    int dia = 0, diaF = 0, hora = 0, horaF = 0, min = 0, minF = 0, seg = 0, segF = 0;

    scanf("Dia %d\n", &dia);

    scanf("%d : %d : %d\n", &hora, &min, &seg);

    scanf("Dia %d\n", &diaF);

    scanf("%d : %d : %d\n", &horaF, &minF, &segF);

    seg = segF - seg;
    
    min = minF - min;
    
    hora = horaF - hora;
    
    dia = diaF - dia;

    if(seg < 0){
        seg += 60;
        min --;
    }

    if (min < 0){
        min += 60;
        hora --;
    }

    if (hora < 0){
        hora += 24;
        dia --;
    }  

    printf("%d dia(s)\n", dia);
    printf("%d hora(s)\n", hora);
    printf("%d minuto(s)\n", min);
    printf("%d segundo(s)\n", seg);
}

    return 0;
}


printf("%d dia(s)\n", dia);
 printf("%d hora(s)\n", hora);
 printf("%d minuto(s)\n", minuto);
 printf("%d segundo(s)\n", segundo);
}