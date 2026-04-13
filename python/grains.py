"""Module providing a function printing python version."""

def square(number):
    power=number-1
    if number>64 or number<1:
        raise ValueError("square must be between 1 and 64")
    return 2**power

def total():
    return 2**64-1
