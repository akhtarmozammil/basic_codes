#include <bits/stdc++.h>
using namespace std;

struct test
{
    int index;
    int a;
    int b;
};

// sort test.a
bool compareA(test A, test B){
    // change the comparison sign for ass and desc
    return  A.a > B.a;
}

//sort test.b with respect to test.a
bool compareB(test A, test B){
    if(A.a == B.a){

        // change the comparison sign for ass and desc
        return A.b < B.b;
    }

    // change the comparison sign for ass and desc
    return A.a > B.a;
}

int main()
{
    int arr[20][2];
    for(int i =0; i<20; i++){
        arr[i][0] = rand()%4;
        arr[i][1] = rand()%4;
    }

    struct test A[20];

    for(int i=0; i<20; i++){
        A[i].index = i;
        A[i].a = arr[i][0];
        A[i].b = arr[i][1];
    }

    sort(A, A +20, compareA);// sorting test.a
    sort(A, A+ 20, compareB);// sorting test.b with respect to test.a

    for(int i=0; i<20; i++){
        cout<<A[i].index<<" -> a:"<<A[i].a<<"  b: "<<A[i].b<<endl;
    }

    return 0;
}
