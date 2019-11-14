import sys

def get_input():
    input = sys.stdin.readlines()[0].split()
    if len(input) == 2:
        input.append(input[1])
        input[1] = ""
    return input

def print_char(to_send):
    print(to_send.lower())
    sys.exit()

# You should write your code in this function. input is a list of 3 items. input[0] is
# the current state. This is in the form of a string in which each character is either
# a '_' character if the letter has not been guessed or the correct character. Example:
# if the word to be guessed is "apple" and you have previously guessed 'a' and 'l', then
# state will appear as "a__l_"
def user_code(input):
    # YOUR CODE HERE

print_char(user_code(get_input()))