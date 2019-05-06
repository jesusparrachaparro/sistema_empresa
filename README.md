# Aplicación de un sistema de base de datos de una empresa

Este programa tiene como objetivo crear una aplicación para una empresa que permita al usuario consultar, añadir y eliminar datos de esta, así como registrar órdenes de fabricación de ECUs y asociarlas con el operario que lleva a cabo la acción. Al ejecutar el programa se inicia una interfaz para poder acceder a las funciones relativas al personal o a las órdenes. 

Todos los datos del personal se irán guardando en un archivo .txt, de modo que no se borrarán al terminar el programa. De esta manera, cada vez que se requiera modificar algún dato sobre el personal, habrá que leer el fichero .txt para guardar los datos en contenedores. Una vez realizada la modificación (añadir o eliminar algún usuario), se escribirá en el fichero de nuevo todos los datos. Para consultar datos de personal, también será necesario leer el fichero .txt.

En cuanto a la interfaz que crea las órdenes, se emplea un fichero de texto también para escribir esas órdenes. Cada nueva orden deberá tener información sobre la fecha en la que se ha creado, el operario que la llevará a cabo, y los principales datos de la ECU que se ha mandado fabricar (marca, modelo, datos de la PCB y datos de la carcasa).

IMPORTANTE: Puesto que este programa se ha probado en el ordenador de los desarrolladores del mismo, debe cambiarse la dirección en la que se guardarán los ficheros de texto empleados para el personal y para las órdenes, con el objetivo de que el programa funcione en cualquier ordenador. Las direcciones a cambiar se encuentran en: leer.cpp, escribir.cpp, operario.cpp, ecu.cpp, pcb.cpp, y carcasa.cpp.

El diagrama UML que relaciona las clases del programa se muestra en la siguiente imagen:
<a href="https://www.dropbox.com/s/2s7aohcoitsnjhe/uml.jpg?dl=0"><img src="https://www.dropbox.com/s/2s7aohcoitsnjhe/uml.jpg?dl=0" /></a>
