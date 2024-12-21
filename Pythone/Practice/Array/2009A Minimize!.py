t=int(input())
def test():
  for i in range(t):
    c=2
    a=list(map(int,input().split()))
    result=((c-a[0])+(a[1]-c))
    print(result)
test()