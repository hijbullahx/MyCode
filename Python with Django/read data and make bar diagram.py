import matplotlib.pyplot as plt
import pandas as pd
data=pd.read_csv(r'G:/My Drive/Programming/Python with Django/10000 Student_Grades_List.csv')
t_data=data.head(10)
t_data['Grade'] = pd.to_numeric(t_data['Grade'], errors='coerce')
t_data['Student ID'] = t_data['Student ID'].astype(str)
t_data.plot.bar(x='Student ID', y='Grade', color='red', figsize=(10,5))
plt.title('Student Grades')
plt.xlabel('Student ID')
plt.ylabel('Grade')
plt.grid()
plt.legend()
plt.show() 
