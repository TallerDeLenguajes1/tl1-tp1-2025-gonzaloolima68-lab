## ¿que es el .gitignore?

Un archivo gitignore especifica los archivos que Git debe ignorar intencionadamente y que no se rastrean

## ¿Por qué es conveniente incluirlo?

Permite evitar subir archivos innecesarios o temporales al repositorio.

## ¿Cuándo se debe hacer?

Es recomendado hacerlo al iniciar el proyecto.

## ¿Cómo se configura?

Para crear un archivo .gitignore local, crea un archivo de texto y asígnale el nombre ".gitignore" . Luego, edita este archivo según sea necesario. Cada nueva línea debe incluir un archivo o carpeta adicional que quieras que Git lo ignore.

## Regla de como ignorar un archivo ejemplo(ignorar.txt)

Para ignorar el archivo ignorar.txt, se crea el archivo .gitignore y dentro se escribe ignorar.txt se esta forma git lo ignorara

## respuestas del punto 3

## errores encontrados en el codigo_sin_funcionar

## Corrección del código

- Faltaba incluir la librería `<stdio.h>` (se agregó al inicio del código).
- En `scanf` faltaba el operador `&` (se agregó en la variable valor1).
- Para poder modificar la variable dentro de la función, se usaron punteros (se agregó `&` al llamar la función y `*` en la función).
- Faltaban `;` en algunas líneas (se agregaron en las líneas correspondientes).


## Análisis del código misterioso
El programa toma un número y le hace varias operaciones 
- Primero invierte el número  (452 → 254)
- después lo divide por 2  (254 → 127)
- final suma sus dígitos al resultado y lo suma con el numero ingreso (1+2+7=10) (10+127=137)

## Cambios de nombres
Cambiamos los nombres para que sean más claros y fáciles de entender:

- f_alpha → invertir_Numero: porque invierte los dígitos del número.
- f_beta → dividir_en_Dos: porque divide el número por 2.
- f_gamma → suma_digitos: porque suma los dígitos del número.
- procesar_enigma → proceso: porque realiza todas las operaciones sobre el número.
- dato_secreto → num: porque representa el valor que se está usando.