/*
juego
-------
num_gen
num
veces
------
juego();
~juego();
void leedat();
void genera_num();
void verifica();
void respueta();
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
class juego{
    public:
        juego(){}
        ~juego(){}
    private:
        int num_gen;
        int num;
        int veces=1;
    public:
    void leedat(){
        cout<<"Digite un numero: ";
        cin>>num;
    }
    void genera_num(){
        srand(time(NULL));
        num_gen=1+rand()%20;
    }
    void verifica(){
        if(num_gen!=num){
            ++veces;
        }
        else{
            respuesta();
        }
    }
    void respuesta(){
        if(num==num_gen){
            cout<<"Lograste adivinar en "<<veces<<" intentos\n";
            cout<<"El numero a adivinar: "<<num_gen<<endl;
            exit(EXIT_SUCCESS);
        }
        else{
            cout<<"no pudiste adivinar en "<<veces<<" intentos\n";
            cout<<"El numero a adivinar era "<<num_gen<<endl;
        }
    }
};
int main(){
    juego obj;//instancia del objeto
    obj.genera_num();//invocar al metodo genera_num()
    int n=10;
    while(n--){
        obj.leedat();
        obj.verifica();
    }
    obj.respuesta();
    return 0;
}
