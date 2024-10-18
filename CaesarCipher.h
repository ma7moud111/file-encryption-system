//
// Created by Eng.M on 11/05/2024.
//

#ifndef TASK1CODEALPHA_CAESARCIPHER_H
#define TASK1CODEALPHA_CAESARCIPHER_H

/********************************* INCLUDES ***************************/
#include <iostream>
#include <cstdint>
#include <fstream>
#include <vector>
#include <algorithm>
/***************************** NAMESPACES *******************************/
using namespace std;

/******************************* DEFINES ******************************/
#define NO_OF_ALPHABETS              26          // Number of English alphabets
#define MAX_ENCRYPTION_KEYS          255
#define ENCRYPTION_KEY               3

/* encrytion/decryption options */
#define ENCRYPT_TEXT        1
#define DECRYPT_TEXT        2
#define ENCRYPT_FILE        3
#define DECCRYPT_FILE       4

/*************************** VARIABLES ********************************/
class CaesarCipher_t{

private:
    uint8_t encryptionKey = ENCRYPTION_KEY;
    char letter;

public:

    string encrypt_text(string text,uint8_t key);
    string  decrypt_text(string text,uint8_t key);
    void encrypt_file(string file_name,uint8_t key);
    void decrypt_file(string file_name,uint8_t key);
    bool cmp(int a, int b);
    vector<int> Sort_Even_Odd(vector<int> v);

};


#endif //TASK1CODEALPHA_CAESARCIPHER_H
