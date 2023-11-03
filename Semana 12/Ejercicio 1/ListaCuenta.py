from CuentaCorriente import*


class ListaCuentas:
    def __init__(self):
        self.__listaCuentas=[]
        
    def imprimir(self):
      for i in range(len(self.__listaCuentas)):
        self.__listaCuentas[i].consultar_cuenta()
    
    def InsertarCuenta(self,objetoCuenta):
       self.__listaCuentas.append(objetoCuenta)
    
    def realizar_transferencia(self,dni_emisor,dni_receptor,monto):
      pos1 = pos2 = -1  
      for i in range(len(self.__listaCuentas)):
        if dni_emisor == self.__listaCuentas[i].get_dni():
          pos1 = i
        if dni_receptor == self.__listaCuentas[i].get_dni():
          pos2 = i
      
      
      self.__listaCuentas[pos1].retirar_dinero(monto)
      if self.__listaCuentas[pos1].get_saldo()>=monto:
        self.__listaCuentas[pos2].ingresar_dinero(monto)
        print('Operacion exitosa')
      print('Operación denegada')
    
    def saldo_promedio_distrito(self,distrito):
      promedio = cont = 0
      for i in range(len(self.__listaCuentas)):
        if distrito == self.__listaCuentas[i].get_distrito():
          promedio +=self.__listaCuentas[i].get_saldo()
          cont += 1
    
      if cont != 0:
        promedio = promedio / cont
    
      print('El saldo promedio del distrito de ',distrito,'es: ',promedio)
    
    def apellido_letra(self,apellidos):
      for i in range(len(self.__listaCuentas)):
        aux = self.__listaCuentas[i].get_apellidos()
        if aux[0] == apellidos[0]:
          print('\n',self.__listaCuentas[i].consultar_cuenta())
    
    def mayor_saldo(self):
      mayor = -1
      for i in range(len(self.__listaCuentas)):
        if self.__listaCuentas[i].get_saldo() > mayor:
          mayor = self.__listaCuentas[i].get_saldo()
    
      print('El o las personas que tienen mayor saldo son:')
      for i in range(len(self.__listaCuentas)):
        if mayor == self.__listaCuentas[i].get_saldo():
          print(self.__listaCuentas[i].consultar_cuenta())
    







