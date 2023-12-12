#include <stdio.h>

void menu();
void moltiplica();
void dividi();
void ins_string();

int main() {
    char scelta = '\0';
    
    do {
        menu();

        if (scanf(" %c", &scelta) != 1) {
            printf("Errore nell'input.\n");
            return 1;
        }

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
            case 'Q':
                printf("Arrivederci!\n");
                break;
            default:
                printf("Selezione non valida.\n");
                break;
        }

    } while (scelta != 'Q');

    return 0;
}

void menu() {
    printf("Benvenuto, sono un assistente digitale, posso aiutarti a sbrigare alcuni compiti\n");
    printf("Come posso aiutarti?\n");
    printf("A >> Moltiplicare due numeri\nB >> Dividere due numeri\nC >> Inserire una stringa\nQ >> Uscire\n");
}

void moltiplica() {
    double a, b;

    printf("Inserisci i due numeri da moltiplicare:");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Errore nell'input.\n");
        return;
    }

    double prodotto = a * b;
    printf("Il prodotto tra %.2lf e %.2lf e': %.2lf\n", a, b, prodotto);
}

void dividi() {
    double a, b;

    printf("Inserisci il numeratore:");
    if (scanf("%lf", &a) != 1) {
        printf("Errore nell'input.\n");
        return;
    }

    printf("Inserisci il denominatore:");
    if (scanf("%lf", &b) != 1) {
        printf("Errore nell'input.\n");
        return;
    }

    if (b != 0) {
        double divisione = a / b;
        printf("La divisione tra %.2lf e %.2lf e': %.2lf\n", a, b, divisione);
    } else {
        printf("Errore: divisione per zero non consentita.\n");
    }
}

void ins_string() {
    char stringa[11];

    printf("Inserisci la stringa (massimo 10 caratteri):");
    if (scanf("%10s", stringa) != 1) {
        printf("Errore nell'input.\n");
        return;
    }

    printf("Hai inserito la stringa: %s\n", stringa);
}

