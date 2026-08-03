#problem 3
#write a function gcdlcm(),which will take two integer (a,b)as input and return the GCD and LCM OF THESE two Make sure that the default value b is 1.
def gcdlcm(a,b=1):
    if(a==0):
        return b
    else:
        return gcd(b%a,a)
def lcm(a,b):
    if a==0 or b==0:
        return 0
    else:
        return(a*b)/gcd(a,b)
print ("")