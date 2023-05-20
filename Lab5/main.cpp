#include<iostream>
using namespace std;
#include<vector>
#include<chrono>
void Insertionsort(vector<int>&a)
{
    int values;
    int i;
    int j;
    int n=a.size();
    for(i=1;i<n;i++)
    {
        values = a[i];
        j = i-1;
 
        while(j>=0 && a[j]>values)
        {
            a[j+1] = a[j];
            j=j-1;
        }
        a[j+1] = values;
 
    }
}
int main()
{
    vector<int>a;
    srand(time(0));
    auto start = chrono::system_clock::now();
    for(int i=0;i<10000;i++)
    {
        int rndm = rand()%100+1;
        a.push_back(rndm);
    }
    Insertionsort(a);
    auto end =chrono::system_clock::now();
    std::chrono::duration<double> elapsed_seconds = end - start;
    std::cout << "Time taken = " << elapsed_seconds.count() << " secs" << endl;
    for(int i=0;i<a.size();i++)
    {
        cout<<a[i]<<" ";
    }
 
}