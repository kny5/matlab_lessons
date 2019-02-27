/*
Programa:Operaciones de matrices
Desarrollado: Rodolfo Sarabia
Fecha:18 Feb 2019
Version:1.0.0
*/
//******************************
//Librerías
#include <iostream>
#include <iomanip>
#include <algorithm>

using namespace std;

//Estructura matriz
struct matriz{

	int row, col;
    float datos[10][10];

};

//Subrutinas

//Ingresar datos de matriz
void entradaMatriz(matriz& m) {
      do {
        cout << "Renglones = ";
        cin >> m.row;
        cout << "Columnas = ";
        cin >> m.col;
        if (m.row < 1 || m.col < 1 || m.row > 10 || m.col > 10) {
          cout << "Incorrecto. Ingrese Min = 1x1 max size = 10x10.\n";
        }
      } while (m.row < 1 || m.col < 1 || m.row > 10 || m.col > 10);

      cout << "Ingrese datos de matriz de arriba-izquierda y abajo-derecha.\n";
      for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
          cout << "Entrada de Matriz (" << i << "," << j << ") = ";
          cin >> m.datos[i][j];
        }
      }
    }
//Mostrar matriz
void displayMatriz(matriz m) {
      for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
          cout << setw(7)<< m.datos[i][j];
        }
        cout << endl;
      }
    }
//Imprimir Resultados de operacion de matriz.
 void resultMatriz(int rows, int cols,matriz m) {
      for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
          cout << setw(7) << m.datos[i][j];
        }
        cout << endl;
      }
    }
 // Suma de Matriz.
 void matrizSuma(matriz& m, matriz& m2) {
      //Si renglones y columnas iguales en las matrices
	  if (m2.row == m.row && m2.col == m.col) {
        //Desde 0 hasta numero de renglones
		for (int i = 0; i < m.row; i++) {
          //Desde o hasta numero de columnas
		  for (int j = 0; j < m.col; j++) {
            //Sumar elemento por elemento
			m.datos[i][j] += m2.datos[i][j];
          }
        }
        //Mostrar resultado
		displayMatriz(m);
      //Si renglones y columnas son distintas
      //Mensaje:No se puede realizar operación
	  } else {
        cout << "No se puede completar suma de matrices.\n";
      }
    }
 //Resta de Matriz
 void matrizResta(matriz& m, matriz& m2){
 	//Si renglones y columnas iguales en las matrices
	  if (m2.row == m.row && m2.col == m.col) {
        //Desde 0 hasta numero de renglones
		for (int i = 0; i < m.row; i++) {
          //Desde o hasta numero de columnas
		  for (int j = 0; j < m.col; j++) {
            //Sumar elemento por elemento
			m.datos[i][j] -= m2.datos[i][j];
          }
        }
        //Mostrar resultado
		displayMatriz(m);
      //Si renglones y columnas son distintas
      //Mensaje:No se puede realizar operación
	  } else {
        cout << "No se puede completar suma de matrices.\n";
      }
 }
 //Multiplicar escalar por matriz
 void scalarMult(matriz& m) {
      float scalar;
	  cout << "Ingresar escalar a multiplicar por matriz: ";
      cin >> scalar;
      for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
          m.datos[i][j] *= scalar;
        }
      }
      displayMatriz(m);
    }
 // Transponer matriz.
 void transpose(matriz& m) {
      matriz res;
	  int temp = m.row;
      m.row = m.col;
      m.col = temp;
      for (int i = 0; i < m.row; i++) {
        for (int j = 0; j < m.col; j++) {
          res.datos[i][j] = m.datos[j][i];
        }
      }
      resultMatriz(m.row, m.col,res);
    }
 //Multiplicar matrices
 void matrizMult(matriz& m,matriz& m2) {
      matriz res;
      res.row=m.row;
      res.col=m.col;
      float sum;
	  if (m2.col == m.row) {
        for (int i = 0; i < m2.row; i++) {
          for (int j = 0; j < m.col; j++) {
            sum=0;
            for (int k = 0; k < m.row; k++) {
              sum += m2.datos[i][k] * m.datos[k][j];
              res.datos[i][j]=sum;
            }
          }
        }
        resultMatriz(m2.row, m.col,res);
      } else {
        cout << "No es posible realizar multiplicacion de matrices.\n";
      }
    }

//Programa principal
int main(){

	 //Declaraciones
	 matriz a,b;
	 int opcion;
	 string seguir;
	  //Ciclo principal
	  do {
	 	//Limpiar pantalla y bienvenida
		//system("cls");
	 	cout << "Bienvenido a programa de matrices!\n\n";
	 	//Mostrar menú de opciones
	 	cout << "Seleccione opcion de menu\n"
	     << "1.- Suma de matrices.\n"
	     << "2.- Resta de matrices.\n"
	     << "3.- Multiplicacion por escalar.\n"
	     << "4.- Multiplicacion de matrices.\n"
		 << "5.- Transpuesta.\n";

	    cout << "Por favor seleccione un numero de opcion: ";
	    //Guardar selección de usuario
		cin >> opcion;
		//Realizar operaciones
		switch(opcion){

			case 1:{
				cout<<"primer matriz"<<endl;
				entradaMatriz(a);
				cout<<"segunda matriz"<<endl;
				entradaMatriz(b);
				cout<<"El resultado de suma es:"<<endl;
				matrizSuma(a,b);
			}break;
			case 2:{
				cout<<"primer matriz"<<endl;
				entradaMatriz(a);
				cout<<"segunda matriz"<<endl;
				entradaMatriz(b);
				cout<<"El resultado de resta es:"<<endl;
				matrizResta(a,b);
			}break;
			case 3:{
				cout<<"Ingrese matriz"<<endl;
				entradaMatriz(a);
				scalarMult(a);
			}break;
			case 4:{
				cout<<"primer matriz"<<endl;
				entradaMatriz(a);
				cout<<"segunda matriz"<<endl;
				entradaMatriz(b);
				cout<<"El resultado de multiplicacion es:"<<endl;
				matrizMult(b,a);
			}break;
			case 5:{
				cout<<"Ingrese matriz"<<endl;
				entradaMatriz(a);
				transpose(a);
			}break;
			default:{
				cout<<"No existe esa opcion, intente de nuevo"<<endl;
			}

		}
		//Continuar o salir de programa
		cout<<"Desea continuar? si o no"<<endl;
		cin>>seguir;

	 }while(seguir == "si");


}