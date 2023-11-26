/*
Name:Suresh Kumar
Date:23/11/2023
Description:Steganography
Input:./a.out -e beautiful.bmp secret.txt stego.bmp
Output:Selected encoding
       Read and validate encode arguments is a success
       ############# Started Encoding #############   
       Open files is a successfully
       width = 1024
       height = 768
       Check capacity is successfully
       Copied bmp header successfully
       Encoded magic string successfully
       Encoded secret file extn size successfully
       Encoded secret file extn successfully
       Encoded secret file size successfully
       Encoded secret file data successfully
       Copied remaining data successfully
       <--------Completed encoding-------->
Input:./a.out -d stego.bmp decode.txt
Output:Selected decoding
       Read and validate decode arguments is a success
       ############### Started Decoding ##############
       Open files is a successfully
       Decoded magic string Successfully
       Decoded file extension size Succesfully
       Decoded Secret File Extension Succesfully
       Decoded secret file size Successfully
       Decoded secret file data Succuessfully
       <---------Completed decoding--------->
*/

#include <stdio.h>
#include <string.h>
#include "encode.h"
#include "types.h"
#include "common.h"
#include "decode.h"

/* Passing arguments through command line arguments */
int main(int argc, char *argv[])
{
    // Function call for check operation type
    if (check_operation_type(argv) == e_encode)
    {
        printf("Selected encoding\n");
        // Declare structure variable
        EncodeInfo encInfo;
        // Read and validate encode arguments
        if (read_and_validate_encode_args(argv, &encInfo) == e_success)
        {
            printf("Read and validate encode arguments is a success\n");
            printf("############# Started Encoding #############\n");
            // Function call for encoding
            if (do_encoding(&encInfo) == e_success)
            {
                printf("<--------Completed encoding-------->\n");
            }
            else
            {
                printf("Failed to encode\n");
                return e_failure;
            }
        }
        else
        {
            printf("Read and validate encode arguments is a failure\n");
            return e_failure;
        }
    }
    // Function call for check operation type
    else if (check_operation_type(argv) == e_decode)
    {
        printf("Selected decoding\n");
        // Declare structure variables
        DecodeInfo decInfo;
        if (read_and_validate_decode_args(argv, &decInfo) == d_success)
        {
            printf("Read and validate decode arguments is a success\n");
            printf("############### Started Decoding ##############\n");
            // Function call for do decoding
            if (do_decoding(&decInfo) == d_success)
            {
                printf("<---------Completed decoding--------->\n");
            }
            else
            {
                printf("Failed to decode\n");
                return e_failure;
            }
        }
        else
        {
            printf("Read and validate decode arguments is a failure\n");
            return e_failure;
        }
    }
    else
    {
        printf("Invalid option\nKindly pass for\nEncoding: ./a.out -e beautiful.bmp secret.txt stego.bmp\nDecoding: ./a.out -d stego.bmp decode.txt\n");
    }
    return 0;
}
