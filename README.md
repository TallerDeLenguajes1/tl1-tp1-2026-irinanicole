4-g) Si resolvió correctamente los apartados 2 y 3 del punto anterior notará que 
el resultado es el mismo. ¿a qué se debe? ¿Qué obtiene en el punto 4? 
¿Es igual a los anteriores? ¿Por qué? Responder en el archivo readme.md  

-->¿por qué siguen apareciendo los archivos ejecutables .exe en mi repositorio remoto de github si ya existe un archivo .gitignore?

	La razón principal por la que los archivos ejecutables (.exe) siguen apareciendo en tu repositorio remoto de GitHub, a pesar de tener un archivo .gitignore, es que esos archivos ya fueron rastreados (commitados) por Git antes de que crearas o actualizaras el archivo.
	.gitignore solo evita que archivos nuevos (no rastreados) sean añadidos; no elimina automáticamente los archivos que ya están en el historial del repositorio.
--> ¿Cómo solucionarlo? (Eliminar los .exe del repositorio remoto)
Eliminar los ejecutables del índice de Git (caché) sin borrarlos de tu computadora, y luego hacer un nuevo commit. 