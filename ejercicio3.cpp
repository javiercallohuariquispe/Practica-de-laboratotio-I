#include <iostream>
using namespace std;

int* GetBigInteger(string str,string rt)
{
    int x = str.size(), a = 0;
    int* arr = new int[str.size()];
    while (a != x) {
        arr[a] = str[a] - '0';
        a++;
    }
    return arr;
}


int main()
{
    int opcion;
    string srt="12345678098765431234567809871231313213132132132131321312312313123123213123131313213213213123213124134213123123136543";
    string rt="12345678098765431234567809871231313213132132132131321312312313123123213123131313213213213123213124134213123123136543";
    cout << "1) SUMAR " << endl;
	cout << "2) MULTIPLICAR  " << endl;
	cout << "3) DIVIDIR " << endl;
	cout << "3) RESTAR " << endl;
	cout << "0) Salir " << endl;
	cin>>opcion;
	switch (opcion)
		{
		case 1:
			cout << "Ingrese el elemento" << endl;
			cin >> srt;
			cout << "Ingrese el elemento" << endl;
			cin >> rt;
			sumar(srt);
			sumar(rt);
			break;
        case 2:
			cout << "Ingrese el elemento" << endl;
			cin >> srt;
			cout << "Ingrese el elemento" << endl;
			cin >> srt;
			Multiplicar(srt);
			Multiplicar(rt);
			break;
		case 3:
			cout << "Ingrese el elemento" << endl;
			cin >> srt;
			cout << "Ingrese el elemento" << endl;
			cin >> srt;
			Dividir(srt);
			Dividir(rt);
			break;
		case 4:
		    cout << "Ingrese el elemento" << endl;
			cin >> srt;
			cout << "Ingrese el elemento" << endl;
			cin >> rt;
			Restar(srt);
			Restar(rt);
			break;

		default:
			cout << "opción no valida" << endl;
			break;
		}
	} while (opcion != 0);

    int* arr = GetBigInteger(str);
    for (int i = 0; i < str.size(); i++) {
        cout << arr[i];
    }

    return 0;
}
