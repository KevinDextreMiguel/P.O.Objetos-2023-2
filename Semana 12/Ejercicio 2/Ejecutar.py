from Hora import*

def opciones():
  opc = -1
  print('\n===========================')
  print('1. Ingresar hora')
  print('2. Mostrar horas')
  print('3. Incrementar hora en 1 segundo')
  print('4. Tiempo para el final')
  print('5. Diferencia entre la hora hora mayor y menor')
  print('6. Salir')
  while opc <1 or opc >6:
    opc=int(input('Opción?: '))
  return opc;


def ingresar_hora():
  hora = minutos = segundos = -1
  while hora < 0 or hora > 23 :
    hora = int(input('Hora: '))
  while minutos < 0 or minutos > 59:
    minutos = int(input('Minutos: '))
  while segundos < 0 or segundos > 59:
    segundos = int(input('Segundos: '))

  objeto = Hora(hora,minutos,segundos)
  horas.append(objeto)
  hora = minutos = segundos = -2
  print('La hora se agregó correctamente')

def mostrar_horas():
  for i in range(len(horas)):
    print(horas[i].devolver_hora())
    #if horas[i].get_name()=='Kevin':
        #horas[i].set_name('Juan')

def incrementar_1segundo():
  for i in range(len(horas)):
    total = horas[i].get_cantidad_segundos() + 1
    #total está en segundos
    hora = total // 3600
    minutos = total % 3600 // 60
    segundos = total % 60

    horas[i].set_hora(hora)
    horas[i].set_minutos(minutos)
    horas[i].set_segundos(segundos)
  print('Las horas se incrementaron en un segundo')

def tiempo_para_final():
  hora_dia = 24 * 3600
  for i in range(len(horas)):
    falta = hora_dia - horas[i].get_cantidad_segundos()
    hora = falta // 3600
    minutos = falta % 3600 // 60
    segundos = falta % 60
    print(hora,':',minutos,':',segundos)


def diferencia_mayor_menor():
  mayor = -1
  menor = 24 * 3600 + 1
  for i in range(len(horas)):
    if mayor < horas[i].get_cantidad_segundos():
      mayor = horas[i].get_cantidad_segundos()
    if menor > horas[i].get_cantidad_segundos():
      menor = horas[i].get_cantidad_segundos()

  valor = mayor - menor

  hora = valor // 3600
  minutos = valor % 3600 // 60
  segundos = valor % 60
  print('La diferencia es: ',hora,':',minutos,':',segundos)


def ejecucion():
  opc = -1;
  while opc != 6:
    opc = opciones()
    if opc !=6:
      if opc == 1:
        ingresar_hora()
      elif opc == 2:
        mostrar_horas()
      elif opc == 3:
        incrementar_1segundo()
      elif opc == 4:
        tiempo_para_final()
      else:
        diferencia_mayor_menor()

horas = []
ejecucion()
