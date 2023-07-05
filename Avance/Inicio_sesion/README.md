### Universidad de Costa Rica
#### Escuela de Ingeniería Eléctrica
#### Facultad de Ingeniería
#### IE0217-Estructuras de Abstractas de Datos y Algoritmos
##### Profesor: Esteban Badilla
##### Estudiante: Josué Salmerón Córdoba
##### I ciclo 2023
#### Proyecto Final

## Resumen
> En este proyecto se crea una aplicación para vender apartamentos a todos aquellos usuarios que se registren en la aplicación, que almacenará la información de cada uno de éstos para tener un registro/control de los clientes, así como el registro de las ventas. Inicialmente, la aplicación muestra una ventana para iniciar sesión, de donde el dueño/administrador no necesita crearse una cuenta, por lo que solo necesita conocer los credenciales para acceder a la aplicación, de donde se mostrarán 3 botones, uno para añadir apartamentos, el segundo para ver/eliminar apatarmentos y el tercero para mostrar la información de los clientes que también le servirá al dueño saber el estado de sus ventas. Por su parte, los usuarios normales podrán acceder a la información de los apartamentos para poder comprarlos, que al hacer la compra, elimina esa información del archivo txt correspondiente a los apartamentos, y actualiza su información con la frase: ``Compré A3``, por mencionar un ejemplo, esta acción la verá el dueño cuando despliega la información de sus usuarios.

## Información de las ventanas.
### Ventana MainWindow
- Esto es la ventana principal para que el dueño o sus clientes se registren para acceder al contenido de la aplicación. 
### Ventana WelcomeWindow
- Muestra los botones exclusivos para el dueño, donde él podrá administrar su negocio.
### Ventana Vista_User
- Esto le permitirá a los usuarios crearse una nueva cuenta con el objetivo de tener acceso a la app.
### Ventana Info_User
- Le mostrará al dueño la información de sus clientes junto con el registro de sus ventas.
### Ventana Infoaparta_admi
- Esto permite construir los apartamentos.
### Ventana Detalles_aparta
- Esta es la interfaz que verá el usuario normal para realizar la compra de algún apartamento.
### Ventana buscaraparta
- Aquí el administrador podrá ver la información de sus apartamentos, si no se muestra la información, entonces es porque aún no lo ha construido o ya fue vendido, lo cual, se puede consultar en la ventana **Info_User**.

---
## Comandos para correr la tarea
- Basta con abrir un terminal dentro de la carpeta ``Avance`` y escribir el siguiente comando:
```
make
```

> **Nota:** 
- La documentación de doxygen y la aplicación se abren al mismo tiempo.