# class Stu:
#     def __init__(self, name, marks):
#         self.name = name
#         self.marks = marks

#     def get_avg(self):
#         total = sum(self.marks)
#         print("hi", self.name, "your avg score is:", total / len(self.marks))

# s1 = Stu("tony stark",[99,98,97])
# s1.get_avg()

# class Account:
#     def__init__(self,bal,acc):
#     self.balance = bal
#     self.account_no = Acc
 
# acc1= Account(1000 ,12345)
# print(acc1.balance)
# print(acc1.account_no)


#BANKING SYSTEM
class Account:
    def __init__(self,bal,acc):
     self.balance =bal
     self.account_no=acc

    def debit(self,amount):
        self.balance -= amount
        print("Rs.",amount,"was debited")
        print("total balance = ",self.get_balance())

    def credit(self,amount):
        self.balance += amount
        print("Rs.",amount,"was credited")
        print("total balance= ",self.get_balance())

    def get_balance(self):
        return self.balance
acc1 = Account(10000,12345)
acc1.debit(1000)
acc1.credit(500)
acc1.credit(40000)