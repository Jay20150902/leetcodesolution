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
    
    
    MedianFinder() 
    {
       
    }


    ~MedianFinder() 
    {
       v.clear();
    }
    
//add numbers
    void addNum(double num) 
    {
        v.push_back(num);
    }

//display the elements in the vector
    void display()
    {
        cout<<"The current vector is: ";
        for(int i = 0; i < v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
    }
    
//find the median
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


//use selection sort to sort the vector
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
    //initialize the obj
    MedianFinder m;
    double result;

    m.addNum(5);
    m.addNum(9);
    m.addNum(8);
    m.addNum(6);
    m.addNum(7);
    m.addNum(11);
    
    //m.display();
    cout<<endl;

    //sort the vector then display
    m.sort(m.v,m.v.size());
    m.display();

    //display the median value
    result = m.findMedian(m.v,m.v.size());
    cout<<"the median value is "<<result<<endl;
    return 0;
}



