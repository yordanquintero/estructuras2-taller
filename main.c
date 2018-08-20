#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>


struct alumnos{
char nombre[20];
float nota[3];
float promedio;
}estudiantes[50];


struct corredor{
char nombre[30];
int edad;
char sexo[10];
char club[20];
}corredor1;

char infantil[]="infantil";
char joven[]="joven";
char mayor[]="mayor";
char categoria[10];

void primera();
void segunda();
void tercera();
void tercera2();
void tercera3();
void menu();
void menu3();
void menucuarta();
void cuarta();
void cuarta2();
void cuarta3();
void quinta();
void quinta2();
void quinta3();
void menuquinta();
void array1();
void menutaller();
void menut2();
void menutaller2();
void sesta();
void sesta2();
void pedirmatriz();
void llenar( );
void pedirmatriz();
void sesta3();
void menu2a();
void septima();
void menues3();
int v[100],v2[100];
int m[100][100];
int m2[3][3],f=0,c=0,L=3;
bool esprimo();
void llenar(int m[][100]);
void suma(int m[][100],int v[],int v2[]);
void septima2();
void septima3();
void insertarnumMatriz();
void octava();
void octava2();
void octava3();
void octava4();
void ingresarcorredor();
void organizarcategoria();
void mostrar();
int verificar(char  n);
int filas,columnas;
int m[100][100];

int main(){
srand(time(0));
menutaller();

return 0;
}

int verificar(char n){
    printf("ingrese otro caracter: ");
    scanf("%s",&n);
    switch(n){
case 'q':
case 'w':
case 'e':
case 'r':
case 't':
case 'y':
case 'u':
case 'i':
case 'o':
case 'p':
case 'a':
case 's':
case 'd':
case 'f':
case 'g':
case 'h':
case 'j':
case 'k':
case 'l':
case 'ñ':
case 'z':
case 'x':
case 'c':
case 'v':
case 'b':
case 'n':
case 'm':verificar(n);
default:printf("salir");
exit(0);
}
return 0;
}
void primera(){
    system("cls");
    char n;
    printf("ingrese un caracter \n");
     scanf("%s",&n);
     if(n=='1'){
            printf("salir");
              exit(0);
     }if(n=='2'){
            printf("salir");
              exit(0);
     }if(n=='3'){
            printf("salir");
              exit(0);
     }if(n=='4'){
            printf("salir");
              exit(0);
     }if(n=='5'){
            printf("salir");
              exit(0);
     }if(n=='6'){
            printf("salir");
              exit(0);
     }if(n=='7'){
            printf("salir");
              exit(0);
     }if(n=='8'){
            printf("salir");
              exit(0);
     }if(n=='9'){
            printf("salir");
              exit(0);
     }if(n=='0'){
            printf("salir");
            exit(0);
     }else{verificar(n);}

}
void segunda (){
    system("cls");
    int contador=0;
    char palabra[20],palabra2[20];
    printf("ingrese una palabra: ");
    fflush(stdin);
   fgets(palabra,20,stdin);
    for(int i=0;i<30;i++){
    if(palabra[i]=='\n'){
        break;
    }
    contador++;

    }
     for(int i=contador;i>=0;i--){
        palabra2[contador-i] = palabra[i];
    }
    printf("%s\n", palabra2);

    system("pause");
    system("cls");

    }
