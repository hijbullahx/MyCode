def array():
  arr=[]
  size=int(input())
  for i in range(size):
    elements=int(input())
    arr.append(elements)
  print(','.join(map(str,arr)))
array()
