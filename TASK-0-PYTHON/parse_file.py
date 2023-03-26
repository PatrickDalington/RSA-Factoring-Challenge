#!/usr/bin/python3
from factorize import factorize


def parse_file(file_name):

    line_list = []
    file_handle = open(file_name, "r")

    # rids the file lines of the new line character
    line_list = file_handle.read().splitlines()

    # convert the values on file lines to int
    for i in range(len(line_list)):
        line_list[i] = int(line_list[i])

    # call factorize function to find the factors of numbers in list
    factorize(line_list)

    file_handle.close()
