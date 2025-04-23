/*----------------------------------------------*/
/* ex11.c
 * Escolha um verbo e um objeto corretamente
 * Copyright (C) Matheus Pinheiro, 2025
 * License GNU/GPL v2.0
 * This program comes without ANY WARRANTY
 * Author: Matheus De Barros E Silva Pinheiro
 * Date: 2025-04-22
 */
/*---------------------------------------------*/
/* Includes */
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int C1 = 10;

    printf("Zoro estava lutando com um chefe da marinha, onde acabou sendo atordoado.\n");
    printf("Zoro acordou num calabouso, e percebeu que sua espada estava desaparecida.\n");
    printf("Por estar muito escuro, Zoro pode escolher entre pegar uma tocha(2) ou uma lamparina(1).\n");
    while (C1 > 2|| C1 < 1) {
        scanf("%i", &C1);
        if (C1 == 1) {
           printf("Apos pegar a lamparina, ele tentou sair no calabouso mas o guarda percebeu e o matou.\n");
           return EXIT_FAILURE;
        }
    }
    int C2 = 10;
    printf("Apos pegar a tocha, ele tenta sair do calabouso porem um guarda percebe e o tenta impedir!\n");
    printf("Ele se defende utilizando do fogo da tocha para queimar o guarda\n");
    printf("Quando ele se da conta, ele esta diante de dois corredores\n");
    printf("Um deles tem uma porta e no outro tem um grande corredor com escada em caracol\n");
    printf("Ele deve fugir pela porta (1) ou subir pela escada(2)\n");
    while (C2 > 2 || C2 < 1) {
        scanf("%i", &C2);
        if (C2 == 1) {
            printf("Ele abre a porta e entra na escuridão, quando se da conta esta caindo de uma montanha e morre quando chega no solo\n");
            return EXIT_FAILURE;
        }
    }
    printf("Ele sobe na  escada, onde encontra um guarda que estava guardando sua espada\n");
    printf("Ele o ataca com a tocha e o mata!\n");
    return EXIT_SUCCESS;
}
