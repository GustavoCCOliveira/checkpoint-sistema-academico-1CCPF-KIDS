#include<stdio.h>

void exibirMenu() {
    printf("\n--- MENU ---\n");
    printf("1. Informar Notas\n");
    printf("2. Calcular Media\n");
    printf("3. Verificar Situacao\n");
    printf("4. Ver Media Atual\n");
    printf("5. Calcular Derivada (f'(x))\n");
    printf("6. Sair\n");
    printf("Escolha uma opcao: ");
}

int main() {
    int opcao;
    float n1 = 0, n2 = 0, n3 = 0, n4 = 0, media = -1, notarec = 0;
    int a, b, c;
    int coef_const
    int coef_x
do {
        exibirMenu();
        scanf("%d", &opcao);
 
        switch(opcao) {

            case 1:
                printf("Informe as 4 notas (0 a 10): ");
                scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
                printf("Notas registradas!\n");
                break;
            case 2:
                media = (n1 + n2 + n3 + n4) / 4;
                printf("Media calculada: %.2f\n", media);
                break;

            case 3:
            if (media < 0) {
                printf("Calcule a media primeiro!\n");
            } else if (media >= 6) {
                printf("Aluno aprovado com: %.2f\n", media);
            } else if (media >= 4 && media < 6) {
                notarec = 10 - media;
                printf("Recuperacao com: %.2f\n", media);
                printf("Precisa de: %.2f\n", notarec);
            } else {
                printf("Reprovado com media: %.2f\n", media);
            }
                break;
           
            case 4:
            if (media < 0) {
                printf("Media ainda nao calculada!\n");
            } else {
                printf("Media atual: %.2f\n", media);
            }
                break;
            case 5:
            a = n1;
            b = n2;
            c = n3;
            int coef_x = 2 * a;
            int coef_const = b;
            if (coef_x == 0 && coef_const == 0) {
                printf("f'(x) = 0\n");
            } else if (coef_x == 0) {
                printf("f'(x) = %d\n", coef_const);
            } else if (coef_const == 0) {
                printf("f'(x) = %dx\n", coef_x);
            } else if (coef_const > 0) {
                printf("f'(x) = %dx + %d\n", coef_x, coef_const);
            } else {
                printf("f'(x) = %dx - %d\n", coef_x, -coef_const);
            }
                break;
            case 6:
                printf("Saindo...\n");
                break;
 
            default:
                printf("Opcao Invalida!\n");
        }
 
    } while (opcao != 6);
 
    return 0;
}

