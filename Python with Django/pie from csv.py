import pandas as pd

import matplotlib.pyplot as plt

# Load data from CSV file
data = pd.read_csv('G:/My Drive/Programming/Python with Django/10000 Student_Grades_List.csv')

# Print the column names to verify
print(data.columns)

# Assuming the CSV has two columns: 'Category' and 'Value'
# Replace 'Category' and 'Value' with the actual column names from the CSV
categories = data['Category']
values = data['Value']

# Create a pie chart
plt.figure(figsize=(10, 6))
plt.pie(values, labels=categories, autopct='%1.1f%%', startangle=140)
plt.title('Pie Chart from CSV Data')
plt.axis('equal')  # Equal aspect ratio ensures that pie is drawn as a circle.

# Save the pie chart as an image file
plt.savefig('pie_chart.png')

# Show the pie chart
plt.show()