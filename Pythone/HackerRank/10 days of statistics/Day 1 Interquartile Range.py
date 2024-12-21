from statistics import median
a=int(input())
el=list(map(int,input().split()))
fr=list(map(int,input().split()))
data=[]
for i in range(len(el)):
    data.extend([el[i]]*fr[i])
data.sort()
len_data=len(data)
if len_data%2==0:
    mid_val=len_data//2
    l_data=data[:mid_val]
    u_data=data[mid_val:]
if len_data%2!=0:
    mid_val=len_data//2
    l_data=data[:mid_val]
    u_data=data[mid_val+1:]
med_l_data=median(l_data)
med_u_data=median(u_data)
interquartile=med_u_data-med_l_data
print(f"{interquartile:.1f}")