#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i = 0, j, chave, tam;
    char *codigo = (char *)malloc(sizeof(char) * 50);
    char alfa[26][27] = {
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ",
        "ZABCDEFGHIJKLMNOPQRSTUVWXY",
        "XZABCDEFGHIJKLMNOPQRSTUVWX",
        "XYZABCDEFGHIJKLMNOPQRSTUVW",
        "WXYZABCDEFGHIJKLMNOPQRSTUV",
        "VWXYZABCDEFGHIJKLMNOPQRSTU",
        "UVWXYZABCDEFGHIJKLMNOPQRST",
        "TUVWXYZABCDEFGHIJKLMNOPQRS",
        "STUVWXYZABCDEFGHIJKLMNOPQR",
        "RSTUVWXYZABCDEFGHIJKLMNOPQ",
        "QRSTUVWXYZABCDEFGHIJKLMNOP",
        "PQRSTUVWXYZABCDEFGHIJKLMNO",
        "OPQRSTUVWXYZABCDEFGHIJKLMN",
        "NOPQRSTUVWXYZABCDEFGHIJKLM",
        "MNOPQRSTUVWXYZABCDEFGHIJKL",
        "LMNOPQRSTUVWXYZABCDEFGHIJK",
        "KLMNOPQRSTUVWXYZABCDEFGHIJ",
        "JKLMNOPQRSTUVWXYZABCDEFGHI",
        "IJKLMNOPQRSTUVWXYZABCDEFGH",
        "HIJKLMNOPQRSTUVWXYZABCDEFG",
        "GHIJKLMNOPQRSTUVWXYZABCDEF",
        "FGHIJKLMNOPQRSTUVWXYZABCDE",
        "EFGHIJKLMNOPQRSTUVWXYZABCD",
        "DEFGHIJKLMNOPQRSTUVWXYZABC",
        "CDEFGHIJKLMNOPQRSTUVWXYZAB",
        "BCDEFGHIJKLMNOPQRSTUVWXYZA"};

    scanf("%d ", &n);
    
    while(i++ < n) {
      scanf("%s", codigo);
      scanf("%i", &chave);
        
      tam = 0;

        while (codigo[tam] != '\0')
            tam++;

        j = 0;

          while (j < tam) {
            codigo[j] = alfa[chave][codigo[j] - 'A'];
            j++;
        }
        
        printf("%s\n", codigo);
    }
    
    return 0;
}