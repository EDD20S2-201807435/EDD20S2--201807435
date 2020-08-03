#include <iostream>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
struct alumno{
char nombre[20];
char carnet[10];
alumno*siguiente;
};
void insertar(alumno *&lista, char Nombre[20],char Carnet[10]){
	alumno *nuevoalumno = new alumno();
	nuevoalumno->nombre[20] = Nombre[20];
	nuevoalumno->carnet[10] = Carnet[10];
	alumno *aux1 = lista;
	
	alumno*aux2;
	while(aux1 != NULL){
	aux2 = aux1;
	aux1 = aux1->siguiente;
	}
	
	if(aux1 == NULL){
	aux1 = nuevoalumno;	
	aux1->siguiente = NULL
	}else{
		aux1 = nuevoalumno;
		aux2->siguiente = aux1;
	}
	
	}
	
	void eliminar(alumno *&lista,char Carnet[10]){
	
	alumno*aux2;
	while(aux1 != NULL){
		if(aux1->carnet [10]== Carnet[10]){
			aux2->siguiente = aux1->siguiente;
		}
	aux2 = aux1;
	aux1 = aux1->siguiente;
	}
	
	
	}
	void modificar(alumno *&lista, char Nombre[20],char Carnet[10]){
	alumno *nuevoalumno = new alumno();
	nuevoalumno->nombre[20] = Nombre[20];
	nuevoalumno->carnet[10] = Carnet[10];
	alumno *aux1 = lista;
	
	alumno*aux2;
	while(aux1 != NULL){
		if(aux1->carnet [10]== Carnet[10]){
			aux2->siguiente = nuevoalumno;
			nuevoalumno->siguiente = aux1->siguiente;
		}
	aux2 = aux1;
	aux1 = aux1->siguiente;
	}
	
	
	
	}
	
void Mostrar(alumno *&lista){
    alumno *aux1 = lista;
	alumno*aux2;
	while(aux1 != NULL){
		std::cout << "/tNombre: "<<aux1->nombre;
		std::cout << "/tCarnet: "<<aux1->carnet;
	aux1 = aux1->siguiente;
	}
	}
int main() {
	char Carnet[10];
	char Nombre[20];
	alumno *lista = NULL;
	 Carnet[10] = "201807435";
	 Nombre[20] = "Milton Rodriguez";
	insertar(lista,Nombre,Carnet);
	 Carnet[10] = "201507535";
     Nombre[20] = "Josue Valdez";
	insertar(lista,Nombre,Carnet);
	 Carnet[10] = "201602824";
	 Nombre[20] = "Carlos Perez";
	insertar(lista,Nombre,Carnet);
	 Carnet[10] = "201789565";
	 Nombre[20] = "Josefina Campos";
	insertar(lista,Nombre,Carnet);
	 Carnet[10] = "201803345";
	 Nombre[20] = "Luz Arauz";
	insertar(lista,Nombre,Carnet);
		Mostrar(lista);
	eliminar(lista,"201807435");
	modificar(lista,"Sara Perez","201507535")
	Mostrar(lista);
	
	
	return 0;
}
