# #Define the class
# class Employee:
 
#   #Initialize the values
#   def __init__(self, name, age, salary):
#     self.name = name
#     self.age = age
#     self.salary = salary
 
#   #Define the member function
#   def getInfo(self):
#     print("Name:", self.name)
#     print("Age:", self.age)
#     print("Salary:", self.salary)

 
# #Create objects
# emp1 = Employee("John", 32, 40000)
# emp2 = Employee("Smith", 28, 60000)
 
# #Call the member function
# emp1.getInfo()
# print("\n")
# emp2.getInfo()
x = int(input("Enter a Number : "))
def fact(x):
  if x == 1:
    return 1
  else:
    return (x * fact(x-1))
    # print(f"Factorial = {fact(x)}")
print(fact(x))
