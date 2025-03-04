arr = [1, 3, 5, 7, 9, 12, 14, 15, 17, 19, 20]
left = 0
right = len(arr) - 1

# Display the array elements
print("Array elements:", arr)

target = int(input("Enter any number from the above list or a new number to insert: "))

# Binary search implementation
found = False
while left <= right:
    mid = left + (right - left) // 2
    
    if target == arr[mid]:
        print(f"Element {target} is found at index {mid}.")
        found = True
        break
    elif target < arr[mid]:
        right = mid - 1
    else:
        left = mid + 1

# If the element is not found, insert it in the correct position
if not found:
    arr.insert(left, target)
    print(f"Element {target} is not found in the list. It has been inserted at index {left}.")
    print("New array elements:", arr)