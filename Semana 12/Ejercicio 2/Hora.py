class Hora():
  def __init__(self,hora,minutos,segundos):
    self.__hora = hora
    self.__minutos = minutos
    self.__segundos = segundos

  def Modificar_hora(self,hora,minutos,segundos):
    self.__hora = hora
    self.__minutos = minutos
    self.__segundos = segundos

  def devolver_hora(self):
    return str(self.__hora)+':'+str(self.__minutos)+':'+str(self.__segundos)

  #set
  def set_hora(self,hora):
    self.__hora = hora
  def set_minutos(self,minutos):
    self.__minutos = minutos
  def set_segundos(self,segundos):
    self.__segundos = segundos

  #get
  def get_hora(self):
    return self.__hora
  def get_minutos(self):
    return self.__minutos
  def get_segundos(self):
    return self.__segundos

  def get_cantidad_segundos(self):
    valor = self.__hora * 3600 + self.__minutos * 60 + self.__segundos
    return valor