void tercera() {
    system("cls");
    int cont=1,n=100,suma=0;
    printf("la suma de los numeros del 1 al 100 es: ");
    while(cont<=n){
        suma=suma+cont;
        cont++;
    }
    printf("%d\n",suma);
    system("pause");
    system("cls");
}
void tercera2(){
system("cls");
int     cont=1,n=50,suma=0;
printf("la suma de los numeros pares del 1 al 50 es: ");
while(cont<=n){
    if(cont%2==0){
        suma=suma+cont;
    }
cont++;
}

printf("%d\n",suma);
system("pause");

}
void tercera3(){
    system("cls");

int     cont=1,n=50,suma=0;
printf("la suma de los numeros impares del 1 al 50 es: ");
while(cont<=n){
    if(cont%2==1){
        suma=suma+cont;
    }
cont++;
}

printf("%d\n",suma);

system("pause");

}
void menutaller(){
    int opciont;
do{
      system("cls");
    printf("MENU PRINCIPAL\n");
    printf("1. taller N#1\n");
    printf("2. taller N#2\n");
    printf("3. salir\n");
    printf("ingresa una opcion: ");
    scanf("%d",&opciont);

    switch(opciont){
    case 1:menu();
            break;
    case 2:menut2();
            break;
    case 3:exit(0);
            break;
    default:printf("opcion invalida\n");
            system("pause");

    }
}while(opciont!=0);


}
void menu (){

    int opcion;
do{
      system("cls");
    printf("MENU TALLER#1\n");
    printf("1.\n");
    printf("2. \n");
    printf("3. \n");
    printf("4. \n");
    printf("5. \n");
    printf("6. menu principal\n");
    printf("ingresa una opcion: ");
    scanf("%d",&opcion);

    switch(opcion){
    case 1:primera();
            break;
    case 2:segunda();
            break;
    case 3:menu3();
            break;
    case 4:menucuarta();
            break;
    case 5:menuquinta();
            break;
    case 6:menutaller();
    default:printf("opcion invalida\n");
            system("pause");

    }
}while(opcion!=0);
}
void menut2(){
    int opciont2;
do{
      system("cls");
    printf("MENU TALLER#2\n");
    printf("1.\n");
    printf("2. \n");
    printf("3. \n");
    printf("4. menu principal\n");
    printf("ingresa una opcion: ");
    scanf("%d",&opciont2);

    switch(opciont2){
    case 1:menutaller2();
            break;
    case 2:menu2a();
            break;
    case 3:menues3();
            break;
    case 4:menutaller();
            break;

    default:printf("opcion invalida\n");


    }
}while(opciont2!=0);
system("pause");


}
void menutaller2(){
    char opciontaller2;
do{
    system("cls");
    printf("1.   MENU \n");
    printf("a. un array de decimales\n");
    printf("b. matriz de ceros y unos\n");
    printf("c. arreglo de 4x4 elevado al cubo\n");
    printf("d. menu taller#2\n");
    printf("ingresa una opcion: ");
    scanf("%s",&opciontaller2);

    switch(opciontaller2){
    case 'a':sesta();
            break;
    case 'b':sesta2();
            break;
    case 'c':sesta3();
            break;
    case 'd':menut2();
    default:printf("opcion invalida\n");
    system("pause");

    }
}while(opciontaller2!=0);
}
void menu2a(){
    char opcion2a;
do{
    system("cls");
    printf("2.    MENU \n");
    printf("a. suma de posiciones de matriz 3x3\n");
    printf("b. matriz de 3x3 y llenarla por el sistema\n");
    printf("c. matriz con numeros primos aleatorios\n");
    printf("d. menu taller#2\n");
    printf("ingresa una opcion: ");
    scanf("%s",&opcion2a);

    switch(opcion2a){
    case 'a':septima();
            break;
    case 'b':septima2();
            break;
    case 'c':septima3();
            break;
    case 'd':menut2();
    default:printf("opcion invalida\n");
    system("pause");

    }
}while(opcion2a!=0);

}

