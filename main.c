#include <stdio.h>
#include "promedio_estudiante.h"
#include "promedio_asignatura.h"

int main() {
    int estudiantes,asignaturas=3;
    float *matriz;
    int *puntero_estudiantes;
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d",&estudiantes);
    float *matriz;
    int *puntero_estudiantes;
    float notas[estudiantes][3];


     // Ingreso de datos
    for (int i = 0; i < estudiantes; i++) {
        printf("\nEstudiante %d", i + 1);
        for (int j = 0; j < asignaturas; j++) {
            printf(" \n Asignatura %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            if (notas[i][j] < 0 || notas[i][j] > 10) {
                printf("  Error: ingrese un valor entre 0 y 10\n");
                j--;
            }
        }
    }
    matriz=&notas[0][0];
    puntero_estudiantes=&estudiantes;
    promedio_estudiante(*matriz, puntero_estudiantes, asignaturas);

    promedio_asignatura(matriz, puntero_estudiantes, asignaturas);
    return 0;
    
    }