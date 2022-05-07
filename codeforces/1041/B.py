from fractions import Fraction
a,b,x,y=map(int,input().split(' '))
f_int = Fraction(x,y)
print(min(a//f_int.numerator,b//f_int.denominator))
