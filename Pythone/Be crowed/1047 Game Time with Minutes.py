a = list(map(int, input().split()))
s_h = a[0] 
s_m = a[1]  
e_h = a[2]  
e_m = a[3]  
t_s = (s_h * 60) + s_m  
t_e = (e_h * 60) + e_m  
if t_s == t_e:  
    print(f"O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)")
else:
    if t_e > t_s: 
        total_minutes = t_e - t_s
    else:
        total_minutes = (24 * 60 - t_s) + t_e
    hours = total_minutes // 60
    minutes = total_minutes % 60
    print(f"O JOGO DUROU {hours} HORA(S) E {minutes} MINUTO(S)")
