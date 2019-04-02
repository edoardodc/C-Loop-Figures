#ifndef libFigure_h
#define libFigure_h
#include <math.h>
#endif /* libFigure_h */

/* Codice libreria */

char cambiaCarattere() {
    char c;
    printf("Inserire un carattere: ");
    scanf(" %c", &c);
    return c;
}

int chiediNumeroLato(int name) {
    int numero;
    do {
        if (name == 1) {
            printf("Inserisci numero lato: ");
        }else if (name == 2) {
            printf("Inserisci numero altezza: ");
        }else if (name == 3) {
            printf("Inserisci numero base: ");
        }
        scanf("%d", &numero);
        if (numero < 0) {
            printf("Inserire un valore positivo!\n");
        }
    }while(numero<0);
    return numero;
}


void creaTriangoloRettangolo() {
    int c, i, nl;
    char carattere;
    carattere = cambiaCarattere();
    nl = chiediNumeroLato(1);
    printf("\n");

    for (i=0; i < nl; i++) {
        for (c=0; c<=i; c++) {
            printf(" %c", carattere);
        }
        printf("\n");
    }
}


void creaTriangoloEquilatero() {
    int c, i, x, nl;
    char carattere;
    carattere = cambiaCarattere();
    nl = chiediNumeroLato(1);
    printf("\n");

    for (i=nl; i > 0; i--) {
        for (c=0; c<i; c++) {
            printf(" ");
        }
        for (x=nl; x >= i; x--) {
            printf(" %c", carattere);
        }
        printf("\n");
    }
}


