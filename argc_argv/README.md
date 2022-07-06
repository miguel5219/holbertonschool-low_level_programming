C -argc, argv

Para aquellos que escriben programas que se ejecutarán en un entorno alojado, los argumentos de main brindan una oportunidad útil para dar parámetros a los programas. Por lo general, esta función se utiliza para dirigir la forma en que el programa realiza su tarea. Es particularmente común proporcionar nombres de archivo a un programa a través de sus argumentos.

Hay al menos dos argumentos para main: argcy argv. El primero de ellos es un recuento de los argumentos proporcionados al programa y el segundo es una matriz de punteros a las cadenas que son esos argumentos: su tipo es (casi) 'matriz de puntero a char'. Estos argumentos se pasan al programa mediante el intérprete de línea de comandos del sistema host o el lenguaje de control de trabajos.
