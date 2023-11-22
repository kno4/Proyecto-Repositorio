#include <iostream>
#include <string>
using namespace std;

void pausa(){
    cout<<"Presiona ENTER para continuar...";
    cin.ignore();
    cin.get();
}
void instrucciones(){
    cout<<"Este es un juego con una historia interactiva por texto\n"<<endl;
    cout<<"Deberas tomar decisiones dadas las opciones\n"<<endl;
    cout<<"No pierdas todos tus puntos de vida o perderas\n"<<endl;
    cout<<"Regresando al menu..."<<endl;
}
void acercaDeJuego(){
    cout<<"En esta historia interactiva se te presentaran decisones que afectaran a la historia\n"<<endl;
    cout<<"Para elegir una de las opciones, deberas introducir la letra correspondiente a la decison que quieras elegir\n"<<endl;
    cout<<"Regresando al menu..."<<endl;
}
void creditos(){
    cout<<"Este programa fue realizado por Enrique Emiliano Cano Garcia\n"<<endl;
    cout<<"Fue realizado como proyecto para la materia de Computadoras y Programacion\n"<<endl;
    cout<<"Gracias por jugar!!"<<endl;
    cout<<"Regresando al menu..."<<endl;
}
int main(){
    char eleccion1;
    string nombre;
    char opcionMenu;
    do{
    cout<<"Menu Principal"<<endl;
    cout<<"A. Iniciar el juego"<<endl;
    cout<<"B. Acerca del juego"<<endl;
    cout<<"C. Instrucciones de juego"<<endl;
    cout<<"D. Creditos del juego"<<endl;
    cout<<"E. Salir del menu\n"<<endl;
    cout<<"Selecciona lo que quieres realizar"<<endl;
    cin>>opcionMenu;
    switch(opcionMenu){
        case 'A':
        case 'a':
            cout<<"Iniciando el juego..."<<endl;
            pausa();
        break;
        case 'B':
        case 'b':
            acercaDeJuego();
            pausa();
        break;
        case 'C':
        case 'c':
            instrucciones();
            pausa();
        break;
        case 'D':
        case 'd':
            creditos();
            pausa();
        break;
        case 'E':
        case 'e':
            cout<<"Gracias por participar"<<endl;
            cout<<"Saliendo del programa..."<<endl;
            return 0;
        break;
        default:
            cout<<"Esta opccion no es valida, introduzca un valor valido"<<endl;
        }
    }
    while(opcionMenu !='A' && opcionMenu != 'a');
    cout<<"\nBIENVENIDO A ESTA HISTORIA INTERACTIVA DE MAGIA Y FANTASIA"<<endl;
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
    cin>>eleccion1;
    switch (eleccion1){
    case 'A':
    case 'a':
        cout<<"-Cruzemos el bosque- dices con voz cortada"<<endl;
        break;
    case 'B':
    case 'b':
        cout<<"-Donde dices que queda tu ciudad?- preguntas con curiosidad"<<endl;
        break;
    case 'C':
    case 'c':
        cout<<"-Vamos al pueblo humano, quiza ahi recuerde de donde vengo-"<<endl;
        break;
    case 'D':
    case 'd':
        cout<<"-No se si quiero moverme de aqui, no te conozco y no recuerdo bien quien soy- dices con miedo"<<endl;
        break;
    case 'E':
    case 'e':
        cout<<"Hasta luego!"<<endl;
        break;
    default:
        cout<<"(Escoge una opcion valida para que la historia pueda continuar)";
        break;
    }
    return 0;
}