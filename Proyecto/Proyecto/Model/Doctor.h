/**
 * Project Untitled
 */


#ifndef _DOCTOR_H
#define _DOCTOR_H

#include "Empleado.h"


class Doctor: public Empleado {
public: 
    String Speciality;
    int PatiensAttended;
};

#endif //_DOCTOR_H