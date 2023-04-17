with open('brightnes_realterm.txt', 'r', encoding='utf-8') as file:
    letters = file.read().strip()

# Reverse the order of the letters and group them in pairs
reversed_letters = ''.join(
    reversed([letters[i:i+2] for i in range(0, len(letters), 2)]))

# Write the reversed letters to a new file in groups of 6 on each line
with open('brightness.txt', 'w', encoding='utf-8') as file:
    for i in range(0, len(reversed_letters), 6):
        file.write(reversed_letters[i:i+6]+'\n')
