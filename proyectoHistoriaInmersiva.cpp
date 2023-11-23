#include <iostream>
#include <string>
using namespace std;

void pausa(){
    cout<<"Presiona ENTER para continuar";
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
    char eleccion1, sombraMovA, opcionMenu, lugar, cityLugar, dueloLamal;
    string nombre;
    int vida = 100;
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
    cout<<"Mareado, abres los ojos poco a poco y te encuentras con que una mujer de ojos azules y cabello pelirrojo \nte estaba dando agua dormido"<<endl;
    cout<<"Te sorprendes y de inmediato ella te dice:-No te preocupes, estoy tratando de ayudarte, mi nombre es Jelash"<<endl;
    cout<<"Confuso, observas sus orejas, son puntaigudas y delgadas"<<endl;
    cout<<"-Cual es tu nombre?- Ella pregunta"<<endl;
    cin>>nombre;
    cout<<"-Mucho gusto "<<nombre<<",soy un elfo de Ranria, el reino que esta cruzando el lago- dijo amablemente\n mientras sonreia"<<endl;
    cout<<"-Veo que eres un humano, de donde vienes?"<<endl;
    cout<<"Al ver tu confusion y tu sorpesa dice -Creo que no sabes- sonrie burlonamente y te mira fijamente"<<endl;
    cout<<"-Podemos cruzar el bosque, ir a mi ciudad, buscar el pueblo humano mas cercano- exponiendo tus opciones"<<endl;
    cout<<"-Que quieres hacer?-"<<endl;
    cout<<"(Escribe A si quieres cruzar el bosque)\n(B si quieres ir a Renria)\n(C si quieres buscar un pueblo humano) \n(D si quieres salir de la historia interactiva)"<<endl;
    cout<<"Tu vida actual es de "<< vida <<" Puntos de vida"<<endl;
    cin>>eleccion1;
    switch (eleccion1){
    case 'A':
    case 'a':
        cout<<"-Cruzemos el bosque- dices con voz cortada"<<endl;
        cout<<"-Por aca, vamos, sigueme- dice mientras se para y dirige la mirada hacia el bosque"<<endl;
        cout<<"-No debería ser muy peligroso, anda- dice ansiosa"<<endl;
        cout<<"Te levantas del suelo y ella empieza a caminar"<<endl;
        cout<<"...Despues de unos minutos de adentrarse en el bosque ves que no muy lejos a tu izquierda algo \ncomo una sombra se mueve y te asustas un poco aunque contnuas siguiendo a Jelash"<<endl;
        cout<<"Pasan 10 segundos y percibes el mismo movimiento, pero del lado derecho"<<endl;
        cout<<"Piensas si deberias decirle a Jelash de este movimiento y te decides por: "<<endl;
        cout<<"(S para decirle y N para no avisarle)"<<endl;
        cin>>sombraMovA;
        if(sombraMovA=='S'||sombraMovA=='s'){
            cout<<"-Oye, creo que hay algo que se movio por alla- dices mientras apuntas al lugar de donde provenia el movimiento"<<endl;
            cout<<"Ella se detiene -Hay alguien ahi?- pregunta casi gritando"<<endl;
            cout<<"Por unos momentos hubo silencio"<<endl;
            cout<<"De entre un arbo se asoma un enano con cabello y barba parejos que casi le llegaban \n a los pies"<<endl;
            cout<<"Amenzante empieza a correr en tu dirección mientras saca un cuchillo de su inmensa barba"<<endl;
            cout<<"Te quedas inmovil \n Jelash con su baston detiene al enano y lo neutraliza"<<endl;
            cout<<"(NO PIERDES VIDA)"<<endl;
            cout<<"Tu vida actual es de "<< vida <<" Puntos de vida"<<endl;
            lugar = 'A';
        }
        else{
            cout<<"No le dices nada a Jelash y continuan su camino"<<endl;
            cout<<"-Dentro del bosque hay una pequeña aldea de enanos que casi siempre son muy amigables- dice Jelash con calma \nmientras señala un letrero que dice 'Keins' y apunta con una flecha"<<endl;
            cout<<"Pasan el letrero y continuan caminando"<<endl;
            cout<<"Un minuto despues un ruido detras te hace darte la vuelta abruptuamente"<<endl;
            cout<<"De un arbol salta, lo que alcanzas a ver que es un enano y ves que empieza a correr \nen tu direccion con un cuchillo en la mano"<<endl;
            cout<<"Sientes un pinchazo en el abdomen y gritas mientras caes al suelo"<<endl;
            cout<<"(PIERDES 50 DE VIDA)"<<endl;
            cout<<"Tu vida actual es de "<< vida - 50 <<" Puntos de vida"<<endl;
            vida = 50; 
            lugar = 'B';
       }
        break;
    case 'B':
    case 'b':
        cout<<"-Donde dices que queda tu ciudad?- preguntas con curiosidad"<<endl;
        cout<<"-Usemos un portal de teletransportacion para que sea mas rapido- dice emocionada"<<endl;
        cout<<"Ella empieza a hablar en un idioma raro mientras en el suelo un circulo empieza a iluminarse"<<endl;
        cout<<"Te toma la mano y despues de unos segundos te encuentras en el centro de una ciudad"<<endl;
        cout<<"Ves que hay muchas tiendas y espcaios nuevos, todos los ciuadanos tienen \norejas picudas y vestimentas extrañas para ti"<<endl;
        cout<<"-Quiza te abrumes por la ciudad, asi que, para descubir de donde vienes \npodemos ir con el rey, podemos ir a la biblioteca a ver si hay algun libro que lo diga \no podemos preguntarle a mi gran abuela en su casa"<<endl;
        cout<<"(A para visitar al rey) \n(B para ir a la biblioteca) \n(C para ir a la casa de Jelash)"<<endl;
        cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
        cin>>cityLugar;
        switch(cityLugar){
            case 'A':
            case 'a':
                cout<<"-Vayamos a visitar al rey- dices"<<endl;
                cout<<"-Sigueme- ella empieza a caminar hacia al palacio"<<endl;
                cout<<"Un elfo vestido de verde se te queda viendo fijamente"<<endl;
                cout<<"Caminas hasta estar al lado de Jelash"<<endl;
                cout<<"Despues de unos minutos recorriendo la ciudad llegan a las puertas del palacio real"<<endl;
                cout<<"En la entrada, a unos metros de ti ves al elfo de verde y el se percata de tu prescencia"<<endl;
                cout<<"El elfo de verde camina decididamente en tu direccion, hasta estar a menos de 2 metros de ti"<<endl;
                cout<<"-Te reto a un duelo estupido humano- dice casi gritando"<<endl;
                cout<<"Sorprendido te quedas inmovil y sin saber que decir"<<endl;
                cout<<"-Lamal no molestes a mi invitado- dice Jelash con un poco de rechazo"<<endl;
                cout<<"Lamal la ignora"<<endl;
                cout<<"-Es un duelo oficial, solo mano limpia-"<<endl;
                cout<<"Aun confundido y sin saber el porque del duelo preguntas a Jelash por un consejo"<<endl;
                cout<<"-El siempre ha sido asi, si crees poder vencerlo, intentalo, el no es muy fuerte-"<<endl;
                cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                cout<<"(S para aceptar el duelo, N para negarte)"<<endl;
                cin>>dueloLamal;
                if(dueloLamal=='s'||dueloLamal=='S'){
                    cout<<"-Acepto el duelo-dices con orgullo"<<endl;
                    cout<<"El se pone a un metro de ti y Jelash se pone como juez imparcial"<<endl;
                    cout<<"-El primero que conecte un golpe en la cara al rival sera el ganador- dice Jelash "<<endl;
                    cout<<"El duelo comienza y el tira el primer golpe hacia tu cara el cual esquivas con facilidad"<<endl;
                    cout<<"Despues de un par de golpes y de un intecambio energetico de golpes y esquives \nLamal finta con un golpe de derecha y luego te conecta un golpe en la mandibula que te deja tirado en el suelo"<<endl;
                    cout<<"Pierdes el duelo y Jelash te ayuda a levantarte"<<endl;
                    cout<<"(PIERDES 40 DE VIDA)"<<endl;
                    cout<<"(Tu vida actual es de "<< vida-40 <<" Puntos de vida)"<<endl;
                    lugar='C';
                }
                else{
                    cout<<"-No lo aceptare, me niego- dices con decision"<<endl;
                    cout<<"Jelash sonrie y continuan por el pasillo hasta el despacho del rey"<<endl;
                    cout<<"(NO PIERDES VIDA)"<<endl;
                    cout<<"(Tu vida actual es de "<< vida <<"Puntos de vida)"<<endl;
                    lugar='D';
                }
            break;
            case 'B':
            case 'b':
                cout<<"-Vayamos a la biblioteca, quiza ahi encontemos algo mas sobre mi pasado"<<endl;

            break;
            case 'C':
            case 'c':

            break;
        }
        break;
    case 'C':
    case 'c':
        cout<<"-Vamos al pueblo humano, quiza ahi recuerde de donde vengo-"<<endl;
        break;
    case 'D':
    case 'd':
        cout<<"Hasta luego! Gracias por participar!"<<endl;
        return 0;
        break;
    default:
        cout<<"(Escoge una opcion valida para que la historia pueda continuar)";
        break;
    }
    switch(lugar){
        case 'A':

        break;
        case 'B':

        break;
        case 'C':
        
        break;
    }
    return 0;
}