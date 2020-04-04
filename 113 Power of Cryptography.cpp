#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int array[1000];
int contador_resultados = 0;

double potencia(int base,int expo){
    double pot = base;
    for (int i=1;i<expo;i++){        //Dos multiplicaciones
        pot = pot*base;
    }
    
    return pot;
}

int encontrarRaiz(int n1,double n2){
    int raiz = 1;
    double temp;
    
    if (n1 > 0){
        while (temp < n2){
            temp= potencia(raiz,n1);
            raiz++;
        }
        if (temp == n2){
            return raiz-1;
        }
        else{
            return -1;
        }
    }
    else{
        return -2;
    }


}


int main(){
    int resultado;
    bool flag = true;
    while (flag == true){
        
        string S_n1;
        string S_n2;
    
        int n1;
        double n2;
    
        getline(cin,S_n1);
        if (S_n1 != ""){
                        
            stringstream geek1(S_n1);
            geek1 >> n1;
            
            getline(cin,S_n2);
            stringstream geek2(S_n2);
            geek2 >> n2;
            
            resultado = encontrarRaiz(n1,n2);
            array[contador_resultados] = resultado;
            contador_resultados++;
        }
        else{
            flag = false;
        }
    }
    for (int i = 0;i<contador_resultados;i++){
        cout << array[i] << endl;
    }


    return 0;    
}



