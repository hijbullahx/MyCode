import matplotlib.pyplot as plt

# Data
x = [1, 2, 3, 4, 5]
y = [2, 4, 6, 8, 10]

# Plotting
#plt.plot(x, y, marker='o', label='y = 2x')

# Adding labels and title
plt.xlabel('X-axis')
plt.ylabel('Y-axis')
plt.title('Simple Line Graph')

# Adding legend
plt.legend()

# Display the graph
plt.show()
