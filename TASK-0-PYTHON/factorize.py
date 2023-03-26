#!/usr/bin/python3

def factorize(list_items=[]):

    factor2 = 0

    for i in range(len(list_items)):
        for factor1 in range(2, list_items[i]):
            if list_items[i] % factor1 == 0:
                factor2 = list_items[i] // factor1
                if factor1 > factor2:
                    print("{}={}*{}".format(list_items[i], factor1, factor2))
                else:
                    print("{}={}*{}".format(list_items[i], factor2, factor1))
                break
