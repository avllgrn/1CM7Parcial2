#include <stdio.h>
#include "misFunciones.h"


int main(void){

    switch( muestraMenuPideOpcion() ){
        case 1:
            calculaSenoVacia();
            break;
        case 2:
            calculaCosenoVacia();
            break;
        case 3:
            calculaTangenteVacia();
            break;
        default:
            printf("Opcion invalida =^(");
            break;
    }

    return 0;
}
