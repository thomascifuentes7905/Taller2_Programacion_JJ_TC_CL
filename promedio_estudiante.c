#include <stdio.h>

float promedio_estudiante(float *matriz, int *puntero_estudiantes, int asignaturas) 
{
    float suma; 
    float promedioEstudiante, notaMaxima, notaMinima;

    printf("\n=== PROMEDIOS POR ESTUDIANTE ===\n");

    for (int i = 0; i <*puntero_estudiantes; i++) {
        suma = 0;

    
        notaMaxima = matriz[i * asignaturas + 0];
        notaMinima = matriz[i * asignaturas + 0];

        for (int j = 0; j < asignaturas; j++) {
            
            float nota_actual = matriz[i * asignaturas + j];

            suma = suma + nota_actual;

            if (nota_actual > notaMaxima) {
                notaMaxima = nota_actual;
            }
            if (nota_actual < notaMinima) {
                notaMinima = nota_actual;
            }
        }

        promedioEstudiante = suma / asignaturas;
        printf("Estudiante %d: promedio=%.2f  max=%.2f  min=%.2f\n", 
               i + 1, promedioEstudiante, notaMaxima, notaMinima);
    }
}
