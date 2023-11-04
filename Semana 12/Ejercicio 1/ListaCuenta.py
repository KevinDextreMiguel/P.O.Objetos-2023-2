from CuentaCorriente import*

class ListaCuenta():
    def __init__(self):
        self.__lista = []
    
    def insertarCuenta(self,objCuenta):
        self.__lista.append(objCuenta)
        
    def MostrarTodos(self):
        for i in range(len(self.__lista)):
            self.__lista[i].consultarCuenta()
            
    def realizarTRansferencia(self,dniEmisor,dniReceptor,monto):
        pos1=pos2=-1
        for i in range(len(self.__lista)):
            if self.__lista[i].getDni() == dniEmisor:
                pos1=i              
            if self.__lista[i].getDni() == dniReceptor:
                pos2=i
                
        if self.__lista[pos1].getSaldo()>=monto:
            self.__lista[pos1].retirarMonto(monto)
            self.__lista[pos2].ingresarMonto(monto)
            print('Con exito')
        else:
            print('Operacion denegada')
            
    def SaldoPromedioDistrito(self,distrito):
        promedio=cont=0
        for i in range(len(self.__lista)):
            if self.__lista[i].getdistrito()==distrito:
                promedio+=self.__lista[i].getSaldo()
                cont+=1
        
        if cont != 0:
            promedio = promedio/cont
        print(f'El saldo promedio del distrito {distrito} es de: {promedio}')
                
        
    def DatosAppellidoInicial(self,apellido):
        for i in range(len(self.__lista)):
           aux = self.__lista[i].getapellidos()
           if aux[0]==apellido[0]:
               self.__lista[i].consultarCuenta()
                
    def PersonasSaldoMayor(self):
       mayor = -1
       for i in range(len(self.__lista)):
           if self.__lista[i].getSaldo() > mayor:
               mayor = self.__lista[i].getSaldo()
               
       print('Las personas con saldo mayor')
       for i in range(len(self.__lista)):
           if self.__lista[i].getSaldo() == mayor:
               self.__lista[i].consultarCuenta()
