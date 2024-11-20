#pragma once
#include "Cliente.h"
#include <string>
using namespace System;

public ref class Pedido {
public:
    String^ IdCliente;
    String^ Identificador;
    DateTime^ Fecha;
    DateTime^ Hora;
    String^ LugardeEntrega;
    double CostoTotal;
    double TotalPagado;
    double TotalAdeudado;
    String^ Descripcion;
    String^ Estado;

    // Constructor con todos los parámetros
    Pedido(String^ idCliente, String^ id, DateTime^ fechaPedido, DateTime^ hora, String^ lugarEntrega, double costoTotal,
        double totalPagado, double totalAdeudado, String^ descripcion, String^ estado) {
        Identificador = id;
        IdCliente = idCliente;
        Fecha = fechaPedido;
        Hora = hora;
        LugardeEntrega = lugarEntrega;
        CostoTotal = costoTotal;
        TotalPagado = totalPagado;
        TotalAdeudado = totalAdeudado;
        Descripcion = descripcion;
        Estado = estado;
    }

    void MostrarDatos() {
        Console::WriteLine("ID Pedido: " + Identificador + ", Estado: " + Estado);
    }
};


////// Pedido.h
//#pragma once
//#include "cliente.h"
//#include <string>
//using namespace System;
//
//public ref class Pedido {
//public:
//    String^ IdCliente;
//    String^ Identificador;
//    DateTime^ Fecha;  // Cambiar a DateTime^ en lugar de String^
//    DateTime^ Hora;
//    String^ LugardeEntrega;
//    double CostoTotal;
//    double TotalPagado;
//    double TotalAdeudado;
//    String^ Descripcion;
//    String^ Estado;
//
//    // Cambiar el parámetro 'fechaPedido' a DateTime^
//    Pedido(String^ idCliente, String^ id, DateTime^ fechaPedido, DateTime^ hora, String^ lugarEntrega, double costoTotal,
//        double totalPagado, double totalAdeudado, String^ descripcion, String^ estado) {
//        Identificador = id;
//        IdCliente = idCliente;
//        Fecha = fechaPedido;  // Asignar DateTime^
//        Hora = hora;
//        LugardeEntrega = lugarEntrega;
//        CostoTotal = costoTotal;
//        TotalPagado = totalPagado;
//        TotalAdeudado = totalAdeudado;
//        Descripcion = descripcion;
//        Estado = estado;
//    }
//
//
//    void MostrarDatos() {
//        Console::WriteLine("ID Pedido: " + Identificador + ", Estado: " + Estado);
//    }
//};
