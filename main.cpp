#include <iostream>
using namespace std;
//*es donde o cuando nelson
int edad,numero1,numero2,entero,factorial=1, i = 1, x,dia,seleccion,respuesta=1;


int main (){
    while (respuesta = 1) {
        cout << "Ingresa un numero para escoger la operacion que quieras" << endl;
        cout << "1: Saber si eres mayor de edad" << endl;
        cout << "2: saber si un numero es mayor que otro" << endl;
        cout << "3: saber si un numero es impar" << endl;
        cout << "4: saber el factorial de un numero" << endl;
        cout << "5: numeros impares menonores que 10 y mayores que 30" << endl;
        cout << "6: Que dia de la semana es" << endl;
        cin >> seleccion;

        switch (seleccion) {
            case 1:
                cout << "Hola ingresa tu edad" << endl;
                cin >> edad;
                if (edad > 17) {
                    cout << "tu edad es de: " << edad << " eres mayor de edad" << endl;
                } else {
                    cout << "tu edad es de: " << edad << " eres menor de edad" << endl;
                }
                break;
            case 2:
                cout << "------------------------------------------------------------" << endl;
                cout << "hora ingresa dos numeros para compararlos" << endl;
                cout << "ahora ingresa un numero" << endl;
                cin >> numero1;
                cout << "ahora ingresa otro numero" << endl;
                cin >> numero2;
                if (numero1 > numero2) {
                    cout << "el numero " << numero1 << " es mayor al " << numero2 << endl;
                } else {
                    cout << "el numero " << numero2 << " es mayor al " << numero1 << endl;
                }
                cout << "------------------------------------------------------------" << endl;
                break;
            case 3:
                cout << "ingresa un numero" << endl;
                cin >> entero;

                if (entero % 2 == 0) {
                    cout << "el numero es par" << endl;
                } else {
                    cout << "el numero es impar" << endl;
                }
                cout << "------------------------------------------------------------" << endl;
                break;
            case 4:
                cout << "ingrese un numero para saber su factorial" << endl;
                cin >> x;
                while (i <= x) {
                    factorial = factorial * i;
                    cout << factorial << endl;
                    i = i + 1;
                }
                cout << "el factorial de " << x << " es: " << factorial << endl;
                cout << "------------------------------------------------------------" << endl;
                break;
            case 5:
                int n, d;
                do {
                    cout << "\ningresa un numero mayor que 10 y menor que 30: ";
                    cin >> n;
                } while (n <= 10 || n > 30);
                {
                    cout << "\nNumeros impares desde 1 hasta el numero " << n << ":" << endl;
                }
                for (d = 1; d <= n; d++) {
                    if (d % 2 != 0) {
                        cout << "\n" << d << endl;
                    }
                }
                break;
            case 6:
                cout << "------------------------------------------------------------" << endl;
                cout << "Ingresa un numero del 1 al 5 par ver el dia de la semana correspondiente" << endl;
                cin >> dia;
                switch (dia) {
                    case 1:
                        cout << "El numero " << dia << " Es el dia Lunes" << endl;
                        break;
                    case 2:
                        cout << "El numero " << dia << " Es el dia Martes" << endl;
                        break;
                    case 3:
                        cout << "El numero " << dia << " Es el dia Miercoles" << endl;
                        break;
                    case 4:
                        cout << "El numero " << dia << " Es el dia Jueves" << endl;
                        break;
                    case 5:
                        cout << "El numero " << dia << " Es el dia Viernes" << endl;
                        cout << "------------------------------------------------------------" << endl;
                        break;
                }
                break;

        }
        cout << "------------------------------------------------------------" << endl;
        cout << "quieres hacer otra operacion? 1= si" << endl;
        cout << "quieres hacer otra operacion? 2= no" << endl;
        cin >> respuesta;
        if (respuesta > 1){
            cout << "------------------------------------------------------------" << endl;
            return 0;

        }
    }

    return 0;
}



