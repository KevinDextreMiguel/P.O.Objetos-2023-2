def IngresarN():
    n=-1
    while n<0 or n>21:
        n=int(input('N: '))
        
    return n

def IngresarA():
    a=0.4
    while a<0.5 or a>2:
        a=float(input('A: '))
        
    return a

def CalculaSerie(n,a):
    suma = 0
    for i in range(1,n+1):
        numerador = (2*i-1)*a**2**(i-1)
        denominador = 2*i
        signo = (-1)**(i+1)
        suma+=signo*numerador/denominador
    print(f'Suma: {suma}')
    
def Graficar(n):
    for i in range(n):
        for espacio in range(n-i):
            print(end='  ')
        for a in range(i+1):
            print(a+1,end=' ')
        for b in range(i,0,-1):
            print(b,end=' ')
        print()
        

def menu():
    opc=-1
    print('1. Serie')
    print('2. Graficar')
    print('3. salir')
    while opc<1 or opc>3:
        opc=int(input('Opcion: '))
    return opc
        

#main
opcion=-1
while opcion!=3:
    opcion = menu()
    if opcion==1:
        n=IngresarN()
        a=IngresarA()
        CalculaSerie(n,a)
    elif opcion==2: 
        n=IngresarN()
        Graficar(n)
