#include <stdio.h>

int Confirmacion, DineroRegresado  = 0;
void pago (int Valor1);
//void BorrarPantalla ();

int main() {
  //Declaracion de precios de cada producto
  int Doritos = 17;
  int CocaCola = 15;
  int Chocorroles = 20;
  int Sandwich = 35;
  
while(1){ //Hacemos que el proceso sea ciclico y una vez realizado vuelva a estar preparado para otro cliente
 //BorrarPantalla();
  char ProductoSeleccionado; //Caracter para la confirmacion de acciones del usuario
  Confirmacion = 0;
  printf("Bienvenido Por favor seleccione el producto deseado \nescribiendo el codigo mostrado\n\n CocaCola = C \n Doritos = D \n Chocorroles = H \n sandwich = S \n\n"); 
  scanf("%c",&ProductoSeleccionado);
  if ((ProductoSeleccionado != 's')&&(ProductoSeleccionado != 'S')&&(ProductoSeleccionado != 'c')&& (ProductoSeleccionado != 'C')&&(ProductoSeleccionado != 'D')&&(ProductoSeleccionado != 'd')&&(ProductoSeleccionado != 'H')&&(ProductoSeleccionado != 'h')) {printf("elige una opcion de las que estan en el menu\n\n");
    } 
    switch (ProductoSeleccionado){
      case 'C': printf("\nElegiste Cocacola, este producto cuesta %i pesos\n",CocaCola);
        printf("¿Deseas comprar este producto?\n Si = 1\n No = 2 \n\n");
        scanf("%i", &Confirmacion);
        if (Confirmacion == 1){pago (CocaCola);}
        else if(Confirmacion < 1){printf("Elegiste erroneamente, es 1 o 2");}
        else if (Confirmacion == 2){Confirmacion = 0;
        }
    break;
     case 'D': printf("\nElegiste Doritos, este producto cuesta %i pesos\n",Doritos);
        printf("¿Deseas comprar este producto?\n Si = 1\n No = 2 \n\n");
        scanf("%i", &Confirmacion);
        if (Confirmacion == 1){pago (Doritos);}
        else if(Confirmacion < 1){printf("Elegiste erroneamente, es 1 o 2");}
        else if (Confirmacion == 2){Confirmacion = 0;
        }
    break;  
       case 'S': printf("\nElegiste Sandwich, este producto cuesta %i pesos\n",Sandwich);
        printf("¿Deseas comprar este producto?\n Si = 1\n No = 2 \n\n");
        scanf("%i", &Confirmacion);
        if (Confirmacion == 1){pago (Sandwich);}
        else if(Confirmacion < 1){printf("Elegiste erroneamente, es 1 o 2");}
        else if (Confirmacion == 2){Confirmacion = 0;
        }
    break;
       case 'H': printf("\nElegiste Chocorroles, este producto cuesta %i pesos\n",Chocorroles);
        printf("¿Deseas comprar este producto?\n Si = 1\n No = 2 \n\n");
        scanf("%i", &Confirmacion);
        if (Confirmacion == 1){pago (Chocorroles);}
        else if(Confirmacion < 1){printf("Elegiste erroneamente, es 1 o 2");}
        else if (Confirmacion == 2){Confirmacion = 0;
        }
    break;
      
    }
  }
  
}

void pago (int Valor1) {
  int Costo = Valor1;
  int ValorDineroIngresado = 0;
  int Confirmacion = 0;
  printf("\nIngresa tu dinero por favor\n\n");
          scanf("%i",&ValorDineroIngresado);
          DineroRegresado = DineroRegresado + ValorDineroIngresado;
        
          if(ValorDineroIngresado == Costo){
            printf("\n\nMuchas Gracias, Tome su producto\n\n");
            ValorDineroIngresado = 0;
            return;
          }
          if(ValorDineroIngresado>Costo){
            printf("Muchas gracias por tu compra tu cambio es %i pesos\n\n", ValorDineroIngresado-Costo);
            return;
          }
          if(ValorDineroIngresado < Costo){
            printf("\nFalta %i pesos\n\n", Costo-ValorDineroIngresado);
            printf("Deseas cancelar el producto\n Si = 1\n No = 2\n\n");
            scanf("%i",&Confirmacion);
            if(Confirmacion == 1){
              printf("Por favor toma tu dinero ingresado %i pesos\n\n", DineroRegresado);
              }
            else if (Confirmacion==2){  
              Costo = Costo - ValorDineroIngresado;
              pago(Costo); 
            
            } 
          }
  }

