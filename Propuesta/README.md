
# Universidad de Costa Rica

## Propuesta proyecto IE0217


### Profesor: Esteban Badilla

### Estudiante: Josué Salmerón Córdoba

### I Ciclo-2023

#### Resumen
* A lo largo de este archivo se muestra la propuesta del proyecto de este curso. Donde se hará uso de Qt Design para crear la interfaz gráfica, botones, widgets y el uso de *C++* para aprovechar lo aprendido en el curso de IE0217 hasta el momento con el uso de clases, objetos, punteros, polimorfismo y regex que estarán presentes en el proyecto, el cual se trata de un sistema de información para alquilar apartamentos, es decir, habrán dos papeles en este proyecto pues el administrador se encargará de manejar la información de cada apartamento, agregando nuevas características, actualizando la información de cada casa, como estado de construcción o remodelación, detalles como cantidad de cuartos, pisos, cochera, servicios, precios, disponibilidad, o sea, el administrador preparará y tendrá acceso a toda esa información para que el cliente registrado correctamente al sistema de gestion del residencial: **Bosques de Cristo Rey**  pueda visualizarla. Ahora, por su parte, el cliente podrá ver esa información y valorar si alquila o no el apartamento, y una vez que realice el trámite el administrador podrá ver este cambio, así como los demás nuevos usuarios, es decir, se pretende mostrar la información actualizada en todo momento.


### Sesión de inicio
- Primeramente se muestra la página donde le pide al usuario registrarse, y si es nuevo, entonces le da la oportunidad de crear un nuevo usario en el botón: ``Crear nueva cuenta.``

![App Screenshot](https://github.com/JosueC07183/ProyectoIE0217/blob/main/Propuesta/Images/Inicio.png?raw=true)

Una vez que ingrese correctamente los datos ya sea el administrador o el usuario se procede a darle click en el botón ``Ingresar``, si los datos no están correctos entonces, el sistema no permitirá acceder a la siguiente página donde se mostrará la información correspondiente. 

### Creación de nuevo usuario
- Si se trata de un nuevo cliente, entonces se solicitan los siguientes datos:
![App Screenshot](https://github.com/JosueC07183/ProyectoIE0217/blob/main/Propuesta/Images/registro.png?raw=true)

Los espacios para rellenar la información tendrán una expresión regular (cuando lo amerite) para procurar que el cliente digite la información pertinente. Cuando da click el botón de ``Registrarse`` la idea es que regrese a la página inicial donde ahora si pueda digitar sus datos recién hechos y puede acceder al sistema de información de los apartamentos.


>Nota: Toda la información de los usuarios se maneja de manera local en un archivo .txt

### Vista administrador
- Cuando el administrador se registra le aparecerán 3 botones. El primero ``Añadir apartamento`` le permite crear un nuevo apartamento con el uso de una clase: ``add_Aparta`` que tendrá todo lo necesario (métodos) para añadir las características a un nuevo hogar. El botón ``Eliminar apartamento`` básicamente eliminará la información de cierto apartamento. El botón ``Ver información actual`` accederá al estado actual de los apartamentos, imprimirá la información sobre cuales apartamentos están disponibles y cuales no. Luego, el botón ``Salir`` cierra sesión y se mostrará la página de inicio.
![App Screenshot](https://github.com/JosueC07183/ProyectoIE0217/blob/main/Propuesta/Images/Vista_Admi.png?raw=true)

### Vista cliente
- Se espera que el cliente al registrarse observe dos botones donde le permitan ver la información de los apartamentos disponibles y lo que están en construcción. El botón ``Salir`` cierra sesión y se vuelve a mostrar la página de inicio.
![App Screenshot](https://github.com/JosueC07183/ProyectoIE0217/blob/main/Propuesta/Images/vista_cliente.png?raw=true)

Ahora, si el cliente presiona el botón ``Apartamentos disponibles`` se mostrará lo siguiente:
![App Screenshot](https://github.com/JosueC07183/ProyectoIE0217/blob/main/Propuesta/Images/vista_cliente2.png?raw=true)

Donde podrá observar los apartamentos disponibles por el momento, suponiendo que desea ver los detalles del apartamento A1, entonces el cliente visualizará lo siguiente:
![App Screenshot](https://github.com/JosueC07183/ProyectoIE0217/blob/main/Propuesta/Images/vista_cliente3.png?raw=true)

Donde aparecerá el botón: ``Alquilar``, si el cliente presiona este botón la información se actualiza a nivel administrativo y para los demás clientes. Es decir, cuando el administrador ingresa podrá ver que el apartamento A1 está alquilado por cierto cliente (en realidad podrá ver toda la información de éste), mientras que si otro cliente desea ver la disponibilidad del apartamento A1, entonces lo que se le mostrará será un mensaje de advertencia que diga: **El apartamento no está disponible**. Ahora, si el cliente no desea alquilar el apartamento que está viendo en ese momento entonces con darle click al botón ``Regresar`` se mostrará la ventana con la información de los apartamentos y si vuelve a presionar el botón ``Regresar`` llegará a la ventana donde están los apartamentos disponibles y en construcción. Suponiendo que desea ver los apartamentos en construcción, entonces el cliente verá los datos del apartamento en proceso, el botón ``No disponible`` no hará nada, los botones superiores de *<Anterior* y *Sigueinte>* son para ver los demás apartamentos que se encuentran en construcción y finalmente el botón ``Regresar`` hace el mismo procedimiento descrito anteriormente.
![App Screenshot](https://github.com/JosueC07183/ProyectoIE0217/blob/main/Propuesta/Images/vista_cliente4.png?raw=true)





