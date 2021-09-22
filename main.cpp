#include <iostream>

using namespace std;


int main() {

    char s[]="parosa paratla szam";
    int h=0;

    for(int i =0; s[i]!='\0';i++)
    {

        if(s[i]!=' ')
            h++;
        else if(h%2!=0)
        {
            for(int j=i-h;j<i;j++)
                s[j]='x';
            h=0;
        }
    }

    cout<<s;


    return 0;
}
