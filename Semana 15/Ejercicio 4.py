import random
import pandas as pd
import matplotlib.pyplot as plt

def generar(n,lista):
    for i in range(n):
        v=random.randint(2000,4000)
        lista.append(v)
        
    
def grafico_lineas_ingresos_gastos(datos):
    # Definimos la figura y los ejes del gráfico con Matplotlib
    fig, ax = plt.subplots()
    # Dibujamos las series de líneas con los ingresos y los gastos
    datos.plot(ax = ax)
    # Añadimos la escala del eje y
    ax.set_ylim([0, max(datos.Ingresos.max(), datos.Gastos.max()) + 500])
    # Añadimos el título
    plt.title('Evolucion de ingresos y gastos')
    # Devolvemos el objeto con los ejes y el gráfico que contienten
    #return ax

n=4
ingresos = []
gastos = []
generar(n,ingresos)
generar(n,gastos)
datos = {'Mes':['Ene', 'Feb', 'Mar', 'Abr'], 'Ingresos':ingresos,'Gastos':gastos}
df_datos = pd.DataFrame(datos).set_index('Mes')
#print(df_datos)
grafico_lineas_ingresos_gastos(df_datos)
plt.show()
