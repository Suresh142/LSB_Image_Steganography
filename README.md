# LSB_Image_Steganography
## Overview

This C program implements a basic LSB (Least Significant Bit) image steganography technique. LSB steganography involves hiding information in the least significant bits of the pixel values in an image.

## Features

- Embed text data into an image using LSB steganography.
- Extract hidden text data from a steganographic image.

## Usage

### Compilation

Compile the program using a C compiler. For example:

```bash
gcc *.c
./a.out -e beautiful.bmp secret.txt stego.bmp  --> For Encoding
./a.out -d stego.bmp decode.txt  --> For Decoding ```

**## Contributing**

Feel free to contribute to the project by opening issues or submitting pull requests.
