def sub(arr):
  n=len(arr)
  for i in range(1, n+1):
    for j in range(1, i+1):
      print(arr[i:j])

a=list(map(int,input().split()))
sub(a)