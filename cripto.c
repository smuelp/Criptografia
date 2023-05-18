#include <stdio.h>
#define MAX 200

// código indentado automaticamente através do VSCode

void criptografar(char *mensagemOrig, char *mensagemCripto, char *chave)
{
    int i, tamanhoChave = 12, tamanhoMensagem = 0;

    for (i = 0; mensagemOrig[tamanhoMensagem] != '\0'; i++)
    {
        tamanhoMensagem++;
    }
    for (i = 0; i < tamanhoMensagem; i++)
    {
        mensagemCripto[i] = mensagemOrig[i] ^ chave[i % tamanhoChave];
        printf("%d ", mensagemCripto[i]);
    }
    mensagemOrig = '\0';
}
void descriptografar(char *mensagemCripto, char *resultado, char *chave)
{
    int i, tamanhoChave = 12, tamanhoMensagem = 0;

    for (i = 0; resultado[tamanhoMensagem] != '\0'; i++)
    {
        tamanhoMensagem++;
    }
    for (i = 0; i < tamanhoMensagem; i++)
    {
        resultado[i] = mensagemCripto[i] ^ chave[i % tamanhoChave];
        printf("%c", resultado[i]);
    }
}
int main()
{
    char chave[] = "CRIPTOGRAFIA";
    char mensagemOrig[MAX], mensagemCripto[MAX], resultado[MAX];
    int tamanhoMensagem = 0;

    scanf("%[^\n]", mensagemOrig);

    for (int i = 0; mensagemOrig[tamanhoMensagem] != '\0'; i++)
    {
        tamanhoMensagem++;
    }
    int i;
    for (i = 0; i < tamanhoMensagem; i++)
    {
        resultado[i] = 'a';
    }
    resultado[i] = '\0';

    if (tamanhoMensagem < 61)
    {
        printf("Mensagem Cifrada: ");
        criptografar(mensagemOrig, mensagemCripto, chave);

        printf("\nMensagem Original: ");
        descriptografar(mensagemCripto, resultado, chave);
    }
    else
    {
        printf("ERRO - A mensagem deve possuir tamanho maximo de 60 caracteres.");
    }
    printf("\n");
    return 0;
}