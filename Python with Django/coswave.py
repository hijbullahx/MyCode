import numpy as np
import matplotlib.pyplot as plt
x=np.linspace(0,10,100)
y=np.cos(x)
plt.figure(figsize=(10,5))
plt.plot(x,y, label='cos(x)', color='blue', linewidth=2)
plt.title('Cosine wave')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.legend()
plt.grid()
plt.show()