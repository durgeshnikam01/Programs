# class Cars:
#     color = "blue"
#     brand= "mercedisa"
#     name= "Durgesh"
# car1=Cars()
# print(car1.color)
# print(car1.brand)
# s1=Cars()
# print(s1.name)

# class Student:
#     def __init__(self,name):
#         self.name =name 
# s1 = Student("sharad")
# del s1.name

class Account:
    def __init__(self,acc_no,acc_pass):
        self .acc_no = acc_no
        self .acc_pass = acc_pass

acc1 =Account("1234","abcd")
print(acc1.acc_no)
print(acc1.acc_pass)