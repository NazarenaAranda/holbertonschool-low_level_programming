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
