#se importan librerías
import numpy as np
import matplotlib.pyplot as plt
%matplotlib inline

#se inicializan variables y espaciados
x=np.linspace(-15,15,15+1)
y=x**2*np.cos(x)
x2=np.linspace(-5,5,5+1)
y2=x2**3*np.sin(x2)

#se grafica x vs y
plt.plot(x,y)
plt.plot(x2,y2)

#funciones
fx=lambda x,y:(x**3+y**7)-10 #opcion 1 
fx(10,10) #tabulación o evaluación

def fx2(x,y): #opcion 2
	z=z*y**2*np.cos(x*y)-7y
	return z

def recta(a,m=1,b=0,label='x'):
	z=m*a+b
	return z

x=np.linspace(-4,4,8+1)
recta(x)
recta(x,-2,1,'recta2')
plt.legend()
plt.grid()