void menu3 (){

    char opcion2;
do{
    system("cls");
    printf("3.         MENU\n");
    printf("a. sumar los numeros del 1 al 100\n");
    printf("b. sumar los numeros pares del 1 al 50\n");
    printf("c. sumar los numeros impares del 1 al 50\n");
    printf("d. menu taller#1\n");
    printf("ingresa una opcion: ");
    scanf("%s",&opcion2);

    switch(opcion2){
    case 'a':tercera();
            break;
    case 'b':tercera2();
            break;
    case 'c':tercera3();
            break;
    case 'd':menu();
    default:printf("opcion invalida\n");
    system("pause");

    }
}while(opcion2!=0);

}
void cuarta(){
system("cls");
printf("las tablas de multiplicar\n");
int cont=1,cont2=2,cont3=3,cont4=4,cont5=5,cont6=6,cont7=7,cont8=8,cont9=9,cont10=10,cont11=11,cont12=12,i,resultado;

for(i=0;i<=12;i++){
    resultado=cont*i;
    printf("%d x %d = %d\n",cont,i,resultado);

}
printf("\n");

for(i=0;i<=12;i++){
    resultado=cont2*i;
    printf("%d x %d = %d\n",cont2,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont3*i;
    printf("%d x %d = %d\n",cont3,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont4*i;
    printf("%d x %d = %d\n",cont4,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont5*i;
    printf("%d x %d = %d\n",cont5,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont6*i;
    printf("%d x %d = %d\n",cont6,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont7*i;
    printf("%d x %d = %d\n",cont7,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont8*i;
    printf("%d x %d = %d\n",cont8,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont9*i;
    printf("%d x %d = %d\n",cont9,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont10*i;
    printf("%d x %d = %d\n",cont10,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont11*i;
    printf("%d x %d = %d\n",cont11,i,resultado);

}
printf("\n");
for(i=0;i<=12;i++){
    resultado=cont12*i;
    printf("%d x %d = %d\n",cont12,i,resultado);

}
printf("\n");
system("pause");



}
void menucuarta(){

    char opcion3;

do{
        system("cls");
    printf("4. MENU \n");
    printf("a. tablas de multiplicar\n");
    printf("b. factorial de un numero\n");
    printf("c. serie fibonacci\n");
    printf("d. menu taller#1\n");
    printf("ingresa una opcion: ");
    scanf("%s",&opcion3);
    switch(opcion3){
    case 'a': cuarta();
              break;
    case 'b':cuarta2();
              break;
    case 'c':cuarta3();
              break;
    case 'd':menu();
            break;
    default:printf("opcion invalida\n8");
    system("pause");



    }


}while (opcion3!=0);
}
void cuarta2(){
system("cls");
int n,factorial=1;
printf("ingrese un numero para sacar su factorial: ");
scanf("%d",&n);

for(int i=1;i<=n;i++){

    factorial=factorial*i;

}
printf("el factorial de %d es %d\n",n,factorial);

system("pause");
}
void cuarta3(){
system("cls");
printf("serie fibonacci\n");
int n,x=0,y=1,z=1;
printf("digite un numero: ");
scanf("%d",&n);
for(int i=1;i<n;i++){
    z=x+y;
    printf("%d ",z);
    x=y;
    y=z;


}
printf("\n");
system("pause");
}
void quinta(){
    system("cls");
    int mes;
    printf("ingrese el mes: ");
    scanf("%d",&mes);
    switch(mes){
        case 1:printf("enero\n");
                break;
        case 2:printf("febrero\n");
                break;
        case 3:printf("marzo\n");
                break;
        case 4:printf("abril\n");
                break;
        case 5:printf("mayo\n");
                break;
        case 6:printf("junio\n");
                break;
        case 7:printf("julio\n");
                break;
        case 8:printf("agosto\n");
                break;
        case 9:printf("septiembre\n");
                break;
        case 10:printf("octubre\n");
                break;
        case 11:printf("Noviembre");
                break;
        case 12:printf("Diciembre\n");
                break;
        default:printf("el mes no es valido\n");
            system("pause");
    }
system("pause");
}
void menuquinta(){
char opcion5;
do{
    system("cls");
    printf("5.    MENU\n");
    printf("a. preguntar el mes\n");
    printf("b. condigo ascii de un caracter\n");
    printf("c. codigo ascci de un numero\n");
    printf("d. menu taller#1\n");
    printf("ingrese una opcion: ");
    scanf("%s",&opcion5);
    switch(opcion5){
    case 'a':quinta();
            break;
    case 'b':quinta2();
            break;
    case 'c':quinta3();
            break;
    case 'd':menu();
            break;
    default:printf("opcion invalida\n");
        system("pause");
    }

}while(opcion5!=0);

}
void quinta2(){
system("cls");
char c;
printf("ingrese un caracter: ");
scanf("%s",&c);
printf("el codigo ascii es: %d\n",c);
system("pause");

}
void quinta3(){
system("cls");
char c;
printf("ingrese un numero: ");
scanf("%s",&c);
printf("el codigo ascii es: %d\n",c);
system("pause");

}
void sesta(){
system("cls");
float vect[]={32.583f,11.239f,45.781f,22.237f};
 printf ( " los cuatro elemntos son : \n " );
    array1 (vect);
system("pause");

}
void  array1 ( float vect []) {

    for ( int i = 0 ; i <= 3 ; i ++) {
        printf ( " %.3f\n " , vect [i]);
    }

}
void sesta2(){
    system("cls");

    printf("ingrese una matriz\n");
    printf("ingrese el numero de filas: ");
    scanf("%d",&filas);
    printf("ingrese el numero de columnas: ");
    scanf("%d",&columnas);

     srand(time(0));
 for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
                m[i][j]=rand()%2;
        }
    }

//imprimir la matriz
     printf("LA MATRIZ:\n");
    for(int i=0;i<filas;i++){
        for(int j=0;j<columnas;j++){
           printf("%d ",m[i][j]);
        }
        printf("\n");
    }
system("pause");
}
void sesta3(){
    system("cls");
    int num1,num2,num3,num4;
    int v[100][100];

    printf("ingrese 4 numeros\n");
    scanf("%d %d %d %d",&num1,&num2,&num3,&num4);

for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
            if (i==0&&j==0){
                v[i][j]=num1;
            }
            if (i==1&&j==0){
                v[i][j]=num2;
            }
            if(i==2&&j==0){
                v[i][j]=num3;
            }
            if(i==3&&j==0){
                v[i][j]=num4;
            }
            if(i==0&&j==1){
                v[i][j]=num1*num1;
            }
            if(i==1&&j==1){
                v[i][j]=num2*num2;
            }
            if(i==2&&j==1){
                v[i][j]=num3*num3;
            }
            if(i==3&&j==1){
                v[i][j]=num4*num4;
            }
            if(i==0&&j==2){
                v[i][j]=num1*num1*num1;
            }
            if(i==1&&j==2){
                v[i][j]=num2*num2*num2;
            }
            if(i==2&&j==2){
                v[i][j]=num3*num3*num3;
            }
            if(i==3&&j==2){
                v[i][j]=num4*num4*num4;
            }
            if(i==0&&j==3){
                v[i][j]=num1*num1*num1*num1;
            }
            if(i==1&&j==3){
                v[i][j]=num2*num2*num2*num2;
            }
            if(i==2&&j==3){
                v[i][j]=num3*num3*num3*num3;
            }
            if(i==3&&j==3){
                v[i][j]=num4*num4*num4*num4;
            }
        }
}

   printf("MATRIZ\n");
 for(int i=0;i<4;i++){
        for(int j=0;j<4;j++){
                printf("%d ",v[i][j]);
        }
        printf("\n");

    }


 system("pause");


}
void septima (){
    system("cls");
    printf("llene la matriz de 3x3\n\n");
    llenar(m);
    suma(m,v,v2);
    system("pause");




}
void llenar(int m[][100]){
      //llenado la matriz
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
            printf("ingrese un numero: ");
        scanf("%d",&m[i][j]);
    }
}
//impriminedo la matriz
printf("\n");
printf("LA MATRIZ:\n");
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",m[i][j]);
    }
    printf("\n");
}
}
void suma (int m[][100],int v[],int v2[]){
//sumamos las filas
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        v[i]=v[i]+m[i][j];
    }
}
//sumamos las columnas
for(int i=0;i<3;i++){

    for(int j=0;j<3;j++){
        v2[i]=v2[i]+m[j][i];
    }
}
//imprimir la suma de las filas
printf("\n");
printf("SUMA DE FILAS:\n");
for(int i=0;i<3;i++){
        printf("fila %d = %d",i+1,v[i]);
        printf("\n");

}
//imprimir la suma de las columnas
printf("\n");
printf("SUMA DE COLUMNAS:\n");
for(int i=0;i<3;i++){

        printf("|columna %d = %d| ",i+1,v2[i]);
}
printf("\n");
}
void septima2(){
    system("cls");
    int limite;
    int s[100][100];

printf("ingrese el tope de numeros para llenar la matriz: ");
scanf("%d",&limite);

    srand(time(0));
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        s[i][j]=rand()%limite+1;
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        printf("%d ",s[i][j]);
    }printf("\n");
    }
