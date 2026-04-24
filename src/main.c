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
do {
        exibirMenu();
        scanf("%d", &opcao);
 
        switch(opcao) {

            case 1:
                printf("Informe as 4 notas (0 a 10): ");
                scanf("%f %f %f %f", &n1, &n2, &n3, &n4);
                printf("Notas registradas!\n");
                break;
int main() {
    

    
    return 0;
}