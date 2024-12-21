a=list(map(int,input().split()))
s_time=a[0]
e_time=a[1]
if a[0]>12 and a[1]<12:
    print(f"O JOGO DUROU {(24-a[0])+a[1]} HORA(S)")
elif a[0]<12 and a[1]>12:
    print(f"O JOGO DUROU {(a[1]-a[0])} HORA(S)")
else:
    print(f"O JOGO DUROU {(24)} HORA(S)")