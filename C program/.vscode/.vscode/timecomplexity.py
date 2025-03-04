#constant complexity
print("Hello Durgesh")



#linear complexity
n=int(input("Enter thw number"))
for i in range(n):
    print(i)

#On2 complexity
n=int(input("Enter the number for Big O(n2):"))
for i in range(n):
  for j in range(n):
    print(i,j)
