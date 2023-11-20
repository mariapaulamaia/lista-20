#include <stdio.h>

int main(){
    char string[51];

    fgets(string, 50, stdin);
    for (int i = 0; string[i] != '\0'; i++){
        if (string[i] == '\n'){
            string[i] = '\0';
        }
    }
    fputs(string, stdout);

    int hexa;
    scanf("%x", &hexa);
    printf("%-#10o\n", 2*hexa);

    double n1, n2, n3;
    scanf("%lf, %lf, %lf", &n1, &n2, &n3);
    printf("%+015.3lf %+015.3lf %+015.3lf\n", n1, n2, n3);

    int dia, mes, ano, m_dia = 12, m_mes = 7, m_ano = 2006, diferencaTotal;
    scanf("%d/%d/%d", &dia, &mes, &ano);
    diferencaTotal = (ano - m_ano) * 365 + (mes - m_mes) * 30 + (dia - m_dia);
    printf("Diferença de dias é de: %d\n", diferencaTotal);



    return 0;
}