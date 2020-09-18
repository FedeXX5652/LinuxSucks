/*Escribir un programa de comandos en línea de órdenes que permita extraer un
campo contenido en un archivo de texto de tipo CSV (valores separados por
comas), que sea invocado como:
extract <archivo de entrada> <número de campo> <archivo de salida>
Ejemplo: Si el archivo de entrada, “in.txt” está compuesto de los siguientes
campos:
Juan, Perez, Viamonte 1566 3ºH, 4559-9281
Ana, Solís, Argerich 3144 PB, 4583-8567
al invocar al programa como:
extract in.txt 3 out.txt
se habrá de generar un segundo archivo de texto, “out.txt”, con el siguiente
contenido:
Viamonte 1566 3ºH
Argerich 3144 PB
Se debe validar los argumentos del programa e informar al usuario en caso de
error. Debe contemplarse los casos en que el archivo esté vacío, y el que no
exista el campo seleccionado.
Nota: Para la resolución del ejercicio puede suponerse que cada renglón del archivo de texto no contiene más
de 16K caracteres, incluidos todos los delimitadores y el retorno de carro.*/