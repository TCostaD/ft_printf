# ft_printf

## **Sobre o projeto**

Nesse projeto nós iremos recodificar a função ``printf()`` da ``libc``. Para isso, devemos seguir os seguintes requisitos:
* Não devemos implementar o gerenciamento de buffer da função original;
* Nossa função deve lidar com as seguintes conversões: ``cspdiuxX%``;
* Nossa função será comparada com o ``printf()`` original;
* Devemos usar o comando ``ar`` para criar nossa biblioteca, pois o uso de ``libtool`` é vetado;
* Nossa ``libftprintf.a`` deve ser criada na **RAIZ** do nosso repositório.

## **Conversões**

As conversões que são citadas acimas são as letras que colocamos após um sinal de ``%`` quando usamos o ``printf()``. Por exemplo, quando usamos o printf dessa maneira: ``printf("Valor: %i\n", num)`` a função trata a letra d que vem após o sinal de % e entende que ali virá um número inteiro de base 10 (que nesse caso estará guardado na variável ``num``). Chamarei essa letra após o sinal de porcentagem especificador.

Para o nosso ``ft_printf()``, nossos especificadores estarão relacionados a uma função que definirá o tipo de dado que deverá ser impresso de acordo com a seguinte tabela:

| Especificador | Tipo de dado | Função | Tem na libft? |
| :---: | :---: | :---: | :---: |
| ``c`` | Caractere | ``ft_putchar_fd()`` | Sim |
| ``s`` | String | ``ft_putstr()`` | Sim |
| ``p`` | Endereço de memória | ``ft_putpoint()`` | Não |
| ``d`` | Inteiro (base 10) | ``ft_putnbr_fd()`` | Sim |
| ``i`` | Inteiro | ``ft_putnbr_fd()`` | Sim |
| ``u`` | Inteiro sem sinal (base 10) | ``ft_putunsignbr()`` | Não |
| ``x`` | Inteiro (base 16) minúsculo | ``ft_puthex()`` | Não |
| ``X`` | Inteiro (base 16) maiúsculo | ``ft_puthex()`` | Não |
| ``%`` | Caractere % | ``ft_putchar_fd()`` | Sim |

## **Teoria**

A nossa função ft_printf possui o seguinte protótipo:

```bash
int    ft_printf(const char *, ...); 
```

Essas reticências são de um tipo diferente de funções, chamadas de ``Funções Variádicas``. Elas aceitam um número arbitrário de parâmetros, ou seja podem aceitar 1, 2 ou mais parâmetros passados para elas.

### **Funções Variádicas**

Para entender como funciona uma função variádica, é necessário entender como funciona o armazenamento de argumentos na memória.

Quando uma função é chamada, os argumentos são armazenados na memória em ordem inversa, ou seja, o primeiro argumento é armazenado na última posição da memória, o segundo argumento é armazenado na penúltima posição da memória e assim por diante.

A sintaxe de uma função variádica é:

```bash
tipo_de_retorno nome_da_função(tipo_de_dado nome_do_argumento, ...);
```

Para acessar esses argumentos, é necessário utilizar o conceito de ponteiros. Um ponteiro é uma variável que armazena o endereço de memória de outra variável.

Para acessar os argumentos de uma função variádica, é necessário utilizar um ponteiro do tipo ``va_list``.

A biblioteca ``<stdarg.h>`` contém as macros necessárias para manipular os argumentos de uma função variádica:
* A macro ``va_start()`` é utilizada para inicializar o ponteiro ``va_list``.
* A macro ``va_arg()`` é utilizada para acessar os argumentos da função variádica.
* A macro ``va_end()`` é utilizada para finalizar o ponteiro ``va_list``.
