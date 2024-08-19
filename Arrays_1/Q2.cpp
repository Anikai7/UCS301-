#include<iostream>
#include<vector>

using namespace std;

class arr
{
private:
    vector<int> arr;

public:
    void addElement(int element)
    {
        arr.push_back(element);
    }

    void print()
    {
        for (int i = 0; i < arr.size(); i++)
        {
            cout << arr[i] << " ";
        }
    }

    void duplicate(){
        int l=0;
        while(l<arr.size()){
            int h=l+1;
            while(h<arr.size()){
                if(arr[l]==arr[h]){
                    arr.erase(arr.begin()+h);
                    h--;
                }
                h++;
            }
            l++;
        }
    }
};

int main()
{
    int n;
    cout << "Enter Number of Elements" << endl;
    cin >> n;

    arr vec;

    cout<<"Enter elemens: "<<endl;
    for (int i = 0; i < n; i++)
    {
        int tem;
        cin >> tem;
        vec.addElement(tem);
    }

    if (n == 1)
    {
        vec.print();
    }

    vec.duplicate();

    vec.print();

    return 0;


}