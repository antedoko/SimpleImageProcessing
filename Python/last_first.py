with open("grayscale.txt", "r") as f_in:
    # Read in the contents of the input file
    contents = f_in.read()

# Split the contents into individual lines
lines = contents.splitlines()

# Reverse the order of the lines
lines.reverse()

# Join the reversed lines back together into a single string
new_contents = "\n".join(lines)

with open("grayscale.txt", "w") as f_out:
    # Write the reversed contents to the output file
    f_out.write(new_contents)