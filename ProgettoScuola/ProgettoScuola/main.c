//
//  main.c
//  ProgettoScuola
//
//  Created by Edoardo de Cal and Riccardo Lapi on 28/03/2019.
//  Copyright © 2019 Edoardo de Cal. All rights reserved.
//

#include <stdio.h>
#include "libFigure.h"


void mostraMenuQuadrato() {
    char  buff[1000];
    char *pieno, *vuoto, *particolare, *numerato, *farcito;
    printf("Fantastico! Ecco qui i tipi di quadrati:\n\n - Pieno\n - Vuoto\n - Particolare\n - Numerato \n - Farcito\n\n");

    do {
        printf("Inserire tipo di quadrato tra quelli elencati: ");
        scanf("%s",buff);

        pieno = strstr(buff, "pieno");
        vuoto = strstr(buff, "vuoto");
        particolare = strstr(buff, "particolare");
        numerato = strstr(buff, "numerato");
        farcito = strstr(buff, "farcito");

        if (pieno != NULL) {
            creaQuadratoPieno();
            break;
        } else if (vuoto != NULL) {
            creaQuadratoVuoto();
            break;
        } else if (particolare != NULL) {
            creaQuadratoParticolare();
            break;
        } else if (numerato != NULL) {
            creaQuadratoPienoNumerato();
            break;
        }else if (farcito != NULL) {
            creaQuadratoFarcito();
            break;
        }else{
            printf("%s che buffo nome! Temo che non sia in elenco!\n", buff);
        }
    } while (1);
}

void mostraMenuRettangolo() {
    char  buff[1000];
    char *pieno, *vuoto, *particolare;

    printf("Fantastico! Ecco qui i tipi di rettangoli:\n\n - Pieno\n - Vuoto\n - Particolare\n\n");

    do {
        printf("Inserire tipo di rettangolo tra quelli elencati: ");
        scanf("%s",buff);

        pieno = strstr(buff, "pieno");
        vuoto = strstr(buff, "vuoto");
        particolare = strstr(buff, "particolare");

        if (pieno != NULL) {
            creaRettangoloPieno();
            break;
        } else if (vuoto != NULL) {
            creaRettangoloVuoto();
            break;
        } else if (particolare != NULL) {
            creaRettangoloParticolare();
            break;
        } else {
            printf("Temo proprio che %s non esista e non sia in elenco!\n", buff);
        }
    } while (1);
}


void mostraMenuTriangoliEquilatero() {
    char  buff[1000];
    char *vuoto, *pieno;

    printf("Fantastico! Ecco qui i tipi di triangoli equilateri:\n\n - Vuoto\n - Pieno\n\n");

    do {
        printf("Inserire tipo di triangoli equilatero tra quelli elencati: ");
        scanf("%s",buff);

        vuoto = strstr(buff, "vuoto");
        pieno = strstr(buff, "pieno");

        if (pieno != NULL) {
            creaTriangoloEquilatero();
            break;
        } else if (vuoto != NULL) {
            creaTriangoloEquilateroVuoto();
            break;
        } else {
            printf("Temo proprio che %s non esista e non sia in elenco!\n", buff);
        }
    } while (1);
}

void mostraMenuTriangoliRettangoli() {
    char  buff[1000];
    char *vuoto, *pieno;

    printf("Fantastico! Ecco qui i tipi di triangoli rettangoli:\n\n - Vuoto\n - Pieno\n\n");

    do {
        printf("Inserire tipo di triangolo rettangolo tra quelli elencati: ");
        scanf("%s",buff);

        vuoto = strstr(buff, "vuoto");
        pieno = strstr(buff, "pieno");

        if (pieno != NULL) {
            creaTriangoloRettangolo();
            break;
        } else if (vuoto != NULL) {
            creaTriangoloRettangoloVuoto();
            break;
        } else {
            printf("%s che buffo nome! Temo che non sia in elenco!\n", buff);
        }
    } while (1);
}

void mostraMenuTriangoli() {
    char  buff[1000];
    char *trRettangolo, *equilatero, *numerato;

    printf("Fantastico! Ecco qui i tipi di triangoli:\n\n - Rettangolo\n - Equilatero\n - Numerato\n\n");

    do {
        printf("Inserire tipo di triangoli tra quelli elencati: ");
        scanf("%s",buff);

        equilatero = strstr(buff, "equilatero");
        trRettangolo = strstr(buff, "rettangolo");
        numerato = strstr(buff, "numerato");

        if (equilatero != NULL) {
            mostraMenuTriangoliEquilatero();
            break;
        } else if (trRettangolo != NULL) {
            mostraMenuTriangoliRettangoli();
            break;
        } else if (numerato != NULL) {
            creaTriangoloNumero();
            break;
        } else {
            printf("Temo proprio che %s non esista e non sia in elenco!\n", buff);
        }
    } while (1);
}



int main() {
    do {
        char buff[100];
        char scelta, *triangolo, *quadrato, *rettangolo, *ellisse, *rombo, *casa, *clessidra;
        int  entraNellaConclusione = 1;

        printf("Ecco le figure che oggi abbiamo a disposizione:\n\n - Rettangolo\n - Clessidra\n - Triangolo\n - Quadrato\n - Ellisse\n - Rombo\n - Casa\n\n");
        printf("Inserire nome figura: ");
        scanf("%s", buff);

        triangolo = strstr(buff, "triangolo");
        quadrato = strstr(buff, "quadrato");
        rettangolo = strstr(buff, "rettangolo");
        ellisse = strstr(buff, "ellisse");
        rombo = strstr(buff, "rombo");
        casa = strstr(buff, "casa");
        clessidra = strstr(buff, "clessidra");

        if (triangolo != NULL) {
            mostraMenuTriangoli();
        } else if (quadrato != NULL) {
            mostraMenuQuadrato();
        } else if (rettangolo != NULL) {
            mostraMenuRettangolo();
        }else if (ellisse != NULL) {
            creaEllisse();
        } else if (rombo != NULL) {
            creaRombo();
        }else if (casa != NULL){
            creaCasa();
        }else if (clessidra != NULL){
            creaClessidra();
        } else {
            printf("%s che buffo nome! Temo che non sia in elenco!\n", buff);
            entraNellaConclusione = -1;
        }

        if (entraNellaConclusione == 1) {
            printf("\n");
            printf("Fantastico! premere 1 se vuoi continuare l'esperienze oppure premere 2 se vuoi concluderla: ");
           scanf(" %c", &scelta);

            if (scelta == '2') {
                break;
            }
            system("cls");
        }
    } while (1);
    printf("D'accordo! grazie per essere stati con noi (≧◡≦)\n");
}

