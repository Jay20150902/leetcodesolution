/**
 * Your MedianFinder object will be instantiated and called as such:
 * MedianFinder* obj = new MedianFinder();
 * obj->addNum(num);
 * double param_2 = obj->findMedian();
 */

#include <vector>
#include <iostream>

using namespace std;

class MedianFinder 
{

public:

    vector<double> v;
    
    /** initialize your data structure here. **/
    MedianFinder() 
    {
       
    }



    ~MedianFinder() 
    {
       v.clear();
    }
    



    void addNum(double num) 
    {
        v.push_back(num);
    }



    void display()
    {
        for(int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<endl;
        }
    }
    



    double findMedian(vector<double> v2,int n)
    {
        int a;
        double b;
        if(n%2 == 0)
        {
           a = n/2;
           b = (v2[a-1]+v2[a])/2;
           return b;
        }
        else
        {
          a = n/2;
          return v2[a];
        }
        
    }


//use selection sort
void sort(vector<double> &v1,int n)
{
     for(int i=0;i<n;i++)
     {
        int smallest=i;
        for(int j=i+1;j<n;j++)
        {
            if(v1[j]<v1[smallest])
            {
                smallest=j;
            }
        }
            double a=v1[i];
            v1[i]=v1[smallest];
            v1[smallest]=a;
        

     }
}



    
};


int main()
{
    MedianFinder f;
    double result;

    f.addNum(5);
    f.addNum(9);
    f.addNum(8);
    f.addNum(6);
    f.addNum(7);
    f.addNum(11);
    
    f.display();
    cout<<endl;
    f.sort(f.v,f.v.size());
    f.display();
    result = f.findMedian(f.v,f.v.size());
    cout<<"the median value is "<<result<<endl;
    return 0;
}



