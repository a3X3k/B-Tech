import array as arr


def creation(arr1):
    arr1.append(10)
    arr1.insert(0, 0)
    arr1.insert(2, 3)
    arr1.insert(1, 1)


def deletion(arr3):
    arr3.pop(0)
    arr3.pop()
    arr3.pop(5)
    arr3.remove(6)


def search(arr4):
    f = 0
    for i in arr4:
        if i == 2:
            print("\n2 Element Found")
            f = 1
            break
    if f == 0:
        print("\n2 Element Not Found")

    f = 0
    for i in arr4:
        if i == 0:
            print("0 Element Found")
            f = 1
            break
    if f == 0:
        print("0 Element Not Found")


def display(arr2):  # Traversal
    for i in range(0, len(arr2)):
        print(arr2[i], end=" ")


array = arr.array('i', [2, 4, 6, 8])

creation(array)  # Creating the Array
deletion(array)  # Deletion of the Elements from Array
display(array)  # Traversal
search(array)  # Searching
