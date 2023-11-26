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
gcc lsb_steganography.c -o lsb_steganography
./lsb_steganography -e beautiful.bmp secret.txt stego.bmp
./lsb_steganography extract stego.bmp decode.txt
