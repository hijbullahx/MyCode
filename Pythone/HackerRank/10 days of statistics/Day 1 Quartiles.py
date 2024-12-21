from statistics import median
def quar():
    a=int(input())
    arr=list(map(int,input().split()))
    arr.sort()
    l_arr=len(arr)
    h_arr = l_arr//2
    if l_arr%2!=0:
        ha_arr= arr[:h_arr]
        ua_arr= arr[h_arr+1:]
        m_val=arr[h_arr]
    else:
        ha_arr= arr[:h_arr]
        ua_arr= arr[h_arr:]
        m_val=median(arr)
    print(int(median(ha_arr)))
    print(int((m_val)))
    print(int(median(ua_arr)))
quar()