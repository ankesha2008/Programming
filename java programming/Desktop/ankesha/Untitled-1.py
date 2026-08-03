'''year=int(input('Enter the year'))
if(year%400==0):
    print("it is a leap-year")
elif(year%100!=0)and(year%4==0):
    print("it is a leap-year")
else:
    print("it is not a leap-year")'''

# write a python program greatest among three numbers.

'''a=int(input("Enter the first number:"))
b=int(input("Enter the second number:"))
c=int(input("Ennter the third number:"))
if(a>b)and(a>c):
    print("The greatest no is:", a)
if(b>c)and(b>a):
    print("The greatest no is :",b)
else:
    print("the greatest no is:",c)....'''

#in general,an equation of the form ax^2+bx+c=0 is lnown as quadratic equation.accept the value of a,b,and c fro theuser and write a python program to calculate the root of the given quadratic equation.
 import.math
a=int(input("Enter the coefficient of a:"))
b=int(input("Enter the coefficient of b:"))
c=int(input("Enter the coefficient of c:"))
if(a==0):
 print("it is not a quadratic equation")
else:
 D=(b**2)-(4*a*c)
 if(D>0):
  root1=(-b+math.sqrt(D)/2*a)
  root2=(-b+math.sqrt(D/2*a))
  printf("the roots are real and unequal")
  printf("the roots are:",root1,root2)
 elif(D==0):
  root1=(-b)/(2*a)
  root1=root2
  printf("the roots are real and equal")
  printf("the roots are:",root1,root2)
else:
printf("the roots are imaginary")




