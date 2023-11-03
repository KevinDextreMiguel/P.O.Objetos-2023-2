from ListaCuenta import*

def pedir_datos():
      dni = '0'
      monto = 0
      while len(dni) != 8:
        dni = input('DNI: ')
      nombre = input('Nombres: ')
      apellidos = input('apellidos: ')
      distrito = input('Distrito: ')
      telefono = input('Telefono: ')
      while monto < 1:
        monto = float(input('Saldo: '))
    
      objeto = CuentaCorriente(dni,nombre,apellidos,distrito,telefono,monto)
      return objeto


def opciones():
  opc = -1
  while opc <1 or opc>7:
    print('1. Ingresar datos')
    print('2. Realizar una transferencia')
    print('3. Promedio por distrito')
    print('4. Mostrar por inicial de apellido')
    print('5. Ver datos de las o la persona con saldo mayor')
    print('6. Mostrar datos')
    print('7. Salir')
    opc = int(input('Opcion?: '))

  return opc




def realizar_consultas():
  objListaCuenta=ListaCuentas()
  opc = -1
  while opc != 7:
    print('==========Siguiente operacion===========')
    opc = opciones()
    if opc != 7:
      if opc == 1:
        objListaCuenta.InsertarCuenta(pedir_datos())
      elif opc == 2:
        dni_emisor = input('DNI emisor: ')
        monto = float(input('Monto a transferir: '))
        dni_receptor = input('DNI receptor: ')
        objListaCuenta.realizar_transferencia(dni_emisor,dni_receptor,monto)
      elif opc == 3:
        distrito = input('Distrito?: ')
        objListaCuenta.saldo_promedio_distrito(distrito)
      elif opc == 4:
        apellidos = input('Apellido?: ')
        objListaCuenta.apellido_letra(apellidos)
      elif opc == 5:
        objListaCuenta.mayor_saldo()
      else:
        objListaCuenta.imprimir()







#main
realizar_consultas()
