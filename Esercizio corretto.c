#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() {
    char scelta = '\0';
    menu();
    
 // Utilizzo di %c per leggere un carattere di tipo char
    scanf(" %c", &scelta);

    switch (scelta) {
        case 'A': 
            moltiplica();
            break;
        case 'B':
            dividi();
            break;
        case 'C':
            ins_string();
            break;
        default:    // Impostatata la casistica di default
            printf("Selezione non valida.\n");
            break;
    }    

    return 0;
}

void menu() {
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\n");
}

void moltiplica() {
    int a, b; // Eliminato short
    printf("Inserisci i due numeri da moltiplicare:");
    scanf("%d %d", &a, &b); // Cambiato a %d per leggere interi e unito in una riga i due scanf

    int prodotto = a * b;

    printf("Il prodotto tra %d e %d e': %d\n", a, b, prodotto);
}

void dividi() {
    int a, b; //Eliminata la dichiarazione =0
    printf("Inserisci il numeratore:");
    scanf("%d", &a);
    printf("Inserisci il denominatore:");
    scanf("%d", &b);

    if (b != 0) {
        int divisione = a / b;
        printf("La divisione tra %d e %d e': %d\n", a, b, divisione);
    } else {
        printf("Errore: divisione per zero non consentita.\n");
    } // Aggiunta l'avviso del denominatore = 0
}

void ins_string() {
    char stringa[10];
    printf("Inserisci la stringa (massimo 10 caratteri):");

    // Utilizzo di %9s per leggere al massimo 9 caratteri e impostato l'avviso di massimo 10 caratteri 
    scanf("%9s", stringa);

    printf("Hai inserito la stringa: %s\n", stringa);
}
