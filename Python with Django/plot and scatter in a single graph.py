import matplotlib.pyplot as plt
plt.plot([1,2,3,4], [1,4,9,16], label='line', color='red', linewidth=2)
plt.scatter([1,2,3,4], [5,10,0,11], label='scatter',color='green', linewidth=2)
plt.title('Line and Scatter Diagram')
plt.xlabel('X-axis')
plt.ylabel('Y-axis')  
plt.legend()
plt.grid()
plt.show()  