// proceso.h
// Created by Juan Ortiz on 28/01/2017
// Copyright c 2017 Juan Ortiz. All rights reseved.

#ifndef proceso_h
#define proceso_h

typedef char Estado;

typedef struct Proceso {
	long PID;
	Estado estado;
	short prioridad;
	float time;
	char comando [20];
} Proceso;


#endif /* proceso_h */
