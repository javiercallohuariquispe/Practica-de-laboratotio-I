
#include<iostream>

using namespace std;
int main(){
   int sudoku[9][9];
   bool resultado=true;
   //lerr matriz
   for(int i = 0 ;i<9;i++)
   {
     for(int j = 0 ;j<9;j++){
        cin>>sudoku[i][j];
     }
   }
   //imprimir matrioz
   for(int i = 0 ;i<9;i++)
   {
       int sumaFilas = 0;
     for(int j = 0 ;j<9;j++){
            sumaFilas += sudoku[i][j];
     }
     if(sumaFilas !=45){
        resultado=false;
        break;
     }
   }

   for(int i = 0 ;i<9;i++)
   {
       int sumaColumnas = 0;
     for(int j = 0 ;j<9;j++){
            sumaColumnas += sudoku[j][i];
     }
     if(sumaColumnas !=45){
        resultado=false;
        break;
     }
   }
   if(resultado){
    cout<<"es valido la solucion"<<endl;
   }
   else{
     cout<<"No es valido la solucion"<<endl;
   }
    return 0;
}
