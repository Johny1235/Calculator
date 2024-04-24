#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <windows.h>
#include <math.h>


float scitani_a_odcitani(float a, float b);
float odcitani(float a, float b);
float nasobeni(float a, float b);
float deleni(float c, float d);
float umocnovani(float a, float b);
float odmocnovani(float a, float b);
int posloupnost(int n);
int faktorial(int x);
float konstanty (float konst, char co);


int main()
{
    char operace;
    float a, b, k, f, n, p, x, X, faktor, konst, co, vysledek = 0;
    int cislo_uzivatele, cislo_faktorialu;

    while(operace != x)
    {
        system("cls");
        system("color 0A");

        printf("--------------------------------------------------------------\n");
        printf("|                       ZADEJTE OPERACI                      |\n");
        printf("| '+' nebo '-' pro scitani a odcitani                        |\n");
        printf("| '*' pro nasobeni                                           |\n");
        printf("| '/' pro deleni dvou cisel                                  |\n");
        printf("| 'o' pro odmocnovani                                        |\n");
        printf("| 'm' pro umocnovani                                         |\n");
        printf("| 'r' pro radu cisel Fibonacciho posloupnosti                |\n");
        printf("| 'f' pro fatorial cisla x                                   |\n");
        printf("| 'k' pro konstantu                                          |\n");
        printf("|                 (Zadejte 'x' pro ukonceni.)                |\n");
        printf("| (Pro opetovne spusteni kalkulacky stisnete na konci Enter) |\n");
        printf("--------------------------------------------------------------\n");
        scanf(" %c", &operace);

            switch(operace)
            {
                case '+':
                    vysledek = scitani_a_odcitani(a, a);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case '-':
                    vysledek = scitani_a_odcitani(a, a);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case '*':
                    vysledek = nasobeni(a, a);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case '/':
                    vysledek = deleni(a, b);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case 'm':
                    vysledek = umocnovani(a, b);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case 'M':
                    vysledek = umocnovani(a, b);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case 'o':
                    vysledek = odmocnovani(a, b);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case 'O':
                    vysledek = odmocnovani(a, b);
                    printf("= %f\n", vysledek);
                    getch();
                    break;

                case 'r':
                    p = posloupnost(n);
                    getch();
                    break;

                case 'R':
                    p = posloupnost(n);
                    getch();
                    break;

                case 'f':
                    system("cls");

                    printf("Zadejte cislo Vaseho faktorialu: \n");
                    scanf("%d", &cislo_uzivatele);

                    cislo_faktorialu = faktorial(cislo_uzivatele);
                    printf("= %d\n", cislo_faktorialu);

                    getch();
                    break;

                case 'F':
                    system("cls");

                    printf("Zadejte cislo Vaseho faktorialu: \n");
                    scanf("%d", &cislo_uzivatele);

                    cislo_faktorialu = faktorial(cislo_uzivatele);
                    printf("= %d\n", cislo_faktorialu);

                    getch();
                    break;

                case 'k':
                    k = konstanty(konst, co);
                    getch();
                    break;

                case 'K':
                    k = konstanty(konst, co);
                    getch();
                    break;

                case 'x':
                    return 0;
                    break;

                case 'X':
                    return 0;
                    break;

                default:
                    system("cls");
                    printf("JSI DEBILEK!\n");
                    return 0;
            }

        }

    getch();
}


float scitani_a_odcitani(float a, float b)
{
    system("cls");

    int poradi_plus = 0;
    int scitanec;
    float soucet = 0;

    printf("Zadejte, kolik chcete secist a/nebo odecist cisel: \n");
    scanf("%d", &scitanec);

    system("cls");

    if (scitanec >= 2)
    {
        do
        {
            poradi_plus++;
            printf("%d. cislo: ", poradi_plus);
            scanf("%f", &a);
            soucet += a;
        } while (poradi_plus < scitanec);
            return soucet;
    }
    else
    {
        printf("Musi se secist/odecist minimalne 2 cisla!");
    }
}


float nasobeni(float a, float b)
{
    system("cls");

    int poradi_krat = 0;
    int cinitel;
    float soucin = 0;

    printf("Zadejte, kolik chcete vynasobit cisel: \n");
    scanf("%d", &cinitel);

    system("cls");

    if (cinitel >= 2)
    {
        do
        {
            poradi_krat++;
            printf("%d. cislo: ", poradi_krat);
            scanf("%f", &a);
            if (poradi_krat == 1)
            {
                soucin += a;
            }
            else
            {
                soucin *= a;
            }
        } while (poradi_krat < cinitel);
            return soucin;
    }
    else
    {
        printf("Musi se vynasobit minimalne 2 cisla!");
    }
}


float deleni(float a, float b)
{
    system("cls");

    printf("Zadejte delenec: \n");
    scanf("%f", &a);

    printf("Zadejte delitel: \n");
    scanf("%f", &b);

    return a / b;
}

float umocnovani(float a, float b)
{
    system("cls");

    printf("Zadejte zaklad mocniny: \n");
    scanf("%f", &a);

    printf("Zadejte exponent: \n");
    scanf("%f", &b);

    return pow(a,b);
}

float odmocnovani(float a, float b)
{
    system("cls");

    printf("Zadejte odmocninu z y: \n");
    scanf("%f", &a);

    printf("Zadejte x-tou odmocninu: \n");
    scanf("%f", &b);

    return pow(a,1/b);
}
int posloupnost(int n)
{
    system("cls");

    int i;

    int prvni = 0;
    int druhe = 1;

    int rada = prvni + druhe;

    printf("Zadejte pocet prvku z Fibonacciho posloupnosti (alespon 3): \n");
    scanf("%d", &n);

    if (n >= 3)
    {
        printf("Fibonacciho posloupnost: %d %d \n", prvni, druhe);

        for (i = 3; i <= n; ++i)
        {
            printf("%d ", rada);
            prvni = druhe;
            druhe = rada;
            rada = prvni + druhe;
        }
    }
    else
    {
        printf("Bylo zadano malo prvku!\n");
    }

}


int faktorial(int x)
{
    if (x == 0)
    {
      return 1;
    }

    return (x * faktorial(x - 1));
}


float konstanty (float konst, char co)
{
    system("cls");

    printf("Zadejte 'e' pro Eulerovo cislo, 'p' pro Pi nebo 'z' pro zlaty rez: \n");
    scanf(" %c", &co);

    if (co == 'e')
    {
        printf("= %f\n", exp(1));
    }
    if (co == 'p')
    {
        printf("= %f\n", M_PI);
    }
    if (co == 'z')
    {
        double zlaty_rez;

        zlaty_rez = (1.0 + sqrt(5)) / 2.0;

        printf("= %f\n", zlaty_rez);
    }
}

// by Šustík
