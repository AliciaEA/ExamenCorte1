Proceso ejercicio_4
	//Leer la hora en formato 24 horas y decir si es de día o de noche. 
		Definir hora Como Entero;
		
		Escribir "Ingrese la hora (en formato 24 horas): ";
		Leer hora;
		
		Si hora >= 6 Y hora < 18 Entonces;
			Escribir "Es de día.";
		Sino
			Escribir "Es de noche.";
		FinSi
FinProceso
