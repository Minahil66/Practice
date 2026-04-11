EXPECTED_BAKE_TIME=40

def bake_time_remaining(time):
    """Calculate the bake time remaining.

    :param elapsed_bake_time: int - baking time already elapsed.
    :return: int - remaining bake time (in minutes) derived from 'EXPECTED_BAKE_TIME'.

    Function that takes the actual minutes the lasagna has been in the oven as
    an argument and returns how many minutes the lasagna still needs to bake
    based on the `EXPECTED_BAKE_TIME`."""
    if time > 40:
        return "Bake time elapsed"
    return 40 - time
def preparation_time_in_minutes(nol):
    """Calculate the preparation time in minutes.

    :param number_of_layers: int - the number of layers in th
    lasagna.
    :return: int - number of layers take times 2 to prepare.

    This function takes an integers representing the number lasagna layers and calculates the 
    preparation time in minutes. """
    return 2*nol
def elapsed_time_in_minutes(nol, ebt):
    """Calculate the elapsed cooking time.

    :param number_of_layers: int - the number of layers in the lasagna.
    :param elapsed_bake_time: int - elapsed cooking time.
    :return: int - total time elapsed (in minutes) preparing and cooking.

    This function takes two integers representing the number of lasagna layers and the
    time already spent baking and calculates the total elapsed minutes spent cooking the
    lasagna. """
    one=nol*2
    return one+ebt
