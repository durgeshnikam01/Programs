def is_prime():
   if n<=1:
    return "Not prime"
   if n<=3:
    return"Prime"
   if n% 2==0 or n%3==0:
    return"Not prime"

   k= 1
   while True:
     check_1= 6*k-1
     check_2 =6*k+1
    
     if check_1 * check_2>n:
        return"prime"
     if n%check1==0 or n % check_2 == 0:
        return "Not prime"

     k = k +1



n=int(input("Enter a number to the given number is prime or not "))
result= is_prime(n)
print(result)