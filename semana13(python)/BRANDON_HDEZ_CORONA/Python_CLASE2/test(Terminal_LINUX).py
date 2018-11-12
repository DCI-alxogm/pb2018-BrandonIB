import matplotlib.pyplot as plt
import numpy as np
%matplotlib inline


#gráfica
x=np.linspace(0,10,10+1)
y=x**2
plt.plot(x,y)
plt.show()


#operaciones con strings
a = 'hello'
b = 'world'
a+b

#se pueden definir números como strings
a + str(10)


for i in range(2,5,2):
    print 'testeo es: ' + str(i)
    
    for i in range(10):
    print i**2
    
    

z = np.arange(2,10,5)
print(x)
print len(x)#se imprime el número de casillas

n = np.linspace(0,10,10+1)
print(n)


o = 2
p = 7
q = np.array([o,p])
print(q)
q[0]

plt.plot(x,y,'-o')
#plt.savefig('seguardafig')
#plt.savefig('/Direcciones/seguardafig.pdf')


np.savetxt('arreglo.txt',y)
arreglo = np.loadtxt('arreglo.txt')
print(arreglo)