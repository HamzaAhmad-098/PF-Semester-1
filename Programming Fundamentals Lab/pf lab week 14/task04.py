def num_lenght(number):
    count = 0
    for c in number:
        count=count+1
    return count        
num = input("enter a number")
print("Lenght of ",num," is",num_lenght(num))