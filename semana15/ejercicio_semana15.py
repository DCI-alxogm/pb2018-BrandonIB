import numpy as np
import matplotlib as plt #se importan librerías
%matplotlib inline #ejecución en línea o notebook
import scipy.constants as sc #se importan constantes

datos=np.loadtxt('IRCF.txt') #se declara datos al contenido del archivo

h=sc.Planck
k=sc.Boltzmann #se declaran variables con las constantes importadas
c=sc.c


freq = datos [:,0:1]
spectre = datos [:,1:2] #se definen los datos que se toman en la lectura de estas variables
uncertainty = datos [:,3:4]


plt.errorbar(freq,spectre,uncertainty) #se grafica


def I(v,T): #la función...
   	 a=(((h*pow(v,3))/pow(c,2)))*(1/((np.exp(e,(h*v/(k*T)))-1)))
  	  return a