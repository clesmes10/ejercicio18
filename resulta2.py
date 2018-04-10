import numpy as np
import matplotlib.pyplot as plt

dat = np.genfromtxt("res2.txt")
x= dat[:,0]
y= dat[:,1]
z= dat[:,2]
plt.figure()
plt.plot(x,y, "m")
plt.savefig("2ordenequisye.pdf")
plt.figure()
plt.plot(y,z, "c")
plt.savefig("2ordenyezeta.pdf")
plt.show()
