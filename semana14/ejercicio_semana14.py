import matplotlib.pyplot as plt
import numpy as np
%#matplotlib inline

#Variables en cero:
w=4
tmax=50 
e=0.01 

def fx(tmax, e): #se definen repeticiones
    temp = tmax/e 
    return temp

reps = fx(tmax,e)#magnitud de repeticiones
#se inician en cero los arreglos de magnitud definida anteriormente y posteriormente las variables de velocidad y angulo
def fcero(reps):
    temp = np.zeros(reps) 
    return temp
vo = fcero(reps) 
theta = fcero(reps)

#se empieza vo con valor minimo
vo[0] = 0.0001

#Se calculan variables por metodo que indico ud maestra
def var(vo, theta, e, w):
for i in range(reps-1):
vo[i+1] = vo[i] - e*(w**2)*theta[i]
theta[i+1] = theta[i] + e*vo[i]

var(vo,theta,e,w)

#gráficas a continuacion: #theta vs vo
			plt.plot(vo,theta, color='orange')
			plt.xlabel('velocidad')
			plt.ylabel('angulo')
			plt.grid()

			#vo vs tiempo
			plt.plot(vo, color ='green')
			plt.xlabel('tiempo')
			plt.ylabel('velocidad')
			plt.grid()

			#theta vs tiempo
			plt.plot(theta, color='purple')
			plt.xlabel('tiempo')
			plt.ylabel('angulo')
			plt.grid()