system("pause");
}
void septima3(){
system("cls");
srand(time(0));
    int n;
    while(f!=L){
        n=rand()%30;
        if(esprimo(n)){
            insertarnumMatriz(n);
        }
    }
    //imprimiendo la matriz
printf("MATRIZ DE NUMEROS PRIMOS ALEATORIOS\n");
for(int i=0;i<L;i++){
    for(int j=0;j<L;j++){
        printf("%d \t",m2[i][j]);
    }
    printf("\n");
}
system("pause");

}

bool esprimo(int n){
int i,primos=0;
for(i=1;i<=n;i++){
    if(n%i==0){
        primos++;
    }
}
if(primos==2){
    return true;
}else{
    return false;
}

}
void insertarnumMatriz(int n){
m2[f][c]=n;
c++;
if(c==L){
    f++;
    c=0;
}
}



void octava(){
    system("cls");
int estu;
printf("ingrese el numero de estudiantes: ");
scanf("%d",&estu);
int h;
for(int i=0;i<estu;i++){
    printf("\nestudiante #%d\n",i+1);
    h++;
    printf("ingresa su nombre: ",i+1);
    fflush(stdin);
    fgets(estudiantes[i].nombre,20,stdin);
    printf("ingrese las 3 notas\n");



      for(int j=0;j<3;j++){
    printf("nota %d: ",j+1);
    scanf("%f",&estudiantes[i].nota[j]);

    }
    estudiantes[i].promedio=(estudiantes[i].nota[0]+estudiantes[i].nota[1]+estudiantes[i].nota[2])/3;

    printf("promedio:%.1f\n",estudiantes[i].promedio);
}
char cambio[20];
int aux;
    for(int i=0; i<estu; i++){
		for(int j=0; j<estu-i; j++){
			if(estudiantes[j].promedio < estudiantes[j+1].promedio){
                    aux = estudiantes[j].promedio;





                   estudiantes[j].promedio = estudiantes[j+1].promedio;
                    estudiantes[j+1].promedio = aux;
			}
		}
	}
 printf("\npromedio ordenado\n");
for(int i=0;i<estu;i++){

            printf("ordenado : %.1f\n",estudiantes[i].promedio);

}



system("pause");


}
void menues3(){

char opciones3;
do{
    system("cls");
    printf("3.    MENU\n");
    printf("a. n estudiantes\n");
    printf("b. categoria de corredores segun su edad \n");
    printf("c. estructura para sacar el promedio \n");
    printf("d. estructura para sacar el promedio de n estudiantes\n");
    printf("e. menu taller#2\n");
    printf("ingrese una opcion: ");
    scanf("%s",&opciones3);
    switch(opciones3){
    case 'a':octava();
            break;
    case 'b':octava2();
            break;
    case 'c':octava3();
            break;
    case 'd':octava4();
            break;
    case 'e':menut2();
            break;
    default:printf("opcion invalida\n");
        system("pause");
    }

}while(opciones3!=0);
}

