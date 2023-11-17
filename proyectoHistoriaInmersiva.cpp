#include <iostream>
#include <string>
using namespace std;

void pausa(){
    cout<<"Presiona ENTER para continuar...";
    cin.ignore();
    cin.get();
}

int main(){
    char variable;
    string nombre;
    cout<<"Bienvenido a esta historia interactiva de Magia y Fantasia"<<endl;
    pausa();
    cout<<"Mareado, abres los ojos poco a poco y te encuentras con que una mujer de ojos azules y cabello pelirrojo te estaba dando agua dormido"<<endl;
    cout<<"Te sorprendes y de inmediato ella te dice:-No te preocupes, estoy tratando de ayudarte, mi nombre es Jelash"<<endl;
    cout<<"Confuso, observas sus orejas, son puntaigudas y delgadas"<<endl;
    cout<<"-Cual es tu nombre?- Ella pregunta"<<endl;
    cin>>nombre;
    cout<<"-Mucho gusto "<<nombre<<" ,soy un elfo de Ranria, el reino que esta cruzando el lago- dijo amablemente mientras sonreia"<<endl;
    cout<<"-Veo que eres un humano, de donde vienes?"<<endl;
    cout<<"Al ver tu confusion y tu sorpesa dice -Creo que no sabes- sonrie burlonamente y te mira fijamente"<<endl;
    cout<<"-Podemos cruzar el bosque, ir a mi ciudad, buscar el pueblo humano mas cercano o esperar aqui por si alguien viene a recogerte-"<<endl;
    cout<<"-Que quieres hacer?-"<<endl;
    cout<<"(Escribe A si quieres cruzar el bosque)\n(B si quieres ir a Renria)\n(C si quieres buscar un pueblo humano)\n(D si quieres esperar ahi)\n(E si quieres salir de la historia interactiva)"<<endl;
    cin>>variable;
    switch (variable){
    case 'A':
        cout<<"-Cruzemos el bosque- dices con voz cortada"<<endl;
        break;
    case 'B':
        cout<<"-Donde dices que queda tu ciudad?- preguntas con curiosidad"<<endl;
        break;
    case 'C':
        cout<<"-Vamos al pueblo humano, quiza ahi recuerde de donde vengo-"<<endl;
        break;
    case 'D':
        cout<<"-No se si quiero moverme de aqui, no te conozco y no recuerdo bien quien soy- dices con miedo"<<endl;
        break;
    case 'E':
        cout<<"Hasta luego!"<<endl;
        break;
    default:
        cout<<"(Escoge una opcion valida para que la historia pueda continuar)";
        break;
    }
    return 0;
}