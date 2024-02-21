#include <iostream>
#include "Cliente.cpp"
using namespace std;
main(){
	string nit, nombres, apellidos, direccion;
	int telefono;
	
	cout<<"Ingresar NIT:"<<endl;
	cin>>nit;
	cout<<"Ingresar Nombres:"<<endl;
	cin>>nombres;
	cout<<"Ingresar Apellidos:"<<endl;
	cin>>apellidos;
	cout<<"Ingresar Direccion:"<<endl;
	cin>>direccion;
	cout<<"Ingresar Telefono:"<<endl;
	cin>>telefono;
	//instancia de un objeto o mandarlo a llamar
	Cliente obj = Cliente(nombres, apellidos, direccion, telefono, nit);
	obj.mostrar();
	//Si queremos modificar los datos se debe de volver a mandar los mensajes y volver a instanciar los datos. 
	/*cout<<"Ingresar NIT:"<<endl;
	cin>>nit;
	Cliente obj2 = Cliente(nombres, apellidos, direccion, telefono, nit);
	obj2.mostrar();*/
	cout<<"Ingresar NIT:"<<endl;
	cin>>nit;
	obj.setNit(nit);
	cout<<obj.getNit();	
	
	
	/*Cliente obj = Cliente();
	obj.setNit(nit);
	obj.setNombres(nombres);
	obj.setApellidos(apellidos);
	obj.setDireccion(direccion);
	obj.setTelefono(telefono);
	obj.mostrar();*/
	
}

