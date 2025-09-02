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


#problrm 10
str="I love code in python"
words= str.split()
print(len(words))