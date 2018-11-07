import matplotlib
matplotlib.use("Agg")
import numpy as np
import matplotlib.pyplot as plt
import sys

mu=float(sys.argv[2])
sigma=float(sys.argv[3])

from scipy.stats import norm


data=np.genfromtxt('sample.dat')
x_axis = np.arange(-10, 10, 0.001)
plt.plot(x_axis, norm.pdf(x_axis,mu,sigma))
plt.hist(data,normed=1)
plt.title('PDF real vs datos de sample.dat')
plt.savefig('sample.pdf')
