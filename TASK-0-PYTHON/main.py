#!/usr/bin/python3
import sys
import os.path
from parse_file import parse_file


def main():

    file_name = ""
    arg_num = len(sys.argv)

    # check if too few arguments were supplied
    if arg_num != 2:
        print("Usage: factors <file>")
        return 1

    # check if file exists
    if not os.path.isfile(sys.argv[1]):
        print("Error: File < {} > does not exist!".format(sys.argv[1]))
        sys.exit(1)

    file_name = sys.argv[1]
    parse_file(file_name)

    return 0


if __name__ == "__main__":
    main()
