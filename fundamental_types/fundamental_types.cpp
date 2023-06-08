#include <iostream>

using namespace std;

int main(){

    //Floating point types
    float var_float = 1.7;
    double var_double = 7.2;
    long double var_long_double = 7.2;

    //Boolean types
    bool var_bool = true;

    //Character types
    char var_char = 'A';
    wchar_t var_wchar = 'A';
    char16_t var_char16 = 'A';
    char32_t var_char32 = 'A';

    //Integer types
    short int var_short_int = 100;
    int var_int = 100;
    long int var_long_int = 100;
    long long int var_long_long_int = 100;
    
    //Null pointer type
    nullptr_t var_nullptr = NULL;

    //Printing premitive types and respective sizes
    cout<<"Printing premitive types and sizes:"<<endl;
    cout<<endl;
    cout<<" Floating types:"<<endl;
    cout<<"- Size of float("<<var_float<<") type :           "<<sizeof(var_float)<<" bytes"<<endl;
    cout<<"- Size of double("<<var_double<<") type :          "<<sizeof(var_double)<<" bytes"<<endl;
    cout<<"- Size of long double("<<var_long_double<<") type :     "<<sizeof(var_long_double)<<" bytes"<<endl;
    cout<<endl;
    cout<<" Boolean type:"<<endl;
    cout<<"- Size of bool("<<var_bool<<") type :              "<<sizeof(var_bool)<<" bytes"<<endl;
    cout<<endl;
    cout<<" Character types:"<<endl;
    cout<<"- Size of char("<<var_char<<") type :              "<<sizeof(var_char)<<" bytes"<<endl;
    cout<<"- Size of wchar("<<var_wchar<<") type :            "<<sizeof(var_wchar)<<" bytes"<<endl;
    cout<<"- Size of char16("<<var_char16<<") type :           "<<sizeof(var_char16)<<" bytes"<<endl;
    cout<<"- Size of char32("<<var_char32<<") type :           "<<sizeof(var_char32)<<" bytes"<<endl;
    cout<<endl;
    cout<<" Integer types:"<<endl;
    cout<<"- Size of short int("<<var_short_int<<") type :       "<<sizeof(var_short_int)<<" bytes"<<endl;
    cout<<"- Size of int("<<var_int<<") type :             "<<sizeof(var_int)<<" bytes"<<endl;
    cout<<"- Size of long int("<<var_long_int<<") type :        "<<sizeof(var_long_int)<<" bytes"<<endl;
    cout<<"- Size of long long int("<<var_long_long_int<<") type :   "<<sizeof(var_long_long_int)<<" bytes"<<endl;
    cout<<endl;

    return 0;
}