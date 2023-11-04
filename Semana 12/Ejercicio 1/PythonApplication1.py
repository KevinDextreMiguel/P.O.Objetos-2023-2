from ListaCuentas import*

def opciones():
    opc=-1
    print('=================================================')
    print('1. Insertar cuenta')
    print('2. Realizar transeferencia')
    print('3. Saldo promedio por distrito')
    print('4. Mostrar por inicial del apellido')
    print('5. Ver personas con saldo mayor')
    print('6. Imprimir datos')
    print('7. Salir')
    while opc<1 or opc>7:
        opc = int(input('opcion: '))

    return opc


def pedirDatos():
    dni=''
    monto=0
    while len(dni)!=8:
        dni=input('dni: ')
    nombres=input('nombres: ')
    apellidos=input('apellidos:')
    distrito=input('distrito:')
    telefono=input('telefono:')
    while monto<1:
        monto=float(input('monto:'))
        
    objetoCuenta=CuentaCorriente(dni,nombres,apellidos,distrito,telefono,monto)
    return objetoCuenta
    

def realizarConsultas():
    objListaContactos = ListaCuenta()
    opc=-1
    while opc!=7:
        opc=opciones()
        if opc==1:
            objListaContactos.insertarCuenta(pedirDatos())
        elif opc==2:
            dniEmisor=input('Dni emisor: ')
            dniReceptor=input('Dni receptor: ')
            monto=int(input('monto: '))
            objListaContactos.realizarTRansferencia(dniEmisor,dniReceptor,monto)           
        elif opc==3:
            distrito=input('distrito: ')
            objListaContactos.SaldoPromedioDistrito(distrito)
        elif opc==4:
            apellido=input('apellido: ')
            objListaContactos.DatosAppellidoInicial(apellido)
        elif opc==5:
            objListaContactos.PersonasSaldoMayor()
        elif opc==6:
            objListaContactos.MostrarTodos()
       
#main
realizarConsultas()
