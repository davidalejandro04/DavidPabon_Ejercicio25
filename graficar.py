import numpy as np
import matplotlib.pyplot as plt
import sys

mu=float(sys.argv[2])
sigma=float(sys.argv[3])

from scipy.stats import norm


data=np.genfromtxt('sample.dat')
x_axis = np.arange(-10, 10, 0.001)
plt.plot(x_axis, norm.pdf(x_axis,mu,sigma))
plt.hist(data,density=True)
plt.title('PDF real vs datos de sample.dat')
plt.show()
