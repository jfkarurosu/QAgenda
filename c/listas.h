#ifndef LIST_H
#define LIST_H

// Variaveis Globais
typedef struct no No;
typedef struct cadastro Cad;
typedef struct lista List;

No *criarNo(void);

/// @brief Cria uma lista Vazia
/// @return Uma lista Vazia
List *criarListaVazia(void);

/// @brief Cria uma lista com o primeiro nó alocado
/// @param ptr Um nó da lista já com informações 
/// @return Lista com o primeiro nó alocado
List *criarListaChave(Cad a);

/// @brief Adiciona um nó no inicio da lista
/// @param l Lista já alocada
/// @param ptr Um nó já com informações
void addInicio(List *l, Cad a);

/// @brief Adiciona um nó no fim da lista
/// @param l Lista já alocada
/// @param ptr Um nó ja com informações
void addFim(List *l, Cad a);

/// @brief Adiciona um nó antes de um especificado
/// @param l Lista já alocada
/// @param id CPF/CNPJ do nó ao qual você deseja que seja o posterior
/// @param ptr Novo nó da lista
void addChaveAntes(List *l, int id, Cad a);

/// @brief Adiciona um nó depois do nó referenciado
/// @param l Lista 
/// @param identidade CPF/CNPJ do nó ao qual você deseja que seja o anterior
/// @param ptr Novo nó da lista
void addChaveDepois(List *l, int identidade, Cad a);

/// @brief Busca um valor especifico do lista
/// @param l Lista
/// @param chave CPF/CNPJ do nó buscado
/// @return Retorna o nó procurado
Cad retornarValor(List *l, int chave);

/// @brief Retorna o primeiro valor da lista
/// @param l A lista que deseja
/// @return A struct de dados da lista
Cad retornarValorInicial(List *l);

/// @brief Remove um nó especifico da lista
/// @param l Lista
/// @param chave CPF/CNPJ do nó a ser removido
void removerCelula(List *l, long int chave); 

/// @brief Remove o primeiro nó da lista
/// @param l Lista
void removerInicio(List *l); 

/// @brief Imprimi os itens da lista
/// @param l Lista
void printLista(List *l);

/// @brief Imprimi os itens da lista
/// @param l Lista
void printListaAgenda(List *l);

/// @brief Mostra o tamanho da lista
/// @param l Lista
/// @return Número int que representa o tamanho da lista
int tamanhoLista(List *l);

/// @brief Destroi a lista já criada anteriormente
/// @param l Lista
void destruirLista(List *l); // Destroi a lista criada

#endif