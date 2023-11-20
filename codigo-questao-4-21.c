#include <stdio.h>

int conta_vogais(char *nome_arquivo) {
    char letra;
    int vogais = 0;
    FILE *fs;

    fs = fopen(nome_arquivo, "r");
    if (fs == NULL){
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }

    while((letra = fgetc(fs)) != EOF){
        if(letra == 'A' || letra == 'a' || letra == 'E' || letra == 'e' || letra == 'I' || letra == 'i' || letra == 'O' || letra == 'o' || letra == 'U' || letra == 'u'){
            vogais++;
        }
    }
    fclose(fs);
    return vogais;
}

int main (){
    char nome[] = "texto.txt";
    
    conta_vogais(nome);

    return 0;
}
    
