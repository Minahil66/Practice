"""Function printing python version."""

def steps(number):
    copy=number
    count=0
    if number==1:
        return 0
    if number<=0:
        raise ValueError("Only positive integers are allowed")
    while copy!=1:
        if copy%2==0:
            copy//=2
        else:
            copy=copy*3+1
        count+=1
    return count
