
#include "CaesarCipher.h"
#include <algorithm>
#include <vector>
#include <traffic.h>
#include <cstdlib>
#include <string_view>

using namespace std;



int main() {

   /* vector<int>v;
    int n;
    cin >> n;
    for(int i = 0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);

    }
    sort(v.begin(), v.end(), cmp);

    for(auto it : v){
        cout << it << ' ';
    }
    cout << endl;*/

    CaesarCipher_t cc;


  //  cin.ignore();


    cc.encrypt_file("input_test2.txt",3);
    cc.decrypt_file("ncrptd_input_test2.txt",3);

    //cc.encrypt_file("input_test2.txt", 3);
   // cout << "file encrypted" << endl;
 //   cc.decrypt_file("ncrptd_input_test2.txt", 3);
   // cout << "file decrypted" << endl;

    return 0;
}
