
typedef enum cargo_t{
    Analista, DESARROLLO, SISTEMAS
}Cargo;

typedef struct empleado_t{
    char nombre[30];
    char apellido[40];
    char identificador[9];
    Cargo cargo;
}Empleado;

void print_empleado(Empleado* empl);

