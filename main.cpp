#include<iostream>
using namespace std;

void inputarray(int ,int []);
void printarray(int [],int );
void questions(int []);
int indexrangesum(int , int, int []);
int particularindexsum(int [], int[]);


int main()
{
    int var_x;
    int mainarr[100];
    int indexarr[50];
    cout<<"Kindly enter size of the array: ";
    cin>>var_x;
    inputarray(var_x ,mainarr);
    questions(mainarr);
    return 0;
}



void inputarray(int size, int arr1[])
{
    int ele;
    cout<<"Enter elements: \n";
    for(int i=0;i<size;i++)
    {
        cin>>ele;
        arr1[i] = ele;
    }
    printarray(arr1 , size);
    //cout<<"Done";
}

void printarray(int a[],int size)
{
    cout<<"[";
    for(int i=0;i<size;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<"]"<<endl;
}

void questions(int a[])
{
    int final,que_var,x,y;
    char ch='y';
    while(ch=='y'){
    cout<<"Print the sum of subarray\n";
    cout<<"Press 1 for selecting index range\nPress 2 for selecting particular range\n";
    cout<<"Input : ";
    cin>>que_var;

    switch(que_var)
    {
    case 1:
            cout<<"Enter Start Index And ending Index:\n";
            cin>>x>>y;
            cout<<"Sum = "<<indexrangesum(x,y,a)<<endl;
            cout<<"Wanna choose again press y else press n to exit\n";
            cout<<"Input: ";
            cin>>ch;
            break;

    case 2:
            int indexarraysize , indexarray[50];
            cout<<"Pls enter the size of array where index wiil be stored: ";
            cin>>indexarraysize;
            inputarray(indexarraysize,indexarray);
            final=particularindexsum(indexarray,a);
            cout<<"Sum = "<<final<<endl;
            cout<<"Wanna choose again press y else press n to exit\n";
            cout<<"Input: ";
            cin>>ch;
            break;

    default:
            cout<<"Wrong Choice\n";
            cout<<"Pls select agian else press n to exit\n";
            cout<<"Input: ";
            cin>>ch;
            break;

    }
    }
}



int indexrangesum(int index1, int indexlast, int sourcearray[])
{
    int sum=0;
    if(index1<indexlast)
    {
    cout<<"Subarray selected: [";
    for(int i=index1-1;i<indexlast;i++)
    {
        cout<<sourcearray[i]<<" ";
    }
    cout<<"]\n";
    for(int i=index1-1;i<indexlast;i++)
    {

        sum+=sourcearray[i];
    }
    }
    else{
        cout<<"index1>indexlast error\n";
    }

    return sum;
}





int particularindexsum(int inexarr[],int sorcearra1y[])
{
    int i,j,sum=0;

    cout<<"Particularly selected elements of the original array: \n";
    cout<<"[";
    for(i=0;i<sizeof(inexarr);i++)
    {
        int ele = inexarr[i];

        for(j=0;j<sizeof(sorcearra1y);j++)
        {
            if(j==ele-1)
            {
                cout<<sorcearra1y[ele-1]<<" ";
            }
            else{
                continue;
            }
        }


    }
    cout<<"]\n";

    for(i=0;i<sizeof(inexarr);i++)
    {
        int ele = inexarr[i];
        for(j=0;j<sizeof(sorcearra1y);j++)
        {
            if(j==ele-1)
            {
                sum+=sorcearra1y[ele-1];
            }
            else{
                continue;
            }
        }


    }
    return sum;
}

