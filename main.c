#include <stdio.h>
#include <string.h>
typedef struct {
    char nome[30];
    char cognome[30];
    char telefono[15];

}Contatto;
int Aggiungi(Contatto a[]);
int Visualizza(Contatto a[]);
int main(void) {
    Contatto rubri[20];
    int scelta = 0;


    for (int i = 0; i < 20; i++) {
        strcpy(rubri[i].nome, "");
        strcpy(rubri[i].cognome, "");
        strcpy(rubri[i].telefono, "");  // strcpy incolla in questo caso in rubri in quella posizione la ""
    }

    while (scelta != 5) {
        printf("\n RUBRICA \n");
        printf("1. Aggiungi contatto\n");
        printf("2. Visualizza rubrica\n");
        printf("3. Ricerca per cognome \n");
        printf("4. Elimina contatto \n");
        printf("5. Esci\n");
        printf("Scelta: ");
        scanf("%d", &scelta);

        if (scelta == 1) {
            Aggiungi(rubri);
        } else if (scelta == 2) {
            Visualizza(rubri);
        } else if (scelta == 3) {
            printf("Lavori in corso\n");
        } else if (scelta == 4) {
            printf("Lavori in corso\n");
        }
    }
        printf("Uscita dal programma...\n");
        return 0;

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
int Visualizza(Contatto a[]) {
    for ( int i = 0; i<20; i++) {
        if (a[i].nome!="\0")
        printf("Nome: %s", a[i].nome);
        printf("Cognome: %s", a[i].cognome);
        printf("Telefono: %s", a[i].telefono);
    }
    return 0;
}



