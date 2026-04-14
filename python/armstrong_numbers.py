"""Module providing a function printing python version."""

def is_armstrong_number(number):
    return number==sum(int(n)**len(str(number)) for n in str(number))
#oneliners in python
#generator expressions, syntax: sum(expression FOR items in ITERABLE)
