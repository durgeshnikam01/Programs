# A=int(input("A: "))
# G=int(input("M/f: "))
# if ((A==1 or A==2) and G=="M"):
#     print("fee is 100")
# elif(A==3 or A==4 and G =="F"):
#     print("fee is 200")
# elif(A==5 and G=="M"):
#     print("fee is 300")
# else:
#     print("no fee")


print("Enter the number:")
n = int(input())
def reverse(num):
    return int(str(num)[::-1])
s1 = n*n
rev = reverse(n)
s2 = rev * rev
    
if  s1 == reverse(s2):
    print("The number is a adams number")
else:
    print("The number is not a adams number")
