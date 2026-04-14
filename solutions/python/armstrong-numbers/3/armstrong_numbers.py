"""Module providing a function printing python version."""

def is_armstrong_number(number):
    return number==sum(int(num)**len(str(number)) for num in str(number))