void octava2(){
    system("cls");
ingresarcorredor();
organizarcategoria();
mostrar();
system("pause");

}


void ingresarcorredor(){
    printf("ingrese los datos del corredor\n");
    printf("---------------------------\n");
printf("nombre: ");
fflush(stdin);
fgets(corredor1.nombre,30,stdin);
printf("edad: ");
scanf("%d",&corredor1.edad);
fflush(stdin);
printf("sexo: ");
fgets(corredor1.sexo,10,stdin);
fflush(stdin);
printf("club: ");
fgets(corredor1.club,20,stdin);
    printf("---------------------------\n");
}
//poniendo la categoria segun su edad
void organizarcategoria(){

        for(int i=0;i<8;i++){
    if(corredor1.edad<=15){
    categoria[i]=infantil[i];
        }else{
         if(corredor1.edad<=30){
    categoria[i]=joven[i];
        }else{
         if(corredor1.edad>30){
    categoria[i]=mayor[i];
        }
        }
        }
}
}
//imprimiendo con la categoria
void mostrar(){
printf("\n---------------------------\n");
printf("DATOS PERSONA\n");
printf("nombre: %s",corredor1.nombre);
printf("edad: %d\n",corredor1.edad);
printf("sexo: %s\n",corredor1.sexo);
printf("club: %s",corredor1.club);
printf("categoria: %s",categoria);
printf("\n---------------------------\n");
}


