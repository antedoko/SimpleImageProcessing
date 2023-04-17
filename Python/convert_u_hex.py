import cv2
import numpy as np

# ----------->>> Conversion from the png to the hex file

# Read the input image
img = cv2.imread('slija.png', cv2.IMREAD_COLOR)

# Convert the image to a 1-dimensional array of RGB pixels
data = img.reshape((-1, 3))

# Convert the RGB values to hex strings
hex_data = [format(int(x), '02x') for x in data.flatten()]

# Join the hex strings into a single string with line breaks after every 3 bytes
hex_data_str = '\n'.join([''.join(hex_data[i:i+3])
                         for i in range(0, len(hex_data), 3)])

# Write the hex data to a text file
with open('input_slija.txt', 'w') as file:
    file.write(hex_data_str)
