import numpy as np
import matplotlib.pyplot as plt
x=np.linspace(0,10,100)
y=np.sin(x)
plt.figure(figsize=(10,5))
plt.plot(x,y, label='sin(x)', color='red', linewidth=2)
plt.title('Sinewave')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.legend()
plt.grid()
plt.show()

