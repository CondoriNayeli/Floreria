

#pragma once
#include <string>
#include <vector>
using namespace System;
public ref class Cliente {
public:
    String^ Identificador;
    String^ Nombre;
    String^ Telefono;
    String^ Direccion;

    Cliente(String^ clienteId, String^ nombre, String^ telefono, String^ direccion) {
        Identificador = clienteId;
        Nombre = nombre;
        Telefono = telefono;
        Direccion = direccion;
    }

    void MostrarDatos() {
        Console::WriteLine("ID: " + Identificador + ", Nombre: " + Nombre);
    }
};


