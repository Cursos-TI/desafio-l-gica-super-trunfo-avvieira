#include <stdio.h>

int main (){

    int pop1, pop2, pop3, pop4; // O número de população de cada Cidade A
    int pop1b, pop2b, pop3b, pop4b; // O número de população de cada Cidade B
    float area1, area2, area3, area4; // O tamanho em quilómetros quadrados de cada Cidade A
    float area1b, area2b, area3b, area4b; // O tamanho em quilómetros quadrados de cada Cidade B
    float pib1, pib2, pib3, pib4; // O Produto Interno Bruto de Cada Cidade A
    float pib1b, pib2b, pib3b, pib4b; // O Produto Interno Bruto de Cada Cidade B
    int tur1, tur2, tur3, tur4; // O número de Ponto Turísticos de cada Cidade A
    int tur1b, tur2b, tur3b, tur4b; // O número de Ponto Turísticos de cada Cidade B
    
    


    printf("Estado A\n");
    printf("\n");
    printf("Cidade: A1\n");
    printf("População: ");
    scanf("%d", &pop1);
    printf("Área: ");
    scanf("%f", &area1);
    printf("PIB: ");
    scanf("%f", &pib1);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur1);
    

    printf("\n");
    printf("Cidade: A2\n");
    printf("População: ");
    scanf("%d", &pop2);
    printf("Área: ");
    scanf("%f", &area2);
    printf("PIB: ");
    scanf("%f", &pib2);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur2);

    printf("\n");
    printf("Cidade: A3\n");
    printf("População: ");
    scanf("%d", &pop3);
    printf("Área: ");
    scanf("%f", &area3);
    printf("PIB: ");
    scanf("%f", &pib3);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur3);

    printf("\n");
    printf("Cidade: A4\n");
    printf("População: ");
    scanf("%d", &pop4);
    printf("Área: ");
    scanf("%f", &area4);
    printf("PIB: ");
    scanf("%f", &pib4);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur4);

    printf("\n");
    printf("Estado B\n");
    printf("\n");
    printf("Cidade: B1\n");
    printf("População: ");
    scanf("%d", &pop1b);
    printf("Área: ");
    scanf("%f", &area1b);
    printf("PIB: ");
    scanf("%f", &pib1b);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur1b);

    printf("\n");
    printf("Cidade: B2\n");
    printf("População: ");
    scanf("%d", &pop2b);
    printf("Área: ");
    scanf("%f", &area2b);
    printf("PIB: ");
    scanf("%f", &pib2b);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur2b);

    printf("\n");
    printf("Cidade: B3\n");
    printf("População: ");
    scanf("%d", &pop3b);
    printf("Área: ");
    scanf("%f", &area3b);
    printf("PIB: ");
    scanf("%f", &pib3b);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur3b);

    printf("\n"); 
    printf("Cidade: B4\n");
    printf("População: ");
    scanf("%d", &pop4b);
    printf("Área: ");
    scanf("%f", &area4b);
    printf("PIB: ");
    scanf("%f", &pib4b);
    printf("Ponto Turísticos: ");
    scanf("%d", &tur4b);

    printf("\n");

    float denpop1 = pop1 / area1; // Densidade Populacional pra Cidade A1
    float pibper1 = pib1 / pop1; // Produto Interno Bruto per Capita da Cidade A1

    float powerA1 = pop1 + area1 + pib1 + tur1 + denpop1 + pibper1; // Super Poder da Cidade A1

    printf("Estado A\n");
    printf("\n");
    printf("Cidade: A1\n");
    printf("População: %d\n", pop1);
    printf("Área: %.2f km\u00B2\n", area1);
    printf("PIB: %2.f reais\n", pib1);
    printf("Ponto Turístico: %d\n", tur1);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop1);
    printf("PIB per Capita: %.2f reais\n", pibper1);
    printf("Super Poder: %.2f\n", powerA1);



    
    printf("\n");

    float denpop2 = pop2 / area2; // Densidade Populacional pra Cidade A2
    float pibper2 = pib2 / pop2; // Produto Interno Bruto per Capita da Cidade A2

    float powerA2 = pop2 + area2 + pib2 + tur2 + denpop2 + pibper2; // Super Poder da Cidade A2

    printf("Cidade: A2\n");
    printf("População: %d\n", pop2);
    printf("Área: %.2f km\u00B2\n", area2);
    printf("PIB: %2.f reais\n", pib2);
    printf("Ponto Turístico: %d\n", tur2);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop2);
    printf("PIB per Capita: %.2f reais\n", pibper2);
    printf("Super Poder: %.2f\n", powerA2);

    printf("\n");

    float denpop3 = pop3 / area3; // Densidade Populacional pra Cidade A3
    float pibper3 = pib3 / pop3; // Produto Interno Bruto per Capita da Cidade A3

    float powerA3 = pop3 + area3 + pib3 + tur3 + denpop3 + pibper3; // Super Poder da Cidade A3

    printf("Cidade: A3\n");
    printf("População: %d\n", pop3);
    printf("Área: %.2f km\u00B2\n", area3);
    printf("PIB: %2.f reais\n", pib3);
    printf("Ponto Turístico: %d\n", tur3);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop3);
    printf("PIB per Capita: %.2f reais\n", pibper3);
    printf("Super Poder: %.2f\n", powerA3);

    printf("\n");

    float denpop4 = pop4 / area4; // Densidade Populacional pra Cidade A4
    float pibper4 = pib4 / pop4; // Produto Interno Bruto per Capita da Cidade A4

    float powerA4 = pop4 + area4 + pib4 + tur4 + denpop4 + pibper4; // Super Poder da Cidade A4

    printf("Cidade: A4\n");
    printf("População: %d\n", pop4);
    printf("Área: %.2f km\u00B2\n", area4);
    printf("PIB: %2.f reais\n", pib4);
    printf("Ponto Turístico: %d\n", tur4);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop4);
    printf("PIB per Capita: %.2f reais\n", pibper4);
    printf("Super Poder: %.2f\n", powerA4);

    printf("\n");

    float denpop1b = pop1b / area1b; // Densidade Populacional pra Cidade B1
    float pibper1b = pib1b / pop1b; // Produto Interno Bruto per Capita da Cidade B1

    float powerB1 = pop1b + area1b + pib1b + tur1b + denpop1b + pibper1b; // Super Poder da Cidade B1

    printf("Estado B\n");
    printf("\n");
    printf("Cidade: B1\n");
    printf("População: %d\n", pop1b);
    printf("Área: %.2f km\u00B2\n", area1b);
    printf("PIB: %2.f reais\n", pib1b);
    printf("Ponto Turístico: %d\n", tur1b);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop1b);
    printf("PIB per Capita: %.2f reais\n", pibper1b);
    printf("Super Poder: %.2f\n", powerB1);

    printf("\n");

    float denpop2b = pop2b / area2b; // Densidade Populacional pra Cidade B2
    float pibper2b = pib2b / pop2b; // Produto Interno Bruto per Capita da Cidade B2

    float powerB2 = pop2b + area2b + pib2b + tur2b + denpop2b + pibper2b; // Super Poder da Cidade B2

    printf("Cidade: B2\n");
    printf("População: %d\n", pop2b);
    printf("Área: %.2f km\u00B2\n", area2b);
    printf("PIB: %2.f reais\n", pib2b);
    printf("Ponto Turístico: %d\n", tur2b);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop2b);
    printf("PIB per Capita: %.2f reais\n", pibper2b);
    printf("Super Poder: %.2f\n", powerB2);

    printf("\n");

    float denpop3b = pop3b / area3b; // Densidade Populacional pra Cidade B3
    float pibper3b = pib3b / pop3b; // Produto Interno Bruto per Capita da Cidade B3

    float powerB3 = pop3b + area3b + pib3b + tur3b + denpop3b + pibper3b; // Super Poder da Cidade B3

    printf("Cidade: B3\n");
    printf("População: %d\n", pop3b);
    printf("Área: %.2f km\u00B2\n", area3b);
    printf("PIB: %2.f reais\n", pib3b);
    printf("Ponto Turístico: %d\n", tur3b);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop3b);
    printf("PIB per Capita: %.2f reais\n", pibper3b);
    printf("Super Poder: %.2f\n", powerB3);

    printf("\n");

    float denpop4b = pop4b / area4b; // Densidade Populacional pra Cidade B4
    float pibper4b = pib4b / pop4b; // Produto Interno Bruto per Capita da Cidade B4

    float powerB4 = pop4b + area4b + pib4b + tur4b + denpop4b + pibper4b; // Super Poder da Cidade B4

    printf("Cidade: B4\n");
    printf("População: %d\n", pop4b);
    printf("Área: %.2f km\u00B2\n", area4b);
    printf("PIB: %2.f reais\n", pib4b);
    printf("Ponto Turístico: %d\n", tur4b);
    printf("Densidade Populacional: %.2f hab/km2\n", denpop4b);
    printf("PIB per Capita: %.2f reais\n", pibper4b);
    printf("Super Poder: %.2f\n", powerB4);


    float resultadoPopA = pop1 + pop2 + pop3 + pop4; // declaracão dos variaveis da Carta A
    float resultadoAreaA = area1 + area2 + area3 + area4;
    float resultadoPibA = pib1 + pib2 + pib3 + pib4;
    float resultadoPturA = tur1 + tur2 + tur3 + tur4;
    float resultadoDenPA = denpop1 + denpop2 + denpop3 + denpop4;
    float resultadoPerA = pibper1 + pibper2 + pibper3 + pibper4;
    float resultadoPowerA = powerA1 + powerA2 + powerA3 + powerA4;

    float resultadoPopB = pop1b + pop2b + pop3b + pop4b; // declaracão dos variaveis da Carta B
    float resultadoAreaB = area1b + area2b + area3b + area4b;
    float resultadoPibB = pib1b + pib2b + pib3b + pib4b;
    float resultadoPturB = tur1b + tur2b + tur3b + tur4b;
    float resultadoDenPB = denpop1b + denpop2b + denpop3b + denpop4b;
    float resultadoPerB = pibper1b + pibper2b + pibper3b + pibper4b;
    float resultadoPowerB = powerB1 + powerB2 + powerB3 + powerB4;

    printf("\n");

    printf("Comparação de Cartas: \n");
    printf("População Carta A: %d\n", resultadoPopA > resultadoPopB);
    printf("Área Carta A: %d\n", resultadoAreaA > resultadoAreaB);
    printf("PIB Carta A: %d\n", resultadoPibA > resultadoPibB);
    printf("Ponto Turisticos Carta A: %d\n", resultadoPturA > resultadoPturB);
    printf("Densidade Populacional Carta A: %f\n", resultadoDenPA > resultadoDenPB);
    printf("PIB Per Capita Carta A: %d\n", resultadoPerA > resultadoPerB);
    printf("Super Poder Carta A: %d\n", resultadoPowerA > resultadoPowerB);

    printf("\n");

    if (resultadoPopA > resultadoPopB) {
        printf("População: Carta A Ganhou\n");
    } else {
        printf("População: Carta B Ganhou\n");
    }

    if (resultadoAreaA > resultadoAreaB) {
        printf("Área: Carta A Ganhou\n");
    } else {
        printf("Área: Carta B Ganhou\n");
    }

    if (resultadoPibA > resultadoPibB) {
        printf("PIB: Carta A Ganhou\n");
    } else {
        printf("PIB: Carta B Ganhou\n");
    }

    if (resultadoPturA > resultadoPturB) {
        printf("Ponto Turistico: Carta A Ganhou\n");
    } else {
        printf("Ponto Turistico: Carta B Ganhou\n");
    }

    if (resultadoDenPA > resultadoDenPB) {
        printf(" Densidade Populacional: Carta A Ganhou\n");
    } else {
        printf("Densidade Populacional: Carta B Ganhou\n");
    }

    if (resultadoPerA > resultadoPerB) {
        printf("PIB Per Capita: Carta A Ganhou\n");
    } else {
        printf("PIB Per Capita: Carta B Ganhou\n");
    }

    if (resultadoPowerA > resultadoPowerB) {
        printf("Super Poder: Carta A Ganhou\n");
    } else {
        printf("Super Poder: Carta B Ganhou\n");
    }



    
    
    

    return 0;
}