def meal(a:float, b:int, c:int):
    tip=(b/100)*a
    tax=(c/100)*a
    total=a+tip+tax
    print(round(total))
meal_cost=float(input())
tip=int(input())
tax=int(input())
meal(meal_cost,tip,tax)
