#include <bits/stdc++.h>

using namespace std;

/*
 * Complete the 'timeConversion' function below.
 *
 * The function is expected to return a STRING.
 * The function accepts STRING s as parameter.
 */

string timeConversion(string s) {

int h1=(int)s[0] - '0';
int h2=(int)s[1] - '0';
int hour= h1*10 + h2 ;
string result="";
if(s[8]=='A'){
    if(hour==12){
        result.append("00");
        for(int i=2;i<=7;i++){
            string temp="";
            temp += s[i];
            result.append(temp);
        }
    }
    else{
        for(int i=0;i<=7;i++){
            string temp="";
            temp += s[i];
            result.append(temp);
        }
    }
}


if(s[8]=='P'){
    if(hour==12){
        for(int i=0;i<=7;i++){
            string temp="";
            temp += s[i];
            result.append(temp);
        }
    }
    else{
        hour=hour+12;
        result.append(to_string(hour));
        for(int i=2;i<=7;i++){
            string temp="";
            temp += s[i];
            result.append(temp);
        }
    }
}
return result;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = timeConversion(s);

    fout << result << "\n";

    fout.close();

    return 0;
}
