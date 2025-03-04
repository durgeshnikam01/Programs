arr=[1,3,5,7,9,12,14,15,17,19,20]
left = 0
right = len(arr) - 1

# Display the array element
for i in range(len(arr)):
    print(arr[i])

target = int(input("Enter any number from the above list: "))

# Binary search implementation
while left <= right:
    mid = left + (right - left) // 2
    
    if target == arr[mid]:
        print(f"Element {target} is found at index {mid}.")
        break
    elif target < arr[mid]:
        right = mid - 1
    else:
        left = mid + 1
else:
    print(f"Element {target} is not found in the list.")