def oddish_evenish(number):
    sum = 0
    for c in number:
        sum = sum + int(c)
    if(sum%2==0):
        return "evenish"
    else:
        return "oddish"
print(oddish_evenish(input("Enter a number")))