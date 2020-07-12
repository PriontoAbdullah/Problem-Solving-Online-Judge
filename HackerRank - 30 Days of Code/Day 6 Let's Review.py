# Enter your code here. Read input from STDIN. Print output to STDOUT
test_case = int(input())

for i in range(test_case):
    text_string = input()
    even_char = ''
    odd_char = ''

    for j in range (len(text_string)):
        if j % 2 == 0:
            even_char += text_string[j]
        else:
            odd_char += text_string[j]

    print(f'{even_char} {odd_char}')
