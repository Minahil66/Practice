"""Module providing a function printing python version."""

def leap_year(year):
    if year%400==0:
        return True
    if year%4==0 and year%100!=0:
        return True
    return False
#onliner
#def leap_year(year):
  #  return (year%4==0 and year%100!=0) or year%400==0