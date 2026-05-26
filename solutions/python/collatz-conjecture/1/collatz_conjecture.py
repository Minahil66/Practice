def steps(number):
    copy=number
    i=0
    if number<=0:
        raise ValueError("Only positive integers are allowed")
    while copy!=1:
        if copy%2==0:
            copy//=2
        else:
            copy=copy*3+1
        i=i+1
    return i
