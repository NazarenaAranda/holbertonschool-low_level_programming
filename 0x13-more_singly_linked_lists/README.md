0. Print list:

En este ejercicio, lo que tenemos que hacer es escribir una funcion la cual imprima todos los elementos de una lista listint t, para esto lo primero que hacemos es poner el
prototipo que nos dan, en el mismo prototipo ya nos dan 'h', h es el puntero al inicio de la lista. Luego tenemos que crear una variable la cual vaya avanzando para recorrer
el array. Como queremos que vaya contando enteros, la variable tiene que ser de tipo int, en este caso la llamaremos 'contar'. Luego con un for primero aclaramos que contar empiece
desde 0, luego si el puntero 'c' es diferente a NULL, es decir, si no esta vacio, que contar vaya aumentando y el puntero tambien, la diferencia que tienen es que contar va a ir en
forma constante y el puntero no. Por eso queda contar++ y h = h->next. Luego imprime %d, el salto de linea y el puntero a n con la flechita.

1. List length:

Lo que tenemos que hacer ahora es escribir una funcion que retorne el numero de elementos de una lista listint_t, luego de poner el prototipo en donde nos dan el puntero,
creamos una variable de tipo int para que vaya avanzando, despues de que la creamos aclaramos que empiece desde 0, es decir la declaramos. Siguiente a esto un while, nos fijamos
si el puntero es diferente a NULL, en el caso de que se cumpla esta condicion escribimos que contar vaya aumentando y el puntero vaya a next. Por ultimo retornamos nuestra variable
que es el numero de elementos.

2. Add node:

Doble puntero se le llama a cuando hay un puntero que apunta a otro interiormente, es decir, los punteros dobles tienen la direccion de memoria, de otro puntero. En este caso nos dicen
que agreguemos un nodo al comienzo de uns lista listint_t, para esto primero tenemos que declarar el nuevo puntero el cual va a ser la direccion al nuevo nodo, con este puntero vamos
a liberar un espacio en memoria con malloc, luego le damos distintas condiciones, si el nuevo node es nulo, retorna NULL, pero si encuentra la direccion de memoria del nuevo nodo, lo que
retorna es la direccion de este.

3. Add node at the end:

Para este ejercicio lo que tuve que hacer fue crear dos punteros, uno auxiliar y otro nuevo puntero para el nuevo nodo. Lo que nos piden en el ejercicio es agregar un nodo al final de
la lista listint_t, primero declaramos los punteros, el auxiliar lo igualamos al puntero que ellos nos dan en el prototipo. Con el que apunta a la direccion del nuevo nodo liberamos 
memoria utilizando malloc, despues de darle condiciones devolvemos la direccion del nuevo nodo.
