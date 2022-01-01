arr = [1,5,76,4,34,23,90,22]
arr.sort();
print(arr)
size = arr.__len__();
# print(size)
a = int(input("Largest = "))

if(size >= a) :
    print(arr[size - a])