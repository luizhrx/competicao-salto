#include <string.h>
#include <stdio.h>

int main() {
    char nome[50];
    float saltos[5];
    float media;
    
    printf("  |COMPETIÇÃO DE SALTO EM DISTÂNCIA|\n\n");
    
    while (1) {
        printf("-Digite o nome do atleta (ENTER para sair): ");
        fgets(nome, sizeof(nome), stdin);   // lê o nome do atleta 
        nome[strcspn(nome, "\n")] = '\0';         
        
        if (nome[0] == '\0') {  // se o usuário não digitou nada
            break;              // encerra o programa
        }
        
        printf("\n");

        // zera a média antes de calcular (senão acumula valores da iteração anterior)
        media = 0;

        // leitura dos 5 saltos
        for (int i = 0; i < 5; i++) {
            printf("Digite o %dº salto: ", i + 1);
            scanf("%f", &saltos[i]);
        }
        getchar();

        // cálculo da média
        for (int i = 0; i < 5; i++) {
            media += saltos[i];
        }
        media = media / 5;
        
        
        printf("\nResultado final:\n");
        printf("Atleta: %s\n", nome);

        printf("Saltos: ");
        for (int i = 0; i < 5; i++) {
            printf("%.1f ", saltos[i]);
            if (i < 4) printf("- "); 
        }

        printf("\nMédia dos saltos: %.1f m\n\n", media);
    }
    
    return 0;
}
