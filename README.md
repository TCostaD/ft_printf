# ft_printf
Mimificando a função printf da biblioteca padrão da linguagem C (42 Porto)

## SOBRE

O objetivo desse projeto é a recodificação da função ``printf()``.

## Conceitos

O protótipo do printf é definido como:
```bash
int    ft_printf(const char *, ...); 
```

Essas reticências fazem referência a um conceito chamado de Funções Variádicas.

Funções variádicas são funções que aceitam um número variável de argumentos.

## Funções Variádicas

Para entender como funciona uma função variádica, é necessário entender como funciona o armazenamento de argumentos na memória.

Quando uma função é chamada, os argumentos são armazenados na memória em ordem inversa, ou seja, o primeiro argumento é armazenado na última posição da memória, o segundo argumento é armazenado na penúltima posição da memória e assim por diante.

### Sintaxe

A sintaxe de uma função variádica é:

```bash
tipo_de_retorno nome_da_função(tipo_de_dado nome_do_argumento, ...);
```

Para acessar esses argumentos, é necessário utilizar o conceito de ponteiros.

Um ponteiro é uma variável que armazena o endereço de memória de outra variável.

Para acessar os argumentos de uma função variádica, é necessário utilizar um ponteiro do tipo ``va_list``.

A biblioteca ``<stdarg.h>`` contém as funções necessárias para manipular os argumentos de uma função variádica.

A função ``va_start()`` é utilizada para inicializar o ponteiro ``va_list``.

A função ``va_arg()`` é utilizada para acessar os argumentos da função variádica.

A função ``va_end()`` é utilizada para finalizar o ponteiro ``va_list``.

## Especificadores de Conversão

Os especificadores de conversão são utilizados para especificar o tipo de dado que será impresso.

Os especificadores de conversão são precedidos pelo caractere ``%``.

Os especificadores de conversão são:

| Especificador | Tipo de Dado | Exemplo |
| :---: | :---: | :---: |
| ``%c`` | Caractere | ``ft_printf("%c", 'a');`` |
| ``%s`` | String | ``ft_printf("%s", "Hello World!");`` |
| ``%p`` | Endereço de Memória | ``ft_printf("%p", &var);`` |
| ``%d`` | Inteiro | ``ft_printf("%d", 42);`` |
| ``%i`` | Inteiro | ``ft_printf("%i", 42);`` |
| ``%u`` | Inteiro sem sinal | ``ft_printf("%u", 42);`` |
| ``%x`` | Inteiro hexadecimal | ``ft_printf("%x", 42);`` |
| ``%X`` | Inteiro hexadecimal | ``ft_printf("%X", 42);`` |
| ``%%`` | Caractere % | ``ft_printf("%%");`` |

## Flags

As flags são utilizadas para modificar a saída dos especificadores de conversão.

As flags são precedidas pelo caractere ``%``.

As flags são:

| Flag | Descrição |
| :---: | :---: |
| ``-`` | Alinhamento à esquerda |
| ``0`` | Preenchimento com zeros |
| ``.`` | Precisão |
| ``*`` | Largura e Precisão |

## Largura

A largura é utilizada para especificar o número mínimo de caracteres que serão impressos.

A largura é precedida pelo caractere ``%``.

A largura é um número inteiro.

## Precisão

A precisão é utilizada para especificar o número de caracteres que serão impressos.

A precisão é precedida pelo caractere ``.``.

A precisão é um número inteiro.

## Alinhamento à Esquerda

O alinhamento à esquerda é utilizado para alinhar o texto à esquerda.

O alinhamento à esquerda é precedido pelo caractere ``-``.

## Preenchimento com Zeros

O preenchimento com zeros é utilizado para preencher os espaços vazios com zeros.

O preenchimento com zeros é precedido pelo caractere ``0``.

## Largura e Precisão

A largura e precisão são utilizadas para especificar o número mínimo de caracteres que serão impressos e o número de caracteres que serão impressos.

A largura e precisão são precedidas pelo caractere ``*``.

## Makefile

O Makefile é um arquivo que contém um conjunto de regras que são utilizadas pelo comando ``make`` para compilar um programa.

O Makefile é composto por:

| Comando | Descrição |
| :---: | :---: |
| ``NAME`` | Nome do executável |
| ``CC`` | Compilador |
| ``CFLAGS`` | Flags de compilação |
| ``RM`` | Comando para remover arquivos |
| ``SRCS`` | Arquivos ``.c`` |
| ``OBJS`` | Arquivos ``.o`` |
| ``all`` | Regra padrão |
| ``clean`` | Regra para remover arquivos ``.o`` |
| ``fclean`` | Regra para remover arquivos ``.o`` e executável |
| ``re`` | Regra para remover arquivos ``.o`` e executável e recompilar |
