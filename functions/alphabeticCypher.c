#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define MAX_STR_LEN 1000
#define MAX_CHAR 26

int alphabeticCypher() {

    int i, j;

    char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
    char order[] = "aeosrdnitmulcvpgqbfhjxzkyw";
    char changes[] = "jgmfri";
    char keys[MAX_CHAR + 1]; // + 1 por causa do terminador da string.
    int freq[MAX_CHAR];
    int freqTwo[MAX_CHAR];
    char encrypted[MAX_STR_LEN];
    char decrypted[MAX_STR_LEN];
    char toEncrypt[MAX_STR_LEN];

    // Passo 0:
    // Limpa o vetor "freq".
    for (i = 0; i < MAX_CHAR; i++) {
        freq[i] = 0;
    }

    // Passo 1:
    // Realiza a busca do texto a ser criptografado
    printf("Informe o texto a criptografar: ");
    fgets(toEncrypt, MAX_STR_LEN, stdin);
    for(i = 0; i < toEncrypt[i]; i++) {
        encrypted[i] = order[toEncrypt[i] - 'a'];
    }
    encrypted[i] = '\0';
    puts("Texto encriptado pela substituicao alfabetica: ");
    puts(encrypted);

    // Passo 2:
    // Lê a string codificada do usuário.
    printf("Digite o texto criptografado: ");
    fgets(encrypted, MAX_STR_LEN, stdin);

    // Passo 3:
    // Percorre a string "encrypted" e conta quantas vezes cada letra aparece,
    // guardando a contagem no vetor "freq".
    for (i = 0; encrypted[i]; i++) {
        if (encrypted[i] >= 'a' && encrypted[i] <= 'z') { // Se for letra minúscula.
            freq[encrypted[i] - 'a']++;
        } else if (encrypted[i] >= 'A' && encrypted[i] <= 'Z') { // Se for letra maiúscula.
            freq[encrypted[i] - 'A']++;
        }
        // Poderia ter um else para os casos onde não é nenhum dos dois,
        // mas quando isso acontece, não precisamos fazer nada.
    }

    // Passo 4 (opcional):
    // Mostra o vetor "freq".
    // Aproveita para copiar "freq" para "freqTwo".
    printf("\n\nTabela de frequencias:");
    for (i = 0; i < MAX_CHAR; i++) {
        printf(" %c=%d", i + 'a', freq[i]);
        freqTwo[i] = freq[i];
    }
    printf("\n");

    // Passo 5:
    // Percorre a tabela "freq" para montar a "keys", utilizando a order das letras
    // dada pelo vetor "order". Entretanto, o vetor "freq" acaba sendo destruído
    // por esse processo, e é por isso que temos uma cópia em "freqTwo".
    for (i = 0; i < MAX_CHAR; i++) {
        int highest = -1;
        int highestIndex = 0;
        for (j = 0; j < MAX_CHAR; j++) {
            if (freq[j] >= highest) {
                highest = freq[j];
                highestIndex = j;
            }
        }
        keys[highestIndex] = order[i];
        freq[highestIndex] = -1;
    }
    keys[MAX_CHAR] = 0;

    // Passo 6 (opcional):
    // Percorre a tabela "freqTwo" para procurar por letras que ocorram um mesmo
    // número de vezes (que não seja zero) e mostrar isso ao usuário.
    // Entretanto, "freqTwo" acaba sendo destruído nesse processo.
    for (i = 0; i < MAX_CHAR; i++) {
        if (freqTwo[i] == 0) continue;
        int p = 0;
        for (j = i + 1; j < MAX_CHAR; j++) {
            if (freqTwo[j] != freqTwo[i]) continue;
            if (p == 0) {
                printf("Frequencias iguais [%d]: %c", freqTwo[i], i + 'a');
                p = 1;
            }
            printf("%c", (j + 'a'));
            freqTwo[j] = 0;
        }
        freqTwo[i] = 0;
        if (p != 0) printf("\n");
    }

    // Passo 7 (opcional):
    // Troca algumas letras da "keys" a fim de ajeitar manualmente os casos que estiverem errados.
    // As letras das posições pares são permutadas com as das posições ímpares de "changes".
    for (i = 0; changes[i]; i += 2) {
        char temp = keys[changes[i] - 'a'];
        keys[changes[i] - 'a'] = keys[changes[i + 1] - 'a'];
        keys[changes[i + 1] - 'a'] = temp;
    }

    // Passo 8 (opcional):
    // Mostra a keys.
    printf("\nA chave eh:\n%s\n%s\n", alphabet, keys);

    // Passo 9:
    // Tendo o vetor "keys" montado, usa ele para formar a string "decrypted"
    // a partir de "encrypted".
    for (i = 0; encrypted[i]; i++) {
        if (encrypted[i] >= 'a' && encrypted[i] <= 'z') { // Letras minúsculas.
            decrypted[i] = keys[encrypted[i] - 'a'];
        } else if (encrypted[i] >= 'A' && encrypted[i] <= 'Z') { // Letras maiúsculas.
            decrypted[i] = keys[encrypted[i] - 'A'] - 'a' + 'A';
        } else { // Copia qualquer outra coisa diretamente.
            decrypted[i] = encrypted[i];
        }
    }
    decrypted[i] = encrypted[i]; // Copia o terminador nulo.

    // Passo 10:
    // Mostra o texto "decrypted".
    printf("\nO texto descriptografado eh:\n%s\n", decrypted);  

    return 0;
}