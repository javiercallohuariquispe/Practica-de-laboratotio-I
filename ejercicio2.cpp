class Operaciones{
	private:
		int N;
		int Y;
		int X;
	public:

		void Suma();
		void Resta();
		void Multi();
		void Div();
		void Simpl();

};



void Operaciones::Suma(int N, int Y,int X){

	cout<<"ingrese primer valor"N<<endl;
	cout<<"ingrese segundo valor"Y<<endl;

	N+Y=X;

	cout<<"la suma es :"<<X<<endl;

}
void Operaciones::Resta(int N, int Y, int X){

	cout<<"ingrese primer valor"<<endl;
	cout<<"ingrese segundo valor"Y<<endl;

	N-Y=X;

	cout<<"la resta es :"<<X<<endl;

}

void Operaciones::Multi(int N, int Y, int X){

	cout<<"ingrese primer valor"N<<endl;
	cout<<"ingrese segundo valor"Y<<endl;

	N*Y=X;

	cout<<"la multiplicacion es :"<<X<<endl;

}

void Operaciones::Div(int N, int Y, int X){

	cout<<"ingrese primer valor"<<N<<endl;
	cout<<"ingrese segundo valor"<<Y<<endl;

	N/Y=X;

	cout<<"la division es :"<<X<<endl;

}


int main(int argc, char* argv) {

	Operaciones P1;
	int N,Y;

	P1.Suma(3,4);
	cout << "1) SUMAR " << endl;
	cout << "2) RESTAR  " << endl;
	cout << "3) MULTIPLICAION  " << endl;
	cout << "4) DIVIDIR"  << endl;
	cout << "0) Salir " << endl;
	cin>>opcion;
	switch (opcion)
		{
		case 1:
			cout << "Ingrese el elemento" << endl;
			cin >> N;
			cout << "Ingrese el elemento" << endl;
			cin >>Y;
        P1.Suma(N,Y);
			break;
        case 2:
			cout << "Ingrese el elemento" << endl;
			cin >> N;
			cout << "Ingrese el elemento" << endl;
			cin >>Y;
        P1.Resta(N,Y);
			break;
		case 3:
			cout << "Ingrese el elemento" << endl;
			cin >> N;
			cout << "Ingrese el elemento" << endl;
			cin >>Y;
        P1.Multi(N,Y);

			break;
		case 4:
		   cout << "Ingrese el elemento" << endl;
			cin >> N;
			cout << "Ingrese el elemento" << endl;
			cin >>Y;
        P1.Div(N,Y);

			break;

		default:
			cout << "opción no valida" << endl;
			break;
		}
	} while (opcion != 0);


	return 0;
}
