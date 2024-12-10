
import matplotlib.pyplot as plt
import numpy as np








def Lagrange(L: list[list[int]], x: int):
    
    S = 0
    l = len(L[0])
    for i in range(l):
        p = 1
        for j in range(l):
            if(i != j):
                p *= (x-L[0][j])/(L[0][i] - L[0][j])
        S += L[1][i] * p
    return S
   

def PrintLagrange():
    Xla = []
    Yla = []
    for i in range(-1000,1000):
        Xla.append(i)
        Yla.append(Lagrange(X,i))

    plt.plot(Xla,Yla)
    plt.show()



def Hermite(L: list[list[int]], x: int):
    theta = (x-L[0][0])/(L[0][1] - L[0][0])
    h1 = 2*(theta**3)-3*(theta**2) + 1
    h2 = -2*(theta**3)+3*(theta**2)
    h3 = theta**3 - 2*(theta**2) + theta
    h4 = theta**3 - theta**2

    P = L[1][0]*h1 + L[1][1]*h2 + L[2][0]*h3 + L[2][1]*h4
    return P
    



def printHermite(liste: list):
    XHe = []
    YHe = []
    for i in range(-10,10):
        XHe.append(i)
        YHe.append(Hermite(liste,i))
    plt.plot(XHe,YHe)
    plt.show()



    

L = [[-6,8],[-1,3],[-1,2]]
printHermite(L)



    