struct promedio{
float nota1,nota2,nota3;
};

struct alumno{
char nombre[20];
char sexo[10];
int edad;
struct promedio prom;

}alumno;
 float promedio2;

void octava3(){
system("cls");
printf("ingrese el nombre: ");
fflush(stdin);
fgets(alumno.nombre,20,stdin);
printf("ingrese la edad: ");
scanf("%d",&alumno.edad);
fflush(stdin);
printf("ingrese el sexo: ");
fgets(alumno.sexo,10,stdin);
printf("--------------------------\n");
printf("NOTAS DEL ALUMNO\n");
printf("ingrese la nota 1: ");
scanf("%f",&alumno.prom.nota1);
printf("ingrese la nota 2: ");
scanf("%f",&alumno.prom.nota2);
printf("ingrese la nota 3: ");
scanf("%f",&alumno.prom.nota3);
printf("--------------------------\n");
promedio2=(alumno.prom.nota1+alumno.prom.nota2+alumno.prom.nota3)/3;

printf("DATOS DEL ALUMNO\n");
 printf("nombre: %s",alumno.nombre);
 printf("edad: %d\n",alumno.edad);
 printf("sexo: %s\n",alumno.sexo);
 printf("promedio: %.1f",promedio2);
printf("\n--------------------------\n");

system("pause");
}
struct promedio8{
float nota1,nota2,nota3;
};
struct alumno8{
char nombre[20];
char sexo[10];
int edad;
struct promedio8 prom;
}alumno8[100];

int cont,cont2;
int cantalumnos;
float mayorq,menorq=999999;
float promedioc[50];



void octava4(){
system("cls");
printf("ingrese la cantidad de alumnos: ");
scanf("%d",&cantalumnos);
for(int i=0;i<cantalumnos;i++){
printf("-------------------------------\n");
printf("ALUMNO #%d\n",i+1);
fflush(stdin);
printf("ingrese el nombre: ");
fgets(alumno8[i].nombre,20,stdin);
printf("ingrese la edad: ");
scanf("%d",&alumno8[i].edad);
fflush(stdin);
printf("ingrese el sexo: ");
fgets(alumno8[i].sexo,10,stdin);
printf("\nNOTAS DEL ALUMNO\n");
printf("ingrese la nota 1: ");
scanf("%f",&alumno8[i].prom.nota1);
printf("ingrese la nota 2: ");
scanf("%f",&alumno8[i].prom.nota2);
printf("ingrese la nota 3: ");
scanf("%f",&alumno8[i].prom.nota3);
//sacando el promedio
promedioc[i]=(alumno8[i].prom.nota1+alumno8[i].prom.nota2+alumno8[i].prom.nota3)/3;
//determinando el mayor promedio
    if(promedioc[i]>mayorq){
        mayorq=promedioc[i];
        cont=i;
    }
//determinando el menor promedio
    if(promedioc[i]<menorq){
        menorq=promedioc[i];
        cont2=i;
    }
}

printf("\n\n-------------------------------\n");

printf("EL ALUMNO CON MAYOR PROMEDIO ES\n");
 printf("nombre: %s",alumno8[cont].nombre);
 printf("edad: %d\n",alumno8[cont].edad);
 printf("sexo: %s\n",alumno8[cont].sexo);
 printf("promedio: %.1f",mayorq);
printf("\n-------------------------------\n");

printf("EL ALUMNO CON MENOR PROMEDIO ES\n");
 printf("nombre: %s",alumno8[cont2].nombre);
 printf("edad: %d\n",alumno8[cont2].edad);
 printf("sexo: %s\n",alumno8[cont2].sexo);
 printf("promedio: %.1f",menorq);
printf("\n-------------------------------\n");


system("pause");



}
