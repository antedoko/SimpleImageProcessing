# ----------->>> Conversion from the hex to the png
import cv2
import numpy as np

# Input to define the nuber of bytes per pexil
BPP = 3

# Load the hex data from the text file
with open('shrink.txt', 'r') as f:
    hex_data = f.read().replace('\n', '')

if (BPP == 3):
    dvsr = 6
else:
    dvsr = 1

num_pixels = len(hex_data) // 6
width = int(num_pixels ** 0.5)
height = num_pixels // width

# Convert the hex data to a NumPy array of uint8 values
data = np.frombuffer(bytes.fromhex(hex_data), dtype=np.uint8)

# Reshape the data into an array of RGB pixels
data = data.reshape((height, width, 3))

# Convert the array to an RGB image
img = cv2.cvtColor(data, cv2.COLOR_RGB2RGBA)
cv2.imwrite('image_bug.png', img)
