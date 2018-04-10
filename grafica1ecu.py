import numpy as np
import matplotlib.pyplot as plt

datos = np.genfromtxt("resulta.txt")
x = datos[:,0]
y = datos[:,1]
plt.plot(x,y)
plt.savefig("ecuaciondeprimerorden.pdf")

