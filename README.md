[![Open in Visual Studio Code](https://classroom.github.com/assets/open-in-vscode-2e0aaae1b6195c2367325f4f02e2d04e9abb55f0b24a779b69b11b9e10269abc.svg)](https://classroom.github.com/online_ide?assignment_repo_id=19693144&assignment_repo_type=AssignmentRepo)
# Proyecto final

## Integrantes
[Joan Nicolas Monsalve Rojas 138762](https://github.com/NicolasMonsalveJr) 

[Angel Corredor Marin 131134](https://github.com/Angel-wolt)

[Luis Camilo Cuervo Leon 130101](https://github.com/luis-cuervo)

## Nombre del proyecto: 
Parqueadero grupo 2
## Documentación
Materiales e investigación
Para este proyecto se realizo un estudio de la hoja de datos del microcontrolador que se va a ultilizar en este proyecto. El microprocesador que se va a ultilizar es el PIC18F45K22.

En la web se encontro una herramienta ultil de excel que nos va a ayudar a configurar las entradas y salidas de nuestro microcontrolador.

(image.png)

Gracias a esta hoja de datos adquirida en la web Ver video en YouTube podemos configuar cada pin de nuestro microcontrolador, ya sea como salida y entrada analoga o digital, lectura de entradas y escrituras de salida.

lo que esta resaltado en naranja es porque el fabricante del microcontrolador, no deja configurar estos puerto.

Descripcón.

Descripción del Funcionamiento del Código.

En una pantalla de lcd se visualiza cuantos cubiculos estan ocupados y cual esta solo para poder parquear, tiene un sensor de entrada que indica que esta entrando y otro que indica que esta saliendo.

Diagrama de flujo.

Inicio
  |
  v
Configurar RA0 como entrada
  |
  v
Inicializar sistema
  |
  v
+----------------------------+
|     Bucle infinito        |
|                            |
| ¿RA0 == 0?                 |
|    |                       |
|   Sí                       |
|    |                       |
| Esperar 3 segundos         |
|    v                       |
|  No                        |
|    |                       |
| Continuar                  |
+----------------------------+

IMPLEMENTACIÓN.

Link del video 

[Video del proyecto](https://youtu.be/CfjXhewrvMU?feature=shared)


## Conclusiones
1. Integración exitosa de hardware y software
Se logró implementar un sistema que responde a estímulos físicos (detección de un objeto) mediante la lectura de una entrada digital (RA0) y acciona un actuador (servo) mediante señales PWM generadas por el microcontrolador.

2. Uso efectivo del módulo CCP1 para generar PWM
El uso del módulo CCP1 junto con Timer2 permitió generar señales PWM precisas para controlar la posición del servo, demostrando el dominio del uso de periféricos internos del PIC.

3. Control del flujo del programa mediante estructuras simples
La estructura de control del programa es sencilla pero efectiva: un bucle infinito con una condición if-else que garantiza un comportamiento reactivo y continuo.

4. Importancia de la temporización y sincronización
El uso de retardos con __delay_ms(3000) permitió controlar el tiempo que el servo permanece en determinada posición, lo cual es fundamental en aplicaciones temporizadas.

5. Aplicación práctica de sensores y actuadores
El sistema demuestra cómo se pueden usar sensores digitales simples (como un sensor infrarrojo) para tomar decisiones lógicas que controlen actuadores en aplicaciones del mundo real, como automatización, robótica o seguridad.

6. Diseño modular del código
Separar el código en módulos (pwm.c, servo.c, etc.) facilita la organización, el mantenimiento y la reutilización en futuros proyectos.

