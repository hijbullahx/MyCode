
def calc():
   x=[]
   y=[]
   a=int(input())
   x=list(map(int,input().split()))
   y=list(map(int,input().split()))
   result = [a*b  for a,b in zip(x,y)]
   result_sum=sum(result)
   y_sum=sum(y)
   f_result=float(result_sum/y_sum)
   print(f"{f_result:.1f}")
   
calc()