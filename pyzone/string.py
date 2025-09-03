#problem 1
# str="hello"
# rev=str[::-1]
# print(rev)

# problem 2
# str=input("")
# if str[::-1] == str:
#     print("The string is palindrom")
# else:
#     print("Stirng is not palindrom")

#problem 3
# str1=("aeiou")
# str2=("apple")
# count=0
# for vow in str2:
#     if vow in str1:
#         count +=1
# print(count)

#problem 4
# str1 = "Python"
# upp =str1.upper()
# low =str1.lower()
# print(upp)
# print(low)

#problem 5
# str1="hello world"
# rep=str1.replace(" ","_")
# print(rep)

#problem 6
# str1="banana"
# freq={}
# for ch in str1:
#     freq[ch]=freq.get(ch, 0) +1 
# print(freq)

#problem 7
# str1=input("")
# freq={}
# for ch in str1:
#     freq[ch]=freq.get(ch,0) +1
# print(freq)

#problem 8
# str1="apple"
# str2= "ap"
# if str2 in str1:
#     print("True")
# else:print("False")

#problem 9 
# str1="abcd123f"
# result=""
# for ch in str1:
#     if not ch.isdigit():
#         result += ch
# print(result)


# #problrm 10
# str="I love code in python"
# words= str.split()
# print(len(words))

#problem 11
# str= "hello World"
# cap=str.capitalize()
# print(cap)

#problem 12 .isalpha()fun is used to check the numbers in string
# str= "Python3"
# if str.isalpha():
#     print(True)
# else:
#     print(False)

#problem 13
# str="a b c d"
# space= str.replace(" ","")
# print(space)

#problem 14
# str="I love python programming"
# words =str.split()
# longest= max(words,key=len)
# print(longest)

#problem 15
# str="pYthOn"
# swp=str.swapcase()
# print(swp)

#problem 16
# str="HelloWorld"
# upper=0
# lower=0
# for ch in str:
#     if ch.isupper():
#         upper +=1
#     elif ch.islower():
#         lower +=1
# print("UpperCase:",upper)
# print("LowerCase:",lower)

#problem 17
# str=input("Enter the string:",)
# upper=0
# lower=0

# for ch in str:
#     if ch.isupper():
#         upper +=1
#     elif ch.islower():
#         lower +=1
# print("UpperCase:",upper)
# print("LowerCase:",lower)

#problem 18
# str="banana"
# result=""

# for ch in str:
#     if ch not in result:
#         result += ch
# print(result)

#problem 19
# str=input("Enter first string:")
# str2=input("Enter second string:")
# if str[-2:] == str2[-2:]:
#     print("True")
# else:print("False")

#problem 20
# str= "listen"
# str2="silent"

# if sorted(str) == sorted(str2):
#     print(True)
# else:
#     print(False)

#problem 21
# str1="hello"
# vowels="aeiouAeiou"
# result=""
# for ch in str1:
#     if ch in vowels:
#         result +="*"
#     else:
#         result += ch

# print(result)

# problem 22
# str="An apple is on the table"
# vowels="aeiouAEIOU"
# words=str.split()
# result=[]
# for word in words:
#     if word[0] in vowels:
#         result.append(word)

# print(result)

