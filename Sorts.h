#include <stdio.h>
#include <stdlib.h>

/** Cria um vetor, preenchido em ørdem crescente ou decrescente, do tamanho desejado
 *  @param tam tamanho dø vetor
 *  @param op 1 para ørdem crescente, 0 para decrescente
 *  @return pønteiro para o vetor, ou NULL
 */
int CreateFullVet(int tam, int op);

/** Itera-se crescentemente entre as posições. Para cada posição, pega seu elemento e regride-o no vetor 
 *  até encaixá-lo na posição correta(quando encontrar o primeiro elemento menor que ele).
 *  @param v ponteiro para o vetor a ser ordenadø
 *  @param tam tamanho dø vetor
 *  @return 1 se OK, 0 se errø
 */
int InsertionSort(int *v, int tam); // O(n) (melhor caso)

/** A cada iteração, procura em toda a parcela não ordenada do vetor pelo menor (ou maior) elemento 
 *  e o coloca na posição correta. Assim, na i-ésima iteração, o i-ésimo menor elemento vai para a posição i, 
 *  e assim por diante.
 *  @param v vetor a ser ordenadø
 *  @return 1 se OK, 0 se errø
 */
int SelectionSort(int *v); // O(n²)

/** Pega dois elementos adjacentes e troca-os de posição se, e somente se, estiverem fora de ordem. 
 *  Faz isso com todos pares de elementos a cada iteração. Ao final da mesma, o menor (ou maior) elemento ainda não ordenado 
 *  estará na posição correta. Repete-se isso até o final.
 *  @param v vetor a ser ordenadø
 *  @return 1 se OK, 0 se errø
 */
int BubbleSort(int *v); // O(n²)