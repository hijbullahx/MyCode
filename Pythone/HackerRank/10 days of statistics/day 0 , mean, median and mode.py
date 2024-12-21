from statistics import mean, median, mode, StatisticsError 
from collections import Counter
n=int(input())
x=list(map(int,input().split()))
print(f"{mean(x):.1f}")
print(f"{median(x):.1f}")
frequency = Counter(x)
max_frequency = max(frequency.values())
modes = [k for k, v in frequency.items() if v== max_frequency]
print(f"{min(modes)}")