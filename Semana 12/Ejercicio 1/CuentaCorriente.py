class CuentaCorriente():
  def __init__(self,dni,nombres,apellidos,distrito,telefono,saldo):
    self.__dni = dni
    self.__nombres = nombres
    self.__apellidos = apellidos
    self.__distrito = distrito
    self.__telefono = telefono
    self.__saldo = saldo

  #set
  def set_dni(self,dni):
    self.__dni = dni
  def set_nombres(self,nombres):
    self.__nombres = nombres
  def set_apellidos(self,apellidos):
    self.__apellidos = apellidos
  def set_distrito(self,distrito):
    self.__distrito = distrito
  def set_telefono(self,telefono):
    self.__telefono = telefono
  def set_saldo(self,saldo):
    self.__saldo = saldo

  #get
  def get_dni(self):
    return self.__dni
  def get_nombres(self):
    return self.__nombres
  def get_apellidos(self):
    return self.__apellidos
  def get_distrito(self):
    return self.__distrito
  def get_telefono(self):
    return self.__telefono
  def get_saldo(self):
    return self.__saldo

  def retirar_dinero(self,monto):
    if self.__saldo - monto >=0:
      self.__saldo -= monto
      #print('Operación correcta')
    else:
      print('Solo cuenta con s/',self.__saldo,'.00')

  def ingresar_dinero(self,monto):
    self.__saldo += monto

  def consultar_cuenta(self):
    print(self.__dni,' ',self.__nombres,' ',self.__apellidos,' ',self.__distrito,' ',self.__telefono,' ',self.__saldo)




