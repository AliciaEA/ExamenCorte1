Algoritmo calcProm
	Definir nota1, nota2, nota3, nota4, nota5, promedio Como Real;
	Escribir "Introduce la nota 1:";
	Leer nota1;
	Escribir "Introduce la nota 2:";
	Leer nota2;
	Escribir "Introduce la nota 3:";
	Leer nota3;
	Escribir "Introduce la nota 4:";
	Leer nota4;
	Escribir "Introduce la nota 5:";
	Leer nota5;
	promedio <- (nota1 + nota2 + nota3 + nota4 + nota5) / 5;
	Si promedio > 85 Entonces
		Escribir "¡Felicitaciones, lo estas haciendo excelente! Tu promedio es ", promedio;
	SiNo
		Escribir "¡Ánimo, puedes hacerlo meojor! Tu promedio es ", promedio;
	Fin Si
FinAlgoritmo
