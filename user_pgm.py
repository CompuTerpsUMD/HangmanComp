import sys

def get_input():
    input = sys.stdin[0].split()
    input[2] = int(input[2])

def print_char(to_send):
    print(to_send.lower())
    sys.exit()

to_send = ''

# YOUR CODE HERE

print_char(to_send)
