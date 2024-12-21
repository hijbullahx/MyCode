#Check if an array is
arr=[]
arr=list(map(int,input("Enter array elements: ").split()))
k=int(input("Enter the number of rotations: "))
#k=k%len(arr)
rotate_arr=arr[k:]+arr[:k]
print(rotate_arr)
