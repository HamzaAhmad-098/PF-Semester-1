def area_of_country (countryName , countryArea):
    totalLandMass = 148940000
    percentage = countryArea/totalLandMass*100
    return percentage 
name =input("Enter the name of country")
area = int(input("enter the area of country"))
print(name,"is ", area_of_country(name,area),"% of the total world land mass")