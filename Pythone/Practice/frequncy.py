def fre(lst):
  count=[]
  for num in lst:
    if num  not in count:
      print(f"{num} = {lst.count(num)}")
      count.append(num)
lst=list(map(int, input().split()))
fre(lst)