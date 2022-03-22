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

4. Free list:

En este caso nos piden que hagamos una funcion que libere una lista listint_t, para hacer esto lo que vamos a utilizar es free, primero que todo creamos un puntero auxiliar, el cual mas
adelante igualemos con el puntero del prototipo. Lo igualaremos luego de usar while para poner la condicion de que el puntero que nos dan sea diferente a NULL. Despues de igualarlos, vamos
a hacer que el puntero que nos dan se iguale al mismo puntero pero con ->next, por ultimo liberamos el auxiliar que habiamos creado anteriormente.

5. Free:

La funcion que tenemos que hacer tiene que liberar la memoria asignada para una lista y establecer el encabezado (head) en NULL, como en casos anteriores creammos un puntero auxiliar,
primero que nada tenemos que darle la condicion de que si el puntero que nos dan es igual a null, que no devuelva nada, y ahi terminaria toda la funcion, pero si no es asi, si no es
NULL, tenemos que hacer un while donde si existe el puntero que nos dan, igualamos nuestro auxiliar con el nombrado anteriormente pero pasando a next con la flechita. Luego liberamos el
puntero que nos dan y lo igualamos ahora sin la flechita con el auxiliar nuestro, porque no necesitamos que siga avanzando. Por ultimo cumplimos lo que nos pide la letra, que head sea
igual a NULL, y ahi terminaria nuestra funcion.

6. Pop:

Lo que nos dicen que hagamos es una funcion que elimine el nodo principal de una lista enlazada listint_t y devuelva los datos del nodo principal (n). Nos da la condicion de que si
la lista enlazada está vacía devuelve 0. El procedimiento realizado para hacer esto posible fue crear dos variables, una tipo int, y un puntero auxiliar. Le damos la condicion dada y
luego igualamos nuestro puntero con el que nos dan en el prototipo, siguiente a esto el puntero que nos dan lo igualamos al puntero que nos dan pero moviendose, para eso usamos next, luego
la variable int la igualamos a nuestro puntero el cual va a tener la flecha a n. Finalmente liberamos la memoria de nuestro puntero y retornamos nuestra variable int.

