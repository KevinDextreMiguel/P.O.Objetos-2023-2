class CuentaCorriente:
    
    def __init__(self,dni,nombres,apellidos,distrito,telefono,saldo):
        self.__dni = dni
        self.__nombres= nombres
        self.__apellidos = apellidos
        self.__distrito = distrito
        self.__telefono= telefono
        self.__saldo= saldo
        
    #get
    def setDni(self,dni):
        self.__dni = dni
    def setNombres(self,nombres):
        self.__nombres= nombres
    def setapellidos(self,apellidos):
        self.__apellidos = apellidos
    def setdistrito(self,distrito):
        self.__distrito = distrito
    def settelefono(self,telefono):
        self.__telefono= telefono
    def setSaldo(self,monto):
        self.__saldo= monto
     
    #get
    def getDni(self):
        return self.__dni 
    def getNombres(self):
        return self.__nombres
    def getapellidos(self):
        return self.__apellidos
    def getdistrito(self):
        return self.__distrito 
    def gettelefono(self):
        return self.__telefono
    def getSaldo(self):
        return self.__saldo
       
    def ingresarMonto(self,monto):
        self.__saldo += monto
    def retirarMonto(self,monto):
        if self.__saldo - monto >=0:
            self.__saldo -= monto
            print('Con exito')
        else:
            print('Saldo insuciente')
            
    def consultarCuenta(self):
        print(self.__dni,' ',self.__nombres,' ',self.__apellidos,' ',self.__distrito,' ',self.__telefono,' ',self.__saldo)




