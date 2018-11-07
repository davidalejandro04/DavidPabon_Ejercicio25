import numpy as np
import matplotlib.pyplot as plt
from scipy.stats import norm

data=np.genfromtxt('sample.dat')
x_axis = np.arange(-10, 10, 0.001)
plt.plot(x_axis, norm.pdf(x_axis,0,2))
plt.hist(data,density=True)
plt.title('PDF real vs datos de sample.dat')
plt.show()
