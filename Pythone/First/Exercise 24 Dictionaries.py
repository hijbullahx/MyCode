student = {
    "Name" : "Md. Taher Bin Omar Hijbullah",
    "Age" : 21,
    "ID" : 22303142,
    "Blood Group" : "O+",
    "Running_Student?" : True
}
print(student.get(input()))

phone = input("Enter Your Phone Number:")
digits = {
    "0" : "Zero",
    "1" : "One",
    "2" : "Two",
    "3" : "Three",
    "5" : "Five",
    "6" : "Six",
    "7" : "Seven",
    "8" : "Eight",
    "9" : "Nine",
    "4" : "Four"
}
output = ""
for ch in phone:
    output+= digits.get(ch, "!") +" "
print(output)