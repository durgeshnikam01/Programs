# thisdict = {
#   "brand": "Ford",
#   "model": "Mustang",
#   "year": 1964
# }
# print(thisdict["brand"])
# print(len(thisdict))
# x = thisdict.get("model")

# car ={ 
#     "brand": "Ford",
#     "model": "Mustang",
#     "year" : 1964
# }
# x = car.items()
# print(x)
# car["year"]=2020
# print(x)

# thisdict = {
#   "brand": "Ford",
#   "model": "Mustang",
#   "year": 1964
# }
# if "model" in thisdict:
#     print("Yes,model is in dict")

# for x in thisdict.values():
#   print(x)

# for x in thisdict.keys():
#   print(x)

# for x, y in thisdict.items():
#   print(x, y)

# myfamily={
#     "child1":{
#         "name":"Email",
#         "year":2004
#     },
#     "child2":{
#     "name":"Tobias",
#     "year"  : 2007
#     },
#     "child3":{
#         "name":"Linus",
#         "year":2007
#     }
# }

# child1={
#     "name":"Email",
#     "year":2004
# }
# child2 = {
#     "name" : "Tobias",
#     "year" : 2004
# }
# child3 ={
#     "name" :"Linus",
#     "year" :2007
# }
# myfamily = {
#     "child1":child1,
#     "child2":child2,
#     "child3":child3
# }
# print(myfamily["child2"]["name"])

# for x, obj in myfamily.items():
#   print(x)

#   for y in obj:
#     print(y + ':', obj[y])

# thisdict = {
#   "brand": "Ford",
#   "model": "Mustang",
#   "year": 1964
# }
# del thisdict["model"]
# print(thisdict)

# for x in thisdict.keys():
#   print(x)


# student ={
#     "name":"Durgesh Nikam",
#     "age" :21,
#     "grade":"A"
# }
# print(student.get("name"))

# car = {"brand": "Toyota", "model": "Corolla", "year": 2020}
# car["year"]=2022
# print(car)

# book = {"title": "Python", "author": "Guido"}
# book["year"]=1991
# print(book)

# fruits = {"a": "apple", "b": "banana", "c": "cherry"}
# fruits.pop("b")
# print(fruits)

# marks = {"Alice": 85, "Bob": 90, "Charlie": 78}
# for x in marks.values():
#     print(x)

# for name,score in marks.items():
#     print(f"{name}->{score}")

# person = {"name": "John", "age": 30}
# print(person)
# person["age"]=25
# print(person)

# family = {
#   "child1": {"name": "Tom", "age": 5},
#   "child2": {"name": "Jerry", "age": 3}
# }
# print(family["child2"]["age"])


# animals = {"dog": 4, "cat": 4, "spider": 8}
# print(len(animals.keys()))

# dict1 = {"a": 1, "b": 2}
# dict2 = {"c": 3, "d": 4}
# dict1.update(dict2)
# print(dict1)

# student = {"name": "Alice", "age": 20}
# if "age" in student:
#         print("Yes") 
# else:
#         print("No")

# nums = (10, 20, 30, 40)
# print(nums[1])

# point = (5, 7)
# print("x:",point[0])
# print("y:",point[1])

# animals = ("lion", "tiger", "bear")
# for x in animals:
#     print(x)

# x=(1, 2, 2, 3, 4)
# print(x.count(2))

# x=(1, 2, 3)
# x=list(x)
# print(type(x))

#DICTIONARY QUESTIONS
# student = {"name": "Alice", "age": 20}
# print(student["name"])

# student["age"]=21
# print(student)

# student["grade"]="A"
# print(student)

# family = {
#     "child1": {"name": "Tom", "age": 5},
#     "child2": {"name": "Jerry", "age": 3}
# }

# print(family["child1"],"name")
