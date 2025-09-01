char=input("Enter the product:")
char1=input("Enter the Quantity:")
products={"elecronics":{
    "washing machine":25000,
    "AC(20w)":30000,
    "DTH box":2500,
    "mobiles":{ 
    "redmi mobile":45000,
    "apple mobile":150000,
    "oppo mobile":50000,
    "samsung mobiles":60000,
    "fruits":{
        "banana":30,
        "apple/":100,
        "oranges":80,
    "vegitables":{
        "brinjal":50,
        "tomato":40,
        "ladifinger":60,
        "collyflower":80,
    }
    }
    }
}
}
print("Total procucts in list:",products)
print(products.values())
print(products.items())
