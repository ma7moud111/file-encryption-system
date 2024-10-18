//
// Created by Eng.M on 11/05/2024.
//
#include "CaesarCipher.h"


string CaesarCipher_t::encrypt_text(string text, uint8_t key = ENCRYPTION_KEY){
    string enc_text = "";

    for (int i = 0; i<text.size(); i++){
        if(text[i] >= 'a' && text[i] <= 'z'){
            enc_text.push_back(char(int(text[i] + key - 97) % 26 + 97));
        }
        else if(text[i] >= 'A' && text[i] <= 'Z') {
            enc_text.push_back(char(int(text[i] + key - 65) % 26 + 65));
        }

    }
    return enc_text;
}

string CaesarCipher_t::decrypt_text(string text, uint8_t key){
    string dec_text = "";
    for (int i = 0; i<text.size(); i++){
        if(text[i] >= 'a' && text[i] <= 'z'){
            dec_text.push_back(char(int(text[i] + key - 65) % 26 + 65));
        }
        else if(text[i] >= 'A' && text[i] <= 'Z'){
            dec_text.push_back(char(int(text[i] + key - 65) % 26 + 65));
        }
    }
    return dec_text;
}

void CaesarCipher_t::encrypt_file(string file_name, uint8_t key){

    //attempt to open file
    ifstream ifs;
    ifs.open(file_name);

    //verify that the file is actually opened ...
    if(ifs.is_open()){
        ofstream ofs;
        ofs.open("ncrptd_" + file_name);
        ofs << key;
        while(ifs >> letter) {
            if(letter >= 'a' && letter <= 'z'){
                ofs << char(int(letter + key - 97) % 26 + 97);
            }
            else if(letter >= 'A' && letter <= 'Z'){
                ofs << char(int(letter + key - 65) % 26 + 65);
            }
            else{
                ofs << letter;
            }
        }
        ifs.close();
        ofs.close();
    }
    else{
        cout << "ERROR! FILE NOT FOUND!" << endl;
    }

}
void CaesarCipher_t::decrypt_file(string file_name,uint8_t key){

    //attempt to open file
    ifstream ifs;
    ifs.open(file_name);

    //verify that the file is actually opened ...
    if(ifs.is_open()){
        ofstream ofs;
        ofs.open("dcrptd_" + file_name);
        while(ifs >> letter){
            if(letter >= 'a' && letter <= 'z'){
                ofs << char(int(letter - key + 26 - 97) % 26 + 97);
            }
            else if(letter >= 'A' && letter <= 'Z'){
                ofs << char(int(letter - key + 26 - 65) % 26 + 65);
            }
            else{
                ofs << letter;
            }
        }
        ifs.close();
        ofs.close();
    }
    else{
        cout << "ERROR! FILE NOT FOUND!" << endl;
    }

}

//
//bool CaesarCipher_t::cmp(int a, int b){
//    return a % 2 == 0;
//}
//
//vector<int> CaesarCipher_t::Sort_Even_Odd(vector<int> v){
//    sort(v.begin(),v.end(), CaesarCipher_t::cmp);
//}

