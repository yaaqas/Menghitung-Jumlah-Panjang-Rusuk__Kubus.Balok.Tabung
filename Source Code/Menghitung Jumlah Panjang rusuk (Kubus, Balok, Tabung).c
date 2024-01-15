#include <stdio.h>
#include <stdlib.h>

#define PHI 3.14

int main()
{
    int sisi, rusukkubus, panjang, lebar, tinggi,rusukpj, diameter, tinta;
    float rusukling;
    //menghitung panjang rusuk kubus
    printf("====Menghitung panjang rusuk kubus====\n\n");

    printf("Panjang sisi kubus: ");
    scanf("%d", &sisi);

    rusukkubus = sisi * 12;
    printf("Panjang rusuk kubus: %d\n\n", rusukkubus);

    //menghitung panjang rusuk balok
    printf("====Menghitung panjang rusuk balok====\n\n");

    printf("Panjang balok: ");
    scanf("%d", &panjang);
    printf("Lebar balok: ");
    scanf("%d", &lebar);
    printf("Tinggi balok: ");
    scanf("%d", &tinggi);

    rusukpj = 4 * (panjang + lebar + tinggi);
    printf("Panjang rusuk balok: %d\n\n", rusukpj);

    //menghitung panjang rusuk tabung
    printf("====Menghitung luas selimut tabung====\n\n");

    printf("Diameter tabung: ");
    scanf("%d", &diameter);

    rusukling = 2 * (PHI * diameter);
    printf("Panjang rusuk tabung adalah %f\n", rusukling);

    return 0;
}
