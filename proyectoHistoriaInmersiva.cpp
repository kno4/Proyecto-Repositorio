#include <iostream>
#include <string>
using namespace std;

void final(){
    cout<<"(CONTINUARA?...)"<<endl;
    cout<<"HAS TERMINADO LA HISTORIA"<<endl;
    cout<<"Has llegado a un final, vuelve a jugar para descubir los demas finales"<<endl;
    cout<<"GRACIAS POR JUGAR ESTA HISTORIA"<<endl;
    cout<<"Saliendo del programa..."<<endl;
}
void muerte(){
    cout<<"(Tu vida ha llegado a 0 por lo que HAS MUERTO)"<<endl;
    cout<<"HAS MUERTO"<<endl;
    cout<<"GRACIAS POR JUGAR ESTA HISTORIA"<<endl;
    cout<<"Saliendo del programa..."<<endl;
}
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
    char eleccion1, sombraMovA, opcionMenu, lugar, cityLugar, dueloLamal, comidaMercado, alatel, cruzarLago, felinoAtaque, armaBosque, apuestaTaberna, destHospital, lectura;
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
    cout<<"Con mareo fuerte, abres los ojos poco a poco y te encuentras con que una mujer de ojos azules y cabello pelirrojo \nte estaba dando agua dormido"<<endl;
    cout<<"Te sorprendes y de inmediato ella te dice:-No te preocupes, estoy tratando de ayudarte, mi nombre es Jelash"<<endl;
    cout<<"Confuso, observas sus orejas, son puntaigudas y delgadas"<<endl;
    cout<<"-Cual es tu nombre?- Ella pregunta"<<endl;
    cin>>nombre;
    cout<<"-Mucho gusto "<<nombre<<",soy un elfo de Ranria, el reino que esta cruzando cruzando las cordilleras del poniente superior- dijo amablemente\n mientras sonreia"<<endl;
    cout<<"-Veo que eres un humano, de donde vienes?"<<endl;
    cout<<"Al ver tu confusion y tu sorpesa dice -Creo que no sabes- sonrie burlonamente y te mira fijamente"<<endl;
    cout<<"-Podemos cruzar el bosque, ir a mi ciudad, buscar el pueblo humano mas cercano- exponiendo tus opciones"<<endl;
    cout<<"-Que quieres hacer?-"<<endl;
    cout<<"(Escribe A si quieres cruzar el bosque)\n(B si quieres ir a Renria)\n(C si quieres buscar un pueblo humano) \n(D si quieres salir de la historia interactiva)"<<endl;
    cout<<"Tu vida actual es de "<< vida <<" Puntos de vida"<<endl;
    do{
        cin>>eleccion1;
     switch (eleccion1){
        case 'A':
        case 'a':
            cout<<"-Cruzemos el bosque- dices con voz cortada"<<endl;
            cout<<"-Por aca, vamos, sigueme- dice mientras se para y dirige la mirada hacia el bosque"<<endl;
            cout<<"-No deberia ser muy peligroso, anda- dice ansiosa"<<endl;
            cout<<"Te levantas del suelo y ella empieza a caminar"<<endl;
            cout<<"...Despues de unos minutos de adentrarse en el bosque ves que no muy lejos a tu izquierda algo \ncomo una sombra se mueve y te asustas un poco aunque contnuas siguiendo a Jelash"<<endl;
            cout<<"Pasan 10 segundos y percibes el mismo movimiento, pero del lado derecho"<<endl;
            cout<<"Piensas si deberias decirle a Jelash de este movimiento y te decides por: "<<endl;
            cout<<"Tu vida actual es de "<< vida <<" Puntos de vida"<<endl;
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
                pausa();
            }
            else{
                cout<<"No le dices nada a Jelash y continuan su camino"<<endl;
                cout<<"-Dentro del bosque hay una pequeña aldea de enanos que casi siempre son muy amigables- dice Jelash con calma \nmientras apunta a un letrero que dice 'Keins' y apunta con una flecha"<<endl;
                cout<<"Pasan el letrero y continuan caminando"<<endl;
                cout<<"Un minuto despues un ruido detras te hace darte la vuelta abruptuamente"<<endl;
                cout<<"De un arbol salta, lo que alcanzas a ver que es un enano y ves que empieza a correr \nen tu direccion con un cuchillo en la mano"<<endl;
                cout<<"Sientes un pinchazo en el abdomen y gritas mientras caes al suelo"<<endl;
                cout<<"(PIERDES 100 DE VIDA)"<<endl;
                cout<<"Tu vida actual es de "<< vida - 100 <<" Puntos de vida"<<endl;
                muerte();
                pausa();
                return 0;
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
            do{
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
                        cout<<"-El siempre ha sido asi, si crees poder vencerlo intentalo-"<<endl;
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
                            vida = 60;
                            lugar='B';
                            pausa();
                        }
                        else{
                            cout<<"-No lo aceptare, me niego- dices con decision"<<endl;
                            cout<<"Jelash sonrie y continuan por el pasillo hasta el despacho del rey"<<endl;
                            cout<<"(NO PIERDES VIDA)"<<endl;
                            cout<<"(Tu vida actual es de "<< vida <<"Puntos de vida)"<<endl;
                            lugar='C';
                            pausa();
                        }
                    break;
                    case 'B':
                    case 'b':
                        cout<<"-Vayamos a la biblioteca, quiza ahi encontemos algo mas sobre mi pasado"<<endl;
                        cout<<"-Claro, creo recordar que es por aca- dice Jelash con un poco de confusion"<<endl;
                        cout<<"Se adentran en un pasillo largo donde a los lados hay gente vendiendo cosas que no logras \nreconocer a primera vista"<<endl;
                        cout<<"-Te acuerdas cual es tu comida favorita "<< nombre <<"?"<< endl;
                        cout<<"Todavia sorprendido por la cantidad de artilugios y comifa que veias, no respondes la pregunta"<<endl;
                        cout<<"-Quieres probar algo?- se percata Jelash que estas viendo todo con mucho asombro"<<endl;
                        cout<<"Entre todas las cosas te llaman la atencion 3:"<<endl;
                        cout<<"Lo que parece ser una fruta, de un color morado brillante y de tamaño medio con lo que \nparecen ser espinas"<<endl;
                        cout<<"Un liquido blanquecino del que sale humo, pero no parece estar caliente"<<endl;
                        cout<<"Un pan que tiene forma de piramide con un centro carmin y bordes naranjas"<<endl;
                        cout<<"(A para probar la fruta) \n(B para el liquido blanquecino) \n(C para el panecillo en forma de piramide)"<<endl;
                        cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                        do{
                            cin>>comidaMercado;
                            switch (comidaMercado){
                                case 'A':
                                case 'a':
                                    cout<<"-Probare la fruta morada esa- dices mientras le indicas a Jelash lo que quieres"<<endl;
                                    cout<<"Ella paga la fruta y te la ofrece"<<endl;
                                    cout<<"-Eso que parecen espinas no lo son, no te preocupes- dice con un poco de burla"<<endl;
                                    cout<<"Con decision le das una mordida a la fruta e inmediatamente empiezas a sentirte mareado y confundido"<<endl;
                                    cout<<"Te sientas en el suelo y empiezas a sentir calor en el pecho y el cuello"<<endl;
                                    cout<<"-Creo que me voy a desmayar- dices con voz entrecortada"<<endl;
                                    cout<<"Te desmayas en medio de la multitud"<<endl;
                                    cout<<"(PIERDES 25 PUNTOS DE VIDA)"<<endl;
                                    cout<<"(Tu vida actual es de "<< vida - 25 <<" Puntos de vida)"<<endl;
                                    vida = 75;
                                    lugar = 'D';
                                    pausa();
                                break;
                                case 'B':
                                case 'b':
                                    cout<<"-Que es ese liquido blanco?- Preguntas con curioisidad"<<endl;
                                    cout<<"Jelash sonrie -Es un licor poco conocido por los humanos-"<<endl;
                                    cout<<"-Pruebalo, seguro te gustara- mientras paga el licor"<<endl;
                                    cout<<"Lo tomas y con alguna duda le das un trago profundo a nada de acabarlo"<<endl;
                                    cout<<"-Si, creo que sabe bien- y le vuelves a dar otro trago acabandotelo"<<endl;
                                    cout<<"En menos de 30 segundo te empiezas a marear y todo te da vueltas"<<endl;
                                    cout<<"Tras caminar unos pasos, mientras Jelash te dice algo que no escuchas bien \nte caes al suelo pegandote fuerte con una baldosa que estaba quebrada en el suelo"<<endl;
                                    cout<<"(PIERDES 100 PUNTOS DE VIDA)"<<endl;
                                    cout<<"(Tu vida actual es de "<< vida - 100 <<" Puntos de vida)"<<endl;
                                    muerte();
                                    pausa();
                                    return 0;
                                break;
                                case 'C':
                                case 'c':
                                    cout<<"-Ese panecillo se ve rico- dices con curiosidad"<<endl;
                                    cout<<"-Si, es muy rico, tiene frutas elficas y sabe a chocolate-"<<endl;
                                    cout<<"Sorprendido ves el panecillo de cerca y te decides por darle un bocado"<<endl;
                                    cout<<"Al darle la mordida sientes el sabor a chocolate inmediatamente y una \nexplosion de sabores ocurre en tu boca"<<endl;
                                    cout<<"-Si que sabe riquisimo, creo que quiero otro- masticas mientras sonries"<<endl;
                                    cout<<"(GANAS 20 PUNTOS DE VIDA)"<<endl;
                                    vida = 120;
                                    cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                                    lugar = 'D';
                                    pausa();
                                break;
                                default:
                                cout<<"Esta opcion no es valida elige una de las ateriores"<<endl;
                                break;
                        }
                    }
                    while (comidaMercado!='A'&&comidaMercado!='a'&&comidaMercado!='b'&&comidaMercado!='B'&&comidaMercado!='C'&&comidaMercado!='c');
                    break;
                    case 'C':
                    case 'c':
                        cout<<"-Vayamos a visitar a tu gran abuela, los ancianos siempre son muy sabios-"<<endl;
                        cout<<"Se rie levemente mientras te toma la mano para echarse a correr"<<endl;
                        cout<<"Corren por las calles de la ciudad hasta llegar a una casa grande muy ornamentada"<<endl;
                        cout<<"-Es aqui, no hables demasiado fuerte, sus oidos son muy sensibles- Jelash advierte"<<endl;
                        cout<<"Jadeando y tratando de mantener la compostura te irgues y asientes"<<endl;
                        cout<<"-Vamos, hay que entrar- abre la puerta y un olor muy peculiar inunda tu olfato"<<endl;
                        cout<<"-Estan preparando alatel, mi bebida favorita"<<endl;
                        cout<<"Confundido preguntas, pero Jelash te ignora por saludar a quien supones es su madre"<<endl;
                        cout<<"-Traes un visitante, cual es el motivo Jel?- dice la elfa desconocida"<<endl;
                        cout<<"-No sabemos de donde viene y no se acuerda de donde viene-"<<endl;
                        cout<<"-Jelash cree que su gran abuela puede ser de ayuda- dices un poco timido"<<endl;
                        cout<<"-Ya veo, pudiste habernos avisado Jel, tu abuela esta ocupada ahora mismo- dice la madre de Jelash"<<endl;
                        cout<<"-Por lo que percibo estan preparando alatel- Jelash sonrie emocionada"<<endl;
                        cout<<"-Si, tu abuela queria sorpenderte-"<<endl;
                        cout<<"-Debes probarlo "<< nombre <<"- Jelash corre hasta la cocina y te entrega una taza \ncon un poco del liquido sugerido"<<endl;
                        cout<<"La bebida es rosa y un poco espesa"<<endl;
                        cout<<"(S para probarlo, N para no probarlo)"<<endl;
                        cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                        cin>>alatel;
                        if(alatel == 'S' ||alatel=='s'){
                            cout<<"Decides hacer caso a Jelash y le das un sorbo al liquido rosa"<<endl;
                            cout<<"Con un poco de incertidumbre empiezas a sentir un sabor extrañisimo"<<endl;
                            cout<<"Empiezas a sentir sabor en el estomago"<<endl;
                            cout<<"Ella te mira con expectacion y sonrie"<<endl;
                            cout<<"-Y?, que tal?- Jelash emocionada"<<endl;
                            cout<<"-Es extraño, pero creo que me gusta"<<endl;
                            cout<<"(GANAS 20 PUNTOS DE VIDA)"<<endl;
                            vida = 120;
                            cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                            lugar = 'E';
                            pausa(); 
                        }
                        else{
                           cout<<"-Creo que por ahora paso- dices agradecido pero dejando la taza en la mesa"<<endl;
                            cout<<"Jelash se pone un poco triste pero sigue platicando con su madre"<<endl;
                            cout<<"(NO PIERDES PUNTOS DE VIDA)"<<endl;
                            lugar = 'E';
                            pausa();
                        }
                    break;
                }
            }
            while (cityLugar!='A'&&cityLugar!='a'&&cityLugar!='B'&&cityLugar!='b'&&cityLugar!='c'&&cityLugar!='C');
            break;
        case 'C':
        case 'c':
            cout<<"-Vamos al pueblo humano, quiza ahi recuerde de donde vengo-"<<endl;
            cout<<"-Tenemos que cruzar el lago que esta al este y luego caminar 20 min y \nestaremos ahi- señala al lago mientras te ayuda a levantarte"<<endl;
            cout<<"Caminaron por 5 min hasta que empezaron a ver un enorme lago frente a ustedes"<<endl;
            cout<<"-Es hermoso, verdad?- dijo Jelash con una sonrisa volviendose para mirarte"<<endl;
            cout<<"Con asombro por la transparencia del lago y su inmensidad te quedas en silencio"<<endl;
            cout<<"Continuan caminando hasta la orilla donde se encuentran con un \nenano que tiene una barca para hasta 4 personas"<<endl;
            cout<<"-Buenas tardes señor, como podemos hacer para \ncruzar el lago?-pregunta Jelash mientras se acerca al enano"<<endl;
            cout<<"El enano les mira y asiente"<<endl;
            cout<<"-En barca lo cruzariamos en 30 minutos y si lo rodean se harian una \nhora y media- dice el enano aun sin terminar la frase entera"<<endl;
            cout<<"-Yo cobro 350 platins por ayudarles a cruzar o les rento la barca por 50-"<<endl;
            cout<<"Revisas tus bolsas y bolsillos y ves que tienes una bolsa con lo que \nparecen ser monedas"<<endl;
            cout<<"Revisas la bolsa y cuentas el valor de las monedas que tienes"<<endl;
            cout<<"Tienes 25 platins"<<endl;
            cout<<"-Solo tengo 25, tu tienes mas?- le preguntas a Jelash y ella asiente"<<endl;
            cout<<"-Tengo 40, por lo que no nos aclanza para el camino guiado- dice pensativa"<<endl;
            cout<<"-Podemos rentar el barco o podemos rodear el lago y guardar ese \ndinero para despues- dice mirando hacia el bosque que rodea el lago "<<endl;
            cout<<"-Quieres cruzar el lago?- pregunta Jelash"<<endl;
            cout<<"(S para rentar la barca, N para rodear el lago por el bosque)"<<endl;
            cin>>cruzarLago;
            cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
            if(cruzarLago=='S'||cruzarLago=='s'){
                cout<<"-Si, rentemos la barca, quisiera llegar rapido a la aldea-"<<endl;
                cout<<"Le das tus platins a Jelash y ella renta la barca para pasar el lago"<<endl;
                cout<<"-Okey, sube, alguien tiene que remar- dice Jelash mirnaod los remos"<<endl;
                cout<<"Se suben a la barca y tu tomas los remos para empezar a cruzar por el lago-"<<endl;
                cout<<"-A un ritmo constante deberiamos tardarnos 40 min, creo fue una buena eleccion-"<<endl;
                cout<<"Comienzas a remar en direccion a la otra punta del lago"<<endl;
                cout<<"Tras 10 min de remar se encuentran ya lejos de la orilla"<<endl;
                cout<<"El agua cristalina bajo la barca te permite ver diversos peces y \nanimales que los acompañan en su camino"<<endl;
                cout<<"-Ninguno es agresivo, cierto?- preguntas un poco asombrado"<<endl;
                cout<<"-No te atacaran al menos que los ataques primero-"<<endl;
                cout<<"Continuas remando hasta la orila, tardaron 50 min y te duelen los brazos a mas no poder"<<endl;
                lugar='F';
            }
            else{
                cout<<"-Creo que deberiamos guardar los platins-"<<endl;
                cout<<"-Vamos por la orilla entre el bosque-"<<endl;
                cout<<"-Claro, gracias señor enano- dice Jelash con amabilidad"<<endl;
                cout<<"-Nos tomara aproximadamente hora y media si caminamos \na un buen ritmo- Jelash empieza a caminar y tu le sigues"<<endl;
                cout<<"-Caminemos, entonces-"<<endl;
                cout<<"Caminan por 30 min, la charla con Jelash no disminuye \nmientras se sumen en el bosque"<<endl;
                cout<<"Los interrumpe un sonido de algo que cae, como un fuerte golpe en seco contra el suelo"<<endl;
                cout<<"Miras a Jelash y ella solo indica que guarden silencio mientras siguen caminando"<<endl;
                cout<<"Tras 2 min de silencio y un poco de tension, unos pasos pesados \nse escuchan a la derecha del camino"<<endl;
                cout<<"Como si se estuviera acercando cada vez se escucha mas cercanos"<<endl;
                cout<<"Vuelves a mirar con preocupacion a Jelash y te pide que te pongas detras de ella"<<endl;
                cout<<"Señala con su baston a un punto entre los arboles y un diminuto \nrayo de luz sale de la punta"<<endl;
                cout<<"De inmediato se escuha un golpe y algo sale de entre los arboles"<<endl;
                cout<<"Una especie de tigre color verde oscuro se lanza contra los 2 y los ataca"<<endl;
                cout<<"Ves que esta herido en el lomo"<<endl;
                cout<<"Comienza a correr contra Jelash"<<endl;
                cout<<"-Corre!, yo puedo encargarme- mientras con el baston se cubre \nde los zarpazos de el felino enorme"<<endl;
                cout<<"(A para correr hasta un lugar seguro) \n(B para intentar ayudar a Jelash) \n(C para quedarte mirando)"<<endl;
                cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                do{
                    cin>>felinoAtaque;
                    switch(felinoAtaque){
                    case 'a':
                    case 'A':
                        cout<<"Comienzas a correr siguiendo el camino como te dijo Jelash"<<endl;
                        cout<<"Esperas que ella este bien, pero tenias que ver primero por ti"<<endl;
                        cout<<"Despues de 10 minutos de estar corriendo te detienes en un arbol y descansas unos instantes"<<endl;
                        cout<<"Volteas la vista y no ves ni escuchas nada de donde saliste corriendo"<<endl;
                        cout<<"Decides esperar ahi un rato para ver si llega Jelash"<<endl;
                        cout<<"Te sientas bajo el arbol, alerta pero descansando"<<endl;
                        cout<<"Pasan 15 minutos y escuchas pasos acercandose"<<endl;
                        cout<<"Jelash sonriente te mira y saluda"<<endl;
                        cout<<"-Si que saliste corriendo rapido eh- se burla de ti"<<endl;
                        cout<<"-Estas bien?, como termino todo?- tu voz llena de preopucacion mientras te acerca a ella"<<endl;
                        cout<<"-Claro, estoy bien, no te preocupes, continuamos con el camino?-"<<endl;
                        cout<<"Charlan mientras empiezan a caminar y tras otros 30 minutos llegan al embarcadero"<<endl;
                        lugar='F';
                    break;
                    case 'b':
                    case 'B':
                        cout<<"Decides ayudarla de alguna manera y corres a esconderte en la maleza"<<endl;
                        cout<<"Encuentras una piedra grande y al lado un palo que parece afilado"<<endl;
                        cout<<"(A para tomar la piedra y B para tomar el palo)"<<endl;
                        cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                        do{
                            cin>>armaBosque;
                            if(armaBosque=='A'||armaBosque=='a'){
                                cout<<"Tomas la piedra con las 2 manos y la alzas sobre \ntu cabeza y corres hasta el felino que esta sobre Jelash "<<endl;
                                cout<<"Con un golpe en seco le das en la cabeza al felino y Jelash con su baston y \nun rayo de luz ataca de nuevo al felino atravesandolo y dejandolo en el suelo"<<endl;
                                cout<<"Jelash te mira y sonrie"<<endl;
                                cout<<"-Creo que me las hubiera arreglado yo sola- dice mientras se levanta"<<endl;
                                cout<<"-Ni un gracias ni nada?- te ries y miras el camino"<<endl;
                                cout<<"-Nos encontraremos con mas?- preguntas con sinceridad"<<endl;
                                cout<<"-No lo creo, esta vez no estaremos desprevenidos-"<<endl;
                                cout<<"-Vamonos, tenemos que llegar al embarcadero- dices con seguridad"<<endl;
                                cout<<"Despues de unos minutos de caminar llegan por fin al embarcadero"<<endl;
                                lugar='F';
                            }
                            else{
                                cout<<"Tomas el palo afilado y aunque parece endeble lo agarras con fuerza"<<endl;
                                cout<<"Corriendo y como si fuera una lanza sostienes el palo"<<endl;
                                cout<<"Intentas atravesar al felino con el palo"<<endl;
                                cout<<"El palo se rompe contra la piel del felino y te qeudas inmovil frente al felino"<<endl;
                                cout<<"El felino te da un zarpazo en el brazo y se lanza contra ti mordiendote en el cuello"<<endl;
                                cout<<"(PIERDES 100 PUNTOS DE VIDA)"<<endl;
                                cout<<"(Tu vida actual es de "<< vida - 100 <<" Puntos de vida)"<<endl;
                                muerte();
                                pausa();
                                return 0;
                            }
                        }
                        while(armaBosque=='A'&&armaBosque=='a'&&armaBosque=='b'&&armaBosque=='B');
                    break;
                    case 'C':
                    case 'c':
                        cout<<"Te qeudas quieto frente a tal escena, no sabes que hacer"<<endl;
                        cout<<"El felino ve tu inseuridad y te ve con amenaza"<<endl;
                        cout<<"En un instante, el felino corre tras de ti"<<endl;
                        cout<<"Empiezas a correr de el tan rapido como puedes"<<endl;
                        cout<<"Te escondes tras un arbol y el felino va detras de ti soltando \nzarpasos, uno te da en el brazo, pero sigues en pie"<<endl;
                        cout<<"Sigues tratando de escapar del felino, Jelash se levanta y apunta con su baston"<<endl;
                        cout<<"Un rayo mas grande de color azul sale de la punta del baston de Jelash"<<endl;
                        cout<<"No comprendes que es su magia, pero el felino ha dejado de rugir"<<endl;
                        cout<<"Ella te ve y sonrie"<<endl;
                        cout<<"-Estas bien?, creo que ya no se va a levantar- apunta a tu herida en el brazo"<<endl;
                        cout<<"-Estoy bien, creo que es una herida grande-"<<endl;
                        cout<<"-Ya lo veo, apresuremos a llegar para que te sanen esa herida-"<<endl;
                        cout<<"Te venda la herida con trozos de tela que saca de su gabardina"<<endl;
                        cout<<"Charlan en el camino de ida al embarcadero"<<endl;
                        cout<<"Tras 40 minutos llegan al embarcadero como lo tenian planeado"<<endl;
                        cout<<"(PIERDES 45 PUNTOS DE VIDA)"<<endl;
                        vida = 55;
                        cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
                        lugar='F';
                    break;
                    default:
                        cout<<"(Esta opcion no es valida, elige una correcta)"<<endl;
                    }
                }
                while(felinoAtaque=='a'&&felinoAtaque=='A'&&felinoAtaque=='B'&&felinoAtaque=='b'&&felinoAtaque=='c'&&felinoAtaque=='C');
            }
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
    }
    while (eleccion1!='a'&&eleccion1 !='A'&& eleccion1 != 'B'&& eleccion1 != 'b'&& eleccion1 != 'c'&& eleccion1 != 'C'&& eleccion1 != 'D'&& eleccion1 != 'd');
    switch(lugar){
        case 'A':
            cout<<"-Solo fue el susto, verdad?- dices con temor"<<endl;
            cout<<"-Parece que este enano no recibe bien a las visitas- sonrie Jelash"<<endl;
            cout<<"Moviendolo con su baston Jelash mueve al enano suspendido en el aire \nhasta un lugar mas alejado y lo deja caer"<<endl;
            cout<<"-Deberiamos seguir el camino- empiezas a caminar en la misma direccion que antes"<<endl;
            cout<<"Pasan las horas caminando atraves del bosque, la charla es constante y amena"<<endl;
            cout<<"Jelash saca su baston con el que alumbra el camino, ya que emepezo a anochecer"<<endl;
            cout<<"-Creo que no vamos a llegar a ningun lado, siento como si no estuviesemos avanzando-"<<endl;
            cout<<"Jelash nota tu confusion y te intenta calmar"<<endl;
            cout<<"-A unos minutos hay una taberna aca enfrente que tambien admite huespedes-"<<endl;
            cout<<"-Vayamos a ver que podemos encontrar ahi- dices con voz cansada"<<endl;
            cout<<"Caminan por 10 minutos mas y las lunas alumbran la noche"<<endl;
            cout<<"-Eso es fuego?- preguntas con incertidumbre"<<endl;
            cout<<"-Si, ya llegamos a la taberna de viajeros- Jelash sonrie como siempre"<<endl;
            cout<<"Se acercan hasta la entrada y Jelash abre la puerta sin dudar"<<endl;
            cout<<"Un holor a comida te llega e inspiras profundo"<<endl;
            cout<<"Inmediatamente ves mesas de gente disfrutando la comida y bebida de la taberna"<<endl;
            cout<<"Caminan hasta la barra donde esta el porpietario de la taberna sirviendo los tragos y comida"<<endl;
            cout<<"-Buenas noches, buscamos hospedaje para nosotros 2-"<<endl;
            cout<<"El tabernero tenia la piel morena y manchas casi blancas por la cara y brazos"<<endl;
            cout<<"-Claro, un humano y una elfa- serian 25 platins"<<endl;
            cout<<"Jelash paga y pide de comer lo mas barato que hay"<<endl;
            cout<<"Te sientas en la unica mesa vacia y contemplas todo a tu alrededor"<<endl;
            cout<<"Jelash llega con la comida y se sienta junto a ti"<<endl;
            cout<<"Te acabas la comida y justo antes de levantarte de tu asiento \nuna voz muy grave interrumpe tu accion"<<endl;
            cout<<"-Hey humano- se acerca una criatura con piel grisasea y ojos blancos hueso"<<endl;
            cout<<"-Dicen que los humanos son muy buenos en el azar- te quedas sorprendido ante sus palabras"<<endl;
            cout<<"-Eso dicen?- preguntas"<<endl;
            cout<<"-Quieres comprobarlo?-"<<endl;
            cout<<"Se sienta en tu mesa frente a ti y saca un peculiar objeto"<<endl;
            cout<<"-Esto es un dado de 25 caras, el juego es el siguiente:"<<endl;
            cout<<"Antes de tirar el dado eliges un rango de numeros \nentre el que crees que va a salir el numero del dado, si el dado cae en ese rango, tu apuesta se duplica, triplica o mas, \ndependiendo del tamaño del rango que eligas"<<endl;
            cout<<"Claramente, si no cae en el rango, pierdes los platins apostados"<<endl;
            cout<<"-Quieres juagar, humano?-"<<endl;
            cout<<"Tu vida actual es de "<< vida <<" Puntos de vida"<<endl;
            cout<<"(S para jugar el juego, N para negarte a jugarlo)"<<endl;
            cin>>apuestaTaberna;
            if (apuestaTaberna=='S'||apuestaTaberna=='s'){
                cout<<"Si, no tengo muchos platins pero jugare"<<endl;
                cout<<"Eso me gusta, humano, juguemos, la apuesta sera de 10 platins"<<endl;
                cout<<"Tras el primer intento, pierdes los primeros 10 platins"<<endl;
                cout<<"Apuestas por algo diferente y ganas 20 "<<endl;
                cout<<"10 minutos de juego despues, tenias poco mas de 150 platins"<<endl;
                cout<<"El extraño comienza a enfadarse"<<endl;    
                cout<<"-Ya veo que si tienen buena suerte los de tu especie, humano- su voz era mas pesada"<<endl;
                cout<<"Luego de otros 10 minutos, el extraño habia perdido casi todo sus platins"<<endl;
                cout<<"-Basta, esto no puede seguir asi, aqui solo habra una manera de solucionarlo-"<<endl;
                cout<<"Se levanta y arremanga su camisa ocre que cubria su piel"<<endl;
                cout<<"-Esto solo se puede decidir en una pelea-"<<endl;
                cout<<"Completamente furioso te mira y se lanza a los golpes contra ti"<<endl;
                cout<<"Intentas defenderte y huir, pero el es mas grande y pesado, un golpe suyo seria peligroso"<<endl;
                cout<<"Levanta una mesa completa y la arroja contra ti, te alcanzas a esconder entre las escaleras"<<endl;
                cout<<"Jelash parece que no puede intervenir en la pelea por algun motivo"<<endl;
                cout<<"El extraño gris corre hacia ti y te alcanza a agarrar de un pie"<<endl;
                cout<<"Intentas golpearle, pero parece no hacerle daño"<<endl;
                cout<<"-No tienes tanta suerte con esto- verdad?"<<endl;
                cout<<"Sin piedad, el extraño gris te azota contra el suelo e inmediatamente pierdes el conocimiento"<<endl;
                cout<<"(PIERDES 100 PUNTOS DE VIDA)"<<endl;
                cout<<"(Tu vida actual es de "<< vida - 100 <<" Puntos de vida)"<<endl;
                muerte();
                pausa();
                return 0;
            }
            else{
                cout<<"-No tengo muchas ganas ahora mismo, quiza en otra ocasion- dices amablemente"<<endl;
                cout<<"-Tu te lo pierdes humano, las leyendas dicen que los humanos son muy suertudos-"<<endl;
                cout<<"Dejas el plato en la barra y preguntas por tu habitacion al \ntabernero y te indica que es subiendo las escaleras"<<endl;
                cout<<"Subes a la habitacion y te das ceunta que tiene 2 camas, Jelash dormira en el mismo cuarto que tu"<<endl;
                cout<<"Intentas hacer memoria y nada llega a tu cabeza, parece que realmente has olvidado todo"<<endl;
                cout<<"Descansas y unos minutos despues, Jelash abre la puerta y sonrie"<<endl;
                cout<<"-Creo que esquivaste una bala con ese charax, son famosos por enojarse mucho si pierden en sus juegos-"<<endl;
                cout<<"-Ya veo, creo que me siento mal por no saber nada de mi pasado-"<<endl;
                cout<<"Jelash sonrie y te mira con expectacion"<<endl;
                cout<<"-Me siento perdido, ire a caminar afuera, vienes?-"<<endl;
                cout<<"Jelash asiente y te sigue"<<endl;
                cout<<"Salen de la taberna y el cielo estrellado es hermoso"<<endl;
                cout<<"No recuerdas nada igual"<<endl;
                cout<<"-Como podria olvidar algo tan bello- Jelash no responde"<<endl;
                cout<<"-Muchas gracias Jelash, sin ti verdaderamente estaria solo y sin rumbo"<<endl;
                cout<<"Jelash sonrie mas que nunca"<<endl;
                cout<<"-Todo esto ha sido una prueba de su madre la reina- dice con mucha calma"<<endl;
                cout<<"-Ella queria ver si usted tenia lo necesario para heredar el trono-"<<endl;
                cout<<"Todo es muy rapido y solo puedes asombrarte"<<endl;
                cout<<"-Yo solo podria ayudarlo si me pedia la ayuda explicitamente incluso \nsi la muerte era inminente para usted-"<<endl;
                cout<<"-La unica manera de saber si era usted apto, era que dijera Gracias-"<<endl;
                cout<<"-Maniana recordara todo, el hechizo solo dura un dia"<<endl;
                cout<<"Sin palabras empieza a haber muchos huecos en tu mente y poco a poco te vas acordando de las cosas"<<endl;
                final();
            }
        break;
        case 'B':
            cout<<"Abres los ojos y te encuentras en un hospital"<<endl;
            cout<<"Sin saber donde estas, miras a tu alredor y en la cama esta Jelash"<<endl;
            cout<<"-Se ha hecho de noche "<<nombre<<" y no llegamos a visitar al rey"<<endl;
            cout<<"Cuanto tiempo estuve inconciente?-"<<endl;
            cout<<"-Menos de 5 horas, no fue nada muy fuera de lo normal, los elfos \ntenemos una fuerza superior a la de los humanos y Lamal se especializa en la magia fisica"<<endl;
            cout<<"Te asombras aun mas y te das ceunta que fue una tonteria aceptar el duelo de Lamal"<<endl;
            cout<<"-Lo conocias?- miras a Jelash"<<endl;
            cout<<"-Escencialmente, ha sido mi pareja el ultimo medio siglo-"<<endl;
            cout<<"-Y porque no me dijiste?- desconcertado, Jelash te da una familiaridad desconocida"<<endl;
            cout<<"-No preguntaste- Jelash sonrie como lo hacia habitualmenete"<<endl;
            cout<<"Chistas y tras unos segundos de silencio vueleves a ella"<<endl;
            cout<<"-Porque sigues aqui?-"<<endl;
            cout<<"-Es mi deber-"<<endl;
            cout<<"-Como es eso que es tu deber?-"<<endl;
            cout<<"Jelash se queda callada y se niega a responder esa respuesta"<<endl;
            cout<<"-Puedo salir de aqui?- empezabas a fastidiarte"<<endl;
            cout<<"-Claro, naturalemnte, solo fue un golpe- riendo y burlandose de ti"<<endl;
            cout<<"-Salgamos de aqui, ya no quiero ver al rey de nada-"<<endl;
            cout<<"-De acuerdo, a donde iremos?- Jelash parecia muy calmada"<<endl;
            cout<<"-Que opciones tenemos?- preguntas sin mas"<<endl;
            cout<<"Si quieres descansar, podemos ir a un hostal otra opcion \npuede ser ir con el gremio de aventureros o si lo prefieres podemos ir a un lugar de comida aca en Renria"<<endl;
            cout<<"(Tu vida actual es de "<< vida <<" Puntos de vida)"<<endl;
            cout<<"(A para ir al Hostal) \n(B para ir a el gremio de aventureros) \n(C para ir a comer algo)"<<endl;
            do{
                cin>>destHospital;
                switch (destHospital){
                    case 'A':
                    case 'a':
                        cout<<"-Vayamos al hostal, quisiera descansar- dices rapidamente"<<endl;
                        cout<<"Salen del extraño hospital y caminas detras de Jelash quien te lleva a la entrada del hostal"<<endl;
                        cout<<"-Creo que apartir de aqui yo puedo arreglarmelas, Jelash- ella sonrie curiosamente"<<endl;
                        cout<<"-Claro que si, espero mañana te encunetres mejor-"<<endl;
                        cout<<"Entras a el hostal y pides una habitacion, pagando con los pocos \nplatins que tenias en la bolsa"<<endl;
                        cout<<"Subes a el cuarto que se te asigno y te acuestas pensando en tu corto dia y muy extraño"<<endl;
                        cout<<"Sigues sin recordar nada mas alla de lo que paso hoy y te sientes un poco mal por Jelash"<<endl;
                        cout<<"Al final logras dormirte"<<endl;
                        cout<<"Al dia siguiente despiertas con un dolor de cabeza horrible"<<endl;
                        cout<<"Y poco a poco llegan a ti los recuerdos de quien eres"<<endl;
                        cout<<"Eres heredero al trono humano de el Reino de Mikal, con muchas dudas emprendes el \ncamino de vuelta a Mikal buscando las respuestas a dichas dudas"<<endl;
                        final();
                    break;
                    case 'b':
                    case 'B':
                        cout<<"-Vamos al gremio, es la unica opcion que no es perder el tiempo-"<<endl;
                        cout<<"Jelash sonrie nuevamente"<<endl;
                        cout<<"Te preguntas si su sonrisa siempre ha sido asi de hermosa"<<endl;
                        cout<<"Caminan juntos en sielncio hasta el gremio"<<endl;
                        cout<<"-Quisieras unirte al gremio?- Jelash pregunta sinceramente"<<endl;
                        cout<<"-Quiza, es dificil?-"<<endl;
                        cout<<"-Tienes que pagar una cuota y demostrar que eres capaz-"<<endl;
                        cout<<"-Que tipo de capacidad?-"<<endl;
                        cout<<"-Depende de el tipo de aventurero que quieras ser, yo no esoy muy informada-"<<endl;
                        cout<<"Llegan a la puerta del asentamiento y entras con decision"<<endl;
                        cout<<"Caminas hasta el chico elfo que da los infomres y le haces todas tus preguntas"<<endl;
                        cout<<"El te dirige hasta el jefe de gremio, Jelash te advierte que es un humano muy conocido"<<endl;
                        cout<<"Entras a la oficina de el jefe de gremio"<<endl;
                        cout<<"El jefe del gremio es un hombre de tu misma edad que tu y con aspecto fisico similar al tuyo"<<endl;
                        cout<<"El te voltea a ver y se asombra muchisimo"<<endl;
                        cout<<nombre<<" porque estas aqui?- lo miras con confusion y volteas a ver a Jelash"<<endl;
                        cout<<"-Fue decision de su madre, alteza- Jelash empieza a hablar de una manera diferente"<<endl;
                        cout<<"-Ella me pidio que pusiera a prueba de esta manera a "<<nombre<<" para ver si deberia llegar al trono"<<endl;
                        cout<<"Tu y el desconocido estan muy confundidos"<<endl;
                        cout<<"-Le borre los recuerdos por un dia entero-"<<endl;
                        cout<<"Tu memoria empieza a conectar los sitios vacios y empiezas a recordar todo"<<endl;
                        cout<<"-No creo que esto lo haya hecho mama, tambien te pidio ponerme a prueba a mi?- dice el desconocido"<<endl;
                        cout<<"-No, su madre confia mas en "<<nombre<<" para el trono, espero no haber causado algo grave"<<endl;
                        cout<<"-Lo siento joven Manel, fueron ordenes de su madre-"<<endl;
                        cout<<"Jelash acaba la frase y tu recuerdas todo tu pasado"<<endl;
                        final();
                    break;
                    case 'c':
                    case 'C':
                        cout<<"-Tengo hambre, Jelash, podemos ir a comer algo?-"<<endl;
                        cout<<"-Claro que si, no muy lejos esta mi lugar favorito para comer- Jelash no puede ocultar su entusiasmo"<<endl;
                        cout<<"Caminas con altas expectativas por la comida"<<endl;
                        cout<<"-Disculpame Jelash por si te hice sentir mal con mis palabras hace unos minutos- tus \npalabras estan llenas de sinceridad"<<endl;
                        cout<<"-No te preocupes "<<nombre<<" no eres la primera ni la ultima persona que me trata asi"<<endl;
                        cout<<"Caminan en silencio hasta el sitio"<<endl;
                        cout<<"Es un sitio muy bonito y por alguna razon sientes que te trae recuerdos que no visualizas"<<endl;
                        cout<<"-Porque te gusta este lugar, Jelash?-"<<endl;
                        cout<<"-Alguien muy importante me lo enseño hace unos años-"<<endl;
                        cout<<"-Creo no deberia preguntar quien, verdad?-"<<endl;
                        cout<<"Ella se rie y segundos despues un elfo les trae el menu y piden diferentes cosas"<<endl;
                        cout<<"-Jelash, queria agradecerte por estar conmigo y por ayudarme desde el principio-"<<endl;
                        cout<<"Jelash sonrie y no dice nada"<<endl;
                        cout<<"-A pesar de que no respondiste mi pregunta de porque sigues conmigo, te lo debo agradecer-"<<endl;
                        cout<<"Traen la comida y antes de comer Jelash te interrumpe"<<endl;
                        cout<<"-Este lugar me lo enseño usted, alteza- Jelash cambia su tono y peso en las palabras"<<endl;
                        cout<<"Jelash sonrie mas que nunca, su sonrisa cada vez se vuelve mas hermosa"<<endl;
                        cout<<"-Todo esto ha sido una prueba de su madre la reina- dice con mucha calma"<<endl;
                        cout<<"-Ella queria ver si usted tenia lo necesario para heredar el trono-"<<endl;
                        cout<<"Todo es muy rapido y solo puedes asombrarte"<<endl;
                        cout<<"-Yo solo podria ayudarlo si me pedia la ayuda explicitamente incluso \nsi la muerte era inminente para usted-"<<endl;
                        cout<<"-La unica manera de saber si era usted apto, era que dijera Gracias-"<<endl;
                        cout<<"-Maniana recordara todo, el hechizo solo dura un dia"<<endl;
                        cout<<"Sin palabras empieza a haber muchos huecos en tu mente y poco a poco te vas acordando de las cosas"<<endl;
                        final();
                    break;
                    default:
                        cout<<"(ESTA OPCION NO ES VALIDA, ELIGA UNA VALIDA PARA CONTINUAR)"<<endl;
                    break;
                }
            }
            while(destHospital=='A'&&destHospital=='a'&&destHospital=='B'&&destHospital=='b'&&destHospital=='C'&&destHospital=='C');
        break;
        case 'C':
            cout<<"Caminan hasta el despacho del rey y entran pidiendo permiso"<<endl;
            cout<<"Un elfo de edad avanzada, pequeño de estatura y muy parecido a Jelash(piensas, es \npor la raza) aparece frente a ustedes"<<endl;
            cout<<"-Hija, que haces por aca?- Se acerca a Jelash para abrazarla"<<endl;
            cout<<"Jelash contesta en voz baja, pero alcanzas a escucharla"<<endl;
            cout<<"-Estoy en una mision padre, reconoces a este humano?-"<<endl;
            cout<<"-Claro, los hermanos son sucesores al trono de Mikal- dice medio preocupado"<<endl;
            cout<<"La coversacion llega a tus oidos y empiezas a atar cabos de un lado y del otro"<<endl;
            cout<<"Sigues sin recordar bien que fue lo que paso"<<endl;
            cout<<"Interrumpes la charla y preguntas"<<endl;
            cout<<"-Escuche todo, deberan explicarse-"<<endl;
            cout<<"-Usted es uno de los posibles herederos a el trono de el reino humano- comenzo Jelash \ncon un tono diferente en su voz, quiza mas calmado"<<endl;
            cout<<"En gran confusion los recuerdos siguen borrosos en tu memoria"<<endl;
            cout<<"-Su madre, la reina, me ordeno que le pusiera a prueba para ver si era capaz de tomar el trono-"<<endl;
            cout<<"-Hasta ahora, usted no ha pasado la prueba, por lo que se dira, no es apto para el trono-"<<endl;
            cout<<"Es mucha informacion que procesar para tu cerebro confundido, los recuerdos no \nllega y la informacion es insuficiente"<<endl;
            cout<<"-Entiendo que no sea la mejor manera de enterarse, pero usted tomo estas decisiones y este camino-"<<endl;
            cout<<"-En aproximadamente 18 horas recordara todo, ya que el hechizo se acabara"<<endl;
            cout<<"Sigues sin entenderlo bien pero terminas por asentir"<<endl;
            final();
        break;
        case 'D':
            cout<<"Despues de salir del mercado van directo a la libreria y piden un \nespacio para sentarse y buscar algun libro"<<endl;
            cout<<"-Creo que buscare en la seccion de historia, no se que podria \nencontrar, pero quiza es de ayuda- dices con cierta curiosidad"<<endl;
            cout<<"-De acuerdo, yo puedo buscar en el libro de razas- Jelash se veia muy aburrida"<<endl;
            cout<<"-No te gustan los libros?- le preguntas sin mas"<<endl;
            cout<<"-Si, pero la historia no me gusta mucho, veras, los elfos podemos \nllegar a vivir miles de años, entonces, la historia la conozco bastante bien"<<endl;
            cout<<"Te sorpendes y empiezas a notar algo familiar en su cara"<<endl;
            cout<<"Continuas por el pasillo hasta la seccion de historia y buscas el libro que necesitas"<<endl;
            cout<<"Encuentras un libro de titulo 'Historia humana en los ultimos 500 años' y otro \nde titulo 'Los reyes en la familia Mika' los dos titulos pero sobre todo el utlimo te resuenan mucho en la cabeza"<<endl;
            cout<<"(A para leer Hisotria de la humanidad) \n(B para leer el de la Familia Mikal)"<<endl;
            cin>>lectura;
            if(lectura=='A'||lectura=='a'){
                cout<<"Agarras el primero y te regresas hasta donde estaba Jelash con 3 libros muy grandes de razas"<<endl;
                cout<<"-Empezamos?- sonries a Jelash que ya esta adentrada en un libro grandisimo"<<endl;
                cout<<"-Si encuentras algo me avisas?- ella solo asiente y se deuvuelve a su libro"<<endl;
                cout<<"Despues de un rato leyendo la historia de la humanidad, empiezas a recordar que tienes un hermano gemelo"<<endl;
                cout<<"La memoria no se esclarece lo suficiente, pero sigues leyendo"<<endl;
                cout<<"Lees la frase de un tal Marshal que dice 'La humanidad solo vive en si misma' \ncrees que es medio tonto, pero sientes como si ya la hubieras escuchado"<<endl;
                cout<<"Despues de multiples familiaridades con lo que lees pasas al siguiente libro"<<endl;
                cout<<"Parece que Jelash termino los 2 primeros"<<endl;
                cout<<"-Encontraste algo, Jelash?- preguntas un poco cansado"<<endl;
                cout<<"-Nada que no supiera "<<nombre<<" , lo siento, creo que no fue muy util-"<<endl;
                cout<<"Triste y sin animos te levantas"<<endl;
                cout<<"-De todas maneras, Jelash, muchas gracias por la \nayuda, creo que lo que has hecho por mi no te lo pdoria pagar en mi vida-"<<endl;
                cout<<"Jelash evoca una de sus tipicas sonrisas amables"<<endl;
                cout<<"Su sonrisa se mantiene hasta que la interrumpen sus palabras"<<endl;
                cout<<"-Todo esto ha sido una prueba de su madre la reina- dice con mucha calma"<<endl;
                cout<<"-Ella queria ver si usted tenia lo necesario para heredar el trono-"<<endl;
                cout<<"Todo es muy rapido y solo puedes asombrarte"<<endl;
                cout<<"-Yo solo podria ayudarlo si me pedia la ayuda explicitamente incluso \nsi la muerte era inminente para usted-"<<endl;
                cout<<"-La unica manera de saber si era usted apto, era que dijera Gracias-"<<endl;
                cout<<"-Tengo un hermano, verdad?-"<<endl;
                cout<<"-Asi es, el Joven Manel es lider del gremio de aventureros- la biblioteca permanece muda"<<endl;
                cout<<"-Maniana recordara todo, el hechizo solo dura un dia"<<endl;
                cout<<"Sin palabras empieza a haber muchos huecos en tu mente y poco a poco te vas acordando de las cosas"<<endl;
                final();
            }
            else{
                cout<<"Tomas el segundo, algo te dice que quiza puedas encontrar algo ahi"<<endl;
                cout<<"-Algo me llamo la atencion de este libro pero igual es inservible-"<<endl;
                cout<<"En cuanto empiezas a leer el libro todo es muy familiar, las frases, los reyes, todo parece ser conocido"<<endl;
                cout<<"Todo parece como si ya lo hubieras leido, pero continuas"<<endl;
                cout<<"Llegas a la parte de actualidad, donde ves que la actual reina es un nombre familiar, su nombre te resuena una y otra vez"<<endl;
                cout<<"Piensas que quiza estas delirando y pasas la pagina"<<endl;
                cout<<"Cuando menos lo esperas"<<endl;
                cout<<"'La reina Malika tuvo gemelos a quienes les puso Manel y "<<nombre<<" entre ellos estara el proximo rey de Mikal'"<<endl;
                cout<<"Piensas de inmediato en una casualidad y que no es cierto"<<endl;
                cout<<"-Jelash, aqui... dice mi nombre, creo que es una casualidad, cierto?-"<<endl;
                cout<<"Jelash no responde directamente a tu pregunta"<<endl;
                cout<<"-Parece un libro de la Familia Mikal, te es conocido alguno?-"<<endl;
                cout<<"-Realmente todo me parece Familiar- dices apresuradamente"<<endl;
                cout<<"-No sabria decirte porque "<<nombre<<" , para mi tambien es extraño-"<<endl;
                cout<<"Tu mente empieza a hilar situaciones, frases, nombres"<<endl;
                cout<<"De pronto decides que vas a ir a Mikal con ese libro para \nver si alguien te conoce o te puede ayudar en la busqueda"<<endl;
            }
        break;
        case 'E':

        break;
        case 'F':

        break;
    }
    return 0;
}