#include<iostream>
using namespace std;
void data(int lnth, int arry[]
);
int main()
{
 
int arry[] = { 0,1,1,1,1,1,1,0,1,1,1,1,1,1,0 };
 
int ind1= 0;
 
int ind2= 0;
 
int ind3 = 0;
 
int arr[2];
 
int ln = sizeof(arry) / sizeof(arry[0]
), f = 0;
 
cout << "Before stuffing: ";
 
for (int m = 0; m < ln; m++)
 
{
    cout << arry[m] <<" ";
}
 
cout << " --- " << ln << " characters";
 
cout << "\n ";
 
f = ln;
 
 
for (ind2= 0; ind2< ln; ind2++)
 
{
 
if (arry[ind2] == 1 && arry[ind2+ 1] != 0)
 
{
    ind1= ind1+ 1;
 
if (ind1== 5)
 
{
 
ind1= ind1+ 1;
 
ln = ln + 1;
 
for (ind3 = ln - 1; ind3 > ind1; ind3--)
 
{
 
arry[ind3] = arry[ind3 - 1];
 
}
 
arry[ind1] = 0;
 
ind1= 0;
 
}

}
 
}
 
cout <<"After stuffing: ";
 
for (int z = 0; z < ln; z++)
 
{
 
cout << arry[z] <<" ";
 
}
cout << " --- " << ln << " characters";
 
cout << "\n";
 
data(ln, arry);

}
void data(int ln, int arry[]
)
{
 
int ay1[8] = { 0,1,1,1,1,1,1,0 };
 
int ln1= 0;
 
int t= 0;
 
int ln2= 0;
 
int l = 0;
 
ln2= ln;
 
ln1= ln + 16;
 
t= ln1 - 8;
 
int arr[ln1];

for (int ind2 = 0; ind2 < 8; ind2++)
 
{
 
arr[ind2] = ay1[ind2];
 
arr[ind2+ t] = ay1[ind2];
 
}
 
arr[8] = arry[0];
 
for (int ind3 = 9; ind3 < t; ind3++)
 
{
 
l = l + 1;
 
arr[ind3] = arry[l];
 
}

cout << "After Framing: ";
 
for (int z= 0; z < ln1; z++)
 
{
 
cout << arr[z] <<" ";
 
}

cout << "\n";

}