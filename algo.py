residents= []
houses = int(input("Number of houses:"))

for i in range(houses):
    residents_per_house= int(input("no of residents:"))
    residents.append(residents_per_house)  
print("total residents:",sum(residents))


