*Este proyecto ha sido creado como parte del currículo de 42 por ailopez*

## Descripción

Libft es una librería personalizada desarrollada en C. El objetivo de este proyecto es recrear un conjunto de funciones de la librería estándar de C, incorporando también funciones propias para la gestión de memoria, manipulación de cadenas de texto y manejo de listas enlazadas.

Gracias a esta librería adquieres una comprensión fundamental de la asignación de memoria, estructuras de datos y manipulación de punteros en C. Todos los códigos creados en esta librería cumplen perfectamente con la **Norminette** de 42 y también utilizan "cc" con los flags "-Wall -Wextra -Werror" para asegurarnos de que no haya ningún tipo de fugas de memoria.

## Funciones

### Funciones de la libc (Comprobación y Conversión)

| Función | Descripción |
| :--- | :--- |
| `ft_isalpha` | Comprueba si el carácter es alfabético. |
| `ft_isdigit` | Comprueba si el carácter es un dígito del 0 al 9. |
| `ft_isalnum` | Comprueba si el carácter es alfanumérico. |
| `ft_isascii` | Comprueba si el carácter pertenece a la tabla ASCII. |
| `ft_isprint` | Comprueba si el carácter es imprimible. |
| `ft_toupper` | Convierte un carácter a mayúscula. |
| `ft_tolower` | Convierte un carácter a minúscula. |
| `ft_atoi` | Convierte una cadena de texto a un número entero (`int`). |

### Funciones de la libc (Gestión de Memoria y Cadenas)

| Función | Descripción |
| :--- | :--- |
| `ft_memset` | Llena un bloque de memoria con un byte específico. |
| `ft_bzero` | Pone a cero (bytes nulos) un número determinado de bytes en memoria. |
| `ft_memcpy` | Copia una zona de memoria a otra sin solapamiento. |
| `ft_memmove` | Copia una zona de memoria a otra gestionando correctamente zonas solapadas. |
| `ft_memchr` | Busca la primera ocurrencia de un byte en un bloque de memoria. |
| `ft_memcmp` | Compara dos bloques de memoria byte a byte. |
| `ft_calloc` | Reserva memoria dinámica e inicializa todos sus bytes a cero. |
| `ft_strlen` | Calcula la longitud de una cadena de texto. |
| `ft_strlcpy` | Copia una cadena a un búfer garantizando la terminación nula. |
| `ft_strlcat` | Concatena una cadena al final de otra garantizando la terminación nula. |
| `ft_strchr` | Busca la primera aparición de un carácter en una cadena. |
| `ft_strrchr` | Busca la última aparición de un carácter en una cadena. |
| `ft_strncmp` | Compara dos cadenas hasta un número determinado de caracteres. |
| `ft_strnstr` | Busca una subcadena dentro de otra con un límite de longitud. |
| `ft_strdup` | Duplica una cadena reservando memoria con `malloc`. |

### Funciones Adicionales

| Función | Descripción |
| :--- | :--- |
| `ft_substr` | Crea una subcadena a partir de una posición inicial y longitud dada. |
| `ft_strjoin` | Concatena dos cadenas en una nueva memoria reservada. |
| `ft_strtrim` | Elimina los caracteres especificados del inicio y final de una cadena. |
| `ft_split` | Divide una cadena en una matriz de subcadenas según un carácter delimitador. |
| `ft_itoa` | Convierte un entero (`int`) a una cadena de texto (`char *`). |
| `ft_strmapi` | Aplica una función a cada carácter de una cadena creando una nueva modificada. |
| `ft_striteri` | Aplica una función a cada carácter de una cadena pasando su índice por referencia. |
| `ft_putchar_fd` | Escribe un carácter en un descriptor de archivo dado. |
| `ft_putstr_fd` | Escribe una cadena de texto en un descriptor de archivo dado. |
| `ft_putendl_fd` | Escribe una cadena seguida de un salto de línea en un descriptor de archivo. |
| `ft_putnbr_fd` | Escribe un número entero en un descriptor de archivo dado. |

### Funciones Bonus (Listas Enlazadas)

| Función | Descripción |
| :--- | :--- |
| `ft_lstnew` | Crea y devuelve un nuevo nodo para la lista enlazada. |
| `ft_lstadd_front` | Añade un nodo al principio de la lista. |
| `ft_lstsize` | Cuenta el número de nodos de la lista. |
| `ft_lstlast` | Devuelve el último nodo de la lista. |
| `ft_lstadd_back` | Añade un nodo al final de la lista. |
| `ft_lstdelone` | Elimina un nodo específico aplicando una función de borrado a su contenido. |
| `ft_lstclear` | Elimina y libera todos los nodos de una lista enlazada. |
| `ft_lstiter` | Recorre la lista y aplica una función al contenido de cada nodo. |
| `ft_lstmap` | Genera una nueva lista aplicando una función a cada nodo de la lista original. |

## Instrucciones
### Compilation

Para compilar la librería, utiliza el **Makefile** incluido en el repositorio. Dispones de las siguientes reglas:

```bash
make		# Compila todos los archivos de la librería (genera libft.a)
make clean	# Elimina los archivos objeto (.o) generados durante la compilación
make fclean	# Elimina los archivos objeto y la librería compilada (libft.a)
make re		# Realiza un 'fclean' seguido de un 'make' (recompilación completa)
```
## Recursos

Durante el desarrollo de este proyecto se han utilizado diversas herramientas de consulta y documentación para comprender el comportamiento exacto de cada función:

- **Manuales de C (`man`):** Consulta indispensable en la terminal para conocer los prototipos originales, los parámetros, los valores de retorno y los posibles errores de cada función de la `libc` (por ejemplo, `man 3 strlen`, `man 3 memset`).
- **Documentación oficial y web:** Utilizadas como apoyo complementario para entender casos límite y la gestión de memoria en C. Algunas de las páginas de referencia utilizadas han sido `linux.die.net`, `stackoverflow.com` y tutoriales especializados en estructuras de datos.
- **Videos explicativos:** Recursos audiovisuales clave para visualizar la memoria y comprender la lógica de punteros y listas enlazadas:
  - **Daniel Españadero:** Explicaciones paso a paso de la lógica de los proyectos del C Piscine y tronco común de 42.
  - **Aprende a Programar / Programación ATS:** Guías fundamentales sobre punteros, memoria dinámica y la estructura interna de nodos y listas en C.
  - **mycodeschool:** Explicaciones visuales imprescindibles para entender cómo funciona el *stack*, el *heap*, los punteros dobles (`t_list **lst`) y la asignación dinámica de memoria.
- **Compañeros de 42:** Debate, resolución de dudas y puesta en común con otros estudiantes del campus para comparar enfoques y entender mejor cómo estructurar el código.
- **Inteligencia Artificial (IA):** Utilizada como herramienta de apoyo y consulta para resolver bloqueos conceptuales, entender errores complejos y guiar la lógica cuando no tenías claro por dónde enfocar el código.
