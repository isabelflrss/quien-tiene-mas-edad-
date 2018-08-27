/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: Hector
 *
 * Created on 26 de agosto de 2018, 06:52 PM
 */

#include <stdio.h>
#include <stdlib.h>

/*
 * 
 */
int main() {
    printf("Buen día usuario, necesito tu fecha de nacimient, en el orden: día, mes, año");
    int dia,mes,year;
    scanf("%d%d%d",&dia,&mes,&year);
    printf("\nBien ahora necesito otra,cual sea en el mismo orden");
    int dia2,mes2,year2;
    scanf("%d%d%d",&dia2,&mes2,&year2);
    if ((year<year2)&&(mes>mes2)&&(dia>dia2)){
        printf("La persona corresponde a la primera fecha entregada es la persona más grande");
    }else {
        printf("La persona con más edad corresponde a la segunda fecha de nacimiento");
    }
    return 0;
}

