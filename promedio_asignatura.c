#include <stdio.h>
//carlos
float promedio_asignatura(float *matriz, int *puntero_estudiantes, int asignaturas) 
{
    float suma; 
    float promedioAsignatura, notaMaxima, notaMinima;
    printf("\nPROMEDIOS POR ASIGNATURA\n");
    for (int j = 0; j < asignaturas; j++) {
        suma = 0;
        notaMaxima = matriz[0 * asignaturas + j];
        notaMinima = matriz[0 * asignaturas + j];
        int cantAprobados = 0;
        int cantReprobados = 0;
 
        for (int i = 0; i < *puntero_estudiantes; i++) {
            suma = suma + matriz[i * asignaturas + j];
            if (matriz[i * asignaturas + j] > notaMaxima) notaMaxima = matriz[i * asignaturas + j];
            if (matriz[i * asignaturas + j] < notaMinima) notaMinima = matriz[i * asignaturas + j];
            if (matriz[i * asignaturas + j] >= 6)
                cantAprobados = cantAprobados + 1;
            else
                cantReprobados = cantReprobados + 1;
        }
 
        promedioAsignatura = suma / *puntero_estudiantes;
        printf("Asignatura %d: promedio=%.2f  max=%.2f  min=%.2f\n",
               j + 1, promedioAsignatura, notaMaxima, notaMinima);
        printf("              aprobados=%d  reprobados=%d\n",
               cantAprobados, cantReprobados);
    }    
}