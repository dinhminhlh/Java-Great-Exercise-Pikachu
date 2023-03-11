#include<bits/stdc++.h>
using namespace std;
#define pb push_back
int a[]={10, 80, 30, 90, 40, 50, 70};
int pp(int l,int r){
    int pivot=a[r],top=r;
    r--;
    while (l<=r)
    {
        while (a[l]<pivot&&l<=r) l++;
        while(a[r]>pivot&&l<=r) r--;
        if(l >= r)break;
        swap(a[l],a[r]); 
        l++;r--;
    }
    swap(a[top],a[l]);
    return l;
}
void quick_sort(int l,int r){
    if(l>=r) return;
    int p=pp(l,r);
    quick_sort(l,p-1);
    quick_sort(p+1,r);
}
int main()
{
    quick_sort(0,6);
    for(int i=0;i<7;i++)
        cout<<a[i]<<"\n";
    return 0;
}
