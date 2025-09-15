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