/*Utilizando la función provista por la cátedra para abrir una conexión, la función
DSPread escrita en el Ejercicio 4.35, y la función DSPWrite escrita en el
Ejercicio4.36, escriba un programa que opere de acuerdo a las siguientes
especificaciones.
El programa se ejecuta con el siguiente comando
streamer [modo] [ip]
modo puede tomar dos valores: tx o rx.
Si modo es tx, abre una conexión con el nodo especificado en el parámetro ip,
utilizando la función provista por la cátedra, lee audio desde el dispositivo a
15KHz de ancho de banda, con un tamaño de muestra de 16 bits, y estéreo, y lo
transmita por red al nodo remoto.
Si modo es rx, entonces abre la conexión con el nodo remoto especificado en el
parámetro ip, y espera por ella audio asumiéndolo con Ancho de Banda 15 KHz.,
tamaño de muestra 16 bits, y estéreo, y lo escriba en el dispositivo de audio.
Utilice el puerto de conexión 5466.*/