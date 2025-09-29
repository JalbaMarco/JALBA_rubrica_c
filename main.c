#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[30];
    char cognome[30];
    char telefono[15];

}Contatto;

int main(void) {

    return 0;
}
int Aggiungi(Contatto a[]) {
    int n=-1;
    for (int i = 0; i<20; i++) {
        if ((strcmp(a[i].nome, "-\0") == 0) && (strcmp(a[i].cognome, "-\0") == 0 )&&
        strcmp(a[i].telefono, "-\0") == 0) {

           n= i;
            break;
            }
    }
    if (n == -1) {
        printf("Rubrica piena \n");
    }else {
        scanf("%s", a[n].nome);
        scanf("%s", a[n].cognome);
        scanf("%s", a[n].telefono);

    }


}