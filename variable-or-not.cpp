#include<iostream>>
#include<stdio.h>
#include<conio.h>
#include<string.h>
using namespace std;
int main()
{
    int length,space_count=0,total_count=0;
    char variable_array[100];
    gets(variable_array);
    length=strlen(variable_array);
    for( int i=1;i<=31;i++)
    {
        if(variable_array[i]==' ')
        {
            space_count++;
            total_count=space_count;
        }
    }
    if(total_count==0 && length<=31)
    {
        if(variable_array[0]>='a' && variable_array[0]<='z' || variable_array[0]=='_')
        {
            cout<<"This Is A Variable \n";
        }
        else if (variable_array[0]>='A' && variable_array[0]<='Z' || variable_array[0]=='_')
        {
            cout<<"This Is A Variable \n ";
        }
        else if(variable_array[0]=='$')
        {
            cout<<"This Is A PHP Variable \n";
        }
        else
        {
            cout<<"This Is Not Variable \n";
        }
    }
    else
    {
        cout<<"This Is Not Variable \n";
    }
    return 0;
}

