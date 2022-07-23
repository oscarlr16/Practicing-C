#include <stdio.h>
#include <string.h>

#include "f_empleados.h"


int main(){
    Empleado e;
    strncpy(e.nombre,"Pepito",30);
    strncpy(e.apellido,"Perez",40);
    strncpy(e.identificador,"16545",9);
    e.cargo = Analista;
    print_empleado(&e);
    
    return 0;
}