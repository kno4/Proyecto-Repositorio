#include <iostream>
#include <string>
using namespace std;

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
    char eleccion1, sombraMovA, opcionMenu, lugar, cityLugar, dueloLamal, comidaMercado, alatel, cruzarLago, felinoAtaque, armaBosque;
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
    do{
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
                pausa();
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
                pausa();
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
                            vida = 60;
                            lugar='C';
                            pausa();
                        }
                        else{
                            cout<<"-No lo aceptare, me niego- dices con decision"<<endl;
                            cout<<"Jelash sonrie y continuan por el pasillo hasta el despacho del rey"<<endl;
                            cout<<"(NO PIERDES VIDA)"<<endl;
                            cout<<"(Tu vida actual es de "<< vida <<"Puntos de vida)"<<endl;
                            lugar='D';
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
                                    lugar = 'E';
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
                                    lugar = 'E';
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
                            lugar = 'F';
                            pausa(); 
                        }
                        else{
                           cout<<"-Creo que por ahora paso- dices agradecido pero dejando la taza en la mesa"<<endl;
                            cout<<"Jelash se pone un poco triste pero sigue platicando con su madre"<<endl;
                            cout<<"(NO PIERDES PUNTOS DE VIDA)"<<endl;
                            lugar = 'F';
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
                lugar='G';
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
                        lugar='G';
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
                                lugar='G';
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
                        lugar='G';
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

        break;
        case 'B':

        break;
        case 'C':
        
        break;
        case 'D':
        
        break;
        case 'E':

        break;
        case 'F':

        break;
        case 'G':

        break;
    }
    return 0;
}