void creaQuadratoVuoto() {
    int c, i, h;
    char carattere;
    carattere = cambiaCarattere();
    h = chiediNumeroLato(1);
    printf("\n");

    for (i=h; i != 0; i--) {
        for (c=h; c!=0; c--) {
            if ((i==1 || i == h) || ((c==1) || (c == h))) {
                printf(" %c", carattere);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}


void creaQuadratoFarcito() {
    int c, i, h;
    char carattere, carattere2;
    carattere = cambiaCarattere();
    carattere2 = cambiaCarattere();
    h = chiediNumeroLato(1);
    printf("\n");

    for (i=h; i != 0; i--) {
        for (c=h; c!=0; c--) {
            if (i==1 || i == h) {
                printf(" %c", carattere);
            }else if ((c==1) || (c == h)){
                printf(" %c", carattere);
            }else{
                printf(" %c", carattere2);
            }
        }
        printf("\n");
    }
}


void creaQuadratoPieno() {
    int c, i, nl;
    char carattere;
    carattere = cambiaCarattere();
    nl = chiediNumeroLato(1);
    printf("\n");

    for (i=nl; i != 0; i--) {
        for (c=nl; c!=0; c--) {
            printf(" %c", carattere);
        }
        printf("\n");
        
    }
}


void creaQuadratoParticolare() {
    int c, i, x, nl;
    char carattere, carattere2;
    carattere = cambiaCarattere();
    carattere2 = cambiaCarattere();
    nl = chiediNumeroLato(1);
    printf("\n");

    for (i = nl; i > 0; i--) {
        for (c=0; c<i; c++) {
            printf(" %c", carattere2);
        }
        for (x=nl; x > i; x--) {
            printf(" %c", carattere);
        }
        printf("\n");
    }
}


void creaRettangoloVuoto() {
    int c, i, h, b;
    char carattere;
    carattere = cambiaCarattere();
    h = chiediNumeroLato(2);
    b = chiediNumeroLato(3);
    printf("\n");

    for (i=h; i != 0; i--) {
        for (c=b; c!=0; c--) {
            if (i==1 || i == h) {
                printf(" %c", carattere);
            }else if ((c==1) || (c == b)){
                printf(" %c", carattere);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}


void creaRettangoloPieno() {
    int c, i, h, b;
    char carattere;
    carattere = cambiaCarattere();
    h = chiediNumeroLato(2);
    b = chiediNumeroLato(3);
    printf("\n");

    for (i=h; i != 0; i--) {
        for (c=b; c!=0; c--) {
            printf(" %c", carattere);
        }
        printf("\n");
        
    }
}


void creaRettangoloParticolare() {
    int c, i, x, b, h, f = 0, g = 0;
    char carattere, carattere2;
    carattere = cambiaCarattere();
    carattere2 = cambiaCarattere();
    h = chiediNumeroLato(2);
    b = chiediNumeroLato(3);
    printf("\n");

    if (h > b) {
        f = h - b;
    }else if (b<f) {
        g = b - h;
    }
    for (i=h+g; i > 0; i--) {
        for (c=0; c <i ; c++) {
            printf(" %c", carattere2);
        }
        for (x=b+f; x > i; x--) {
            printf(" %c", carattere);
        }
        printf("\n");
    }
}


void creaTriangoloNumero() {
    int i, space, h = 5, k = 0, c = 0, c1 = 0;
    
    for(i=1; i<=h; ++i) {
        for(space=1; space <= h-i; ++space) {
            printf("  ");
            ++c;
        }
        while(k != 2*i-1) {
            if (c <= h-1) {
                printf("%d ", i+k);
                ++c;
            } else {
                ++c1;
                printf("%d ", (i+k-2*c1));
            }
            ++k;
        }
        c1 = c = k = 0;
        printf("\n");
    }
}


void creaEllisse() {
    int i,j, raggio = 5;
    char carattere;
    carattere = cambiaCarattere();
    printf("\n");

    for (i=0; i<=2*raggio; i++) {
        for (j=0; j<=2*raggio; j++) {
            double distance = sqrt((double)(i-raggio)*(i-raggio) + (j-raggio)*(j-raggio));
            if (distance>raggio-0.5 && distance<raggio+0.5) {
                printf("%c", carattere);
            } else {
                printf(" ");}
        }
        printf("\n");
    }
}


void creaRombo() {
    int h, c, k, s = 1;
    char carattere;
    carattere = cambiaCarattere();
    h = chiediNumeroLato(2);
    s = h - 1;
    printf("\n");

    for (k = 1; k <= h; k++) {
        for (c = 1; c <= s; c++)
            printf(" ");
        s--;
        for (c = 1; c <= 2*k-1; c++)
            printf("%c", carattere);
        printf("\n");
    }
    
    s = 1;
    
    for (k = 1; k <= h - 1; k++) {
        for (c = 1; c <= s; c++)
            printf(" ");
        s++;
        for (c = 1 ; c <= 2*(h-k)-1; c++)
            printf("%c", carattere);
        printf("\n");
    }
}


void creaQuadratoPienoNumerato() {
    int c, i, nl = 3, num = 0;
    printf("\n");

    for (i=nl; i != 0; i--) {
        for (c=nl; c!=0; c--) {
            num++;
            printf(" %d", num);
        }
        printf("\n");
    }
}


void creaTriangoloEquilateroVuoto() {
    int i, j, h;
    char carattere;
    carattere = cambiaCarattere();
    h = chiediNumeroLato(2);
    printf("\n");

    for(i=1; i<=h; i++) {
        
        for(j=i; j<h; j++) {
            printf(" ");
        }
        
        for(j=1; j<=(2*i-1); j++) {
            if(i==h || j==1 || j==(2*i-1)) {
                printf("%c", carattere);
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
    
}


void creaTriangoloRettangoloVuoto() {
    int i, j, h;
    char carattere;
    carattere = cambiaCarattere();
    h = chiediNumeroLato(2);
    printf("\n");

    for(i=1; i<=h; i++) {
        for(j=1; j<=(2*i-1); j++)
        {
            if(i==h || j==1 || j==(2*i-1)) {
                printf("%c", carattere);
            } else {
                printf(" ");
            }
        }
        for(j=i; j<h; j++) {
            printf(" ");
        }
        printf("\n");
    }
}


void creaCasa() {
    int c, i, x, nl, a, b, h;
    char carattere;
    carattere = cambiaCarattere();
    nl = chiediNumeroLato(1);
    printf("\n");

    for (i=nl; i > 0; i--) {
        for (c=1; c<i; c++) {
            printf(" ");
        }
        for (x=nl; x >= i; x--) {
            printf(" %c", carattere);
        }
        printf("\n");
    }
    
    h = nl;
    
    for (b=h; b != 0; b--) {
        for (a=h; a!=0; a--) {
            if (b==1 || b == h) {
                printf(" %c", carattere);
            }else if ((a==1) || (a == h)){
                printf(" %c", carattere);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
}


void creaClessidra() {
    int n,i,j;
    char carattere;
    carattere = cambiaCarattere();
    n = chiediNumeroLato(1);
    printf("\n");

    for(i = 1; i <= n; i++) {
        for(j = 1; j < i; j++)
            printf(" ");
        
        for(j = i; j <= n; j++)
            printf("%c ", carattere);
        
        printf("\n");
    }
    
    for(i = 1; i <= n; i++) {
        for(j = 1; j <= n-i; j++)
            printf(" ");
        
        for(j = 1; j <= i; j++)
            printf("%c ", carattere);
        printf("\n");
    }
}
