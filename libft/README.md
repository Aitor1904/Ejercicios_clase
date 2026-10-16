*Este proyecto ha sido creado como parte del currículo de 42 por ailopez*

## Descripción

Libft es una librería personalizada desarrollada en C. El objetivo de este proyecto es recrear un conjunto de funciones de la librería estándar de C, incorporando también funciones propias para la gestión de memoria, manipulación de cadenas de texto y manejo de listas enlazadas.

Gracias a esta librería adquieres una comprensión fundamental de la asignación de memoria, estructuras de datos y manipulación de punteros en C. Todos los códigos creados en esta librería cumplen perfectamente con la **Norminette** de 42 y también utilizan "cc" con los flags "-Wall -Wextra -Werror" para asegurarnos de que no haya ningún tipo de fugas de memoria.

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
