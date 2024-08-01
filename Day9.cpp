//calculatorusingstl
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

class calculator{
    private:
        stack<double> operands;
        stack<char> opeator;
        int choice;
    public:
        void putdata(double x, char w){
            operands.push(x);
            opeator.push(w);
        }
        void putdata(double x, double y, char w){
            operands.push(x);
            operands.push(y);
            opeator.push(w);
        }
        void add(){
            int x;
            int y;
            y=operands.top();
            operands.pop();
            x=operands.top();
            operands.pop();
            cout<<"SUM = "<<x+y<<endl;
        }
        void sub(){
            int x;
            int y;
            y=operands.top();
            operands.pop();
            x=operands.top();
            operands.pop();
            cout<<"SUBTRACTION = "<<x-y<<endl;
        }
        void mul(){
            int x;
            int y;
            y=operands.top();
            operands.pop();
            x=operands.top();
            operands.pop();
            cout<<"MULTIPLICATION = "<<x*y<<endl;
        }
        void div(){
            int x;
            int y;
            y=operands.top();
            operands.pop();
            x=operands.top();
            operands.pop();
            cout<<"DIVISION = "<<x+y<<endl;
        }
        void square(){
            int x;
            x=operands.top();
            operands.pop();
            cout<<"DIVISION = "<<x*x<<endl;
        }

};

int main(){
    calculator c1;
    cout<<"ENETR YOUR CHOICE";
    cout<<"1. ADD\n2. SUBTRACT\n3.MULTIPLY\n4.DIVIDE\n5. SQUARE"<<endl;
    int ch;
    cin>>ch;double x,y;
    switch (ch)
    {
    case 1:
        cout<<"ENTER FIRST NUMBER"<<endl;
        
        cin>>x;
        cout<<"ENTER SECOND NUMBER"<<endl;
        cin>>y;
        c1.putdata(x,y,'+');
        c1.add();
        break;
     case 2:
        cout<<"ENTER FIRST NUMBER"<<endl;
        
        cin>>x;
        cout<<"ENTER SECOND NUMBER"<<endl;
        cin>>y;
        c1.putdata(x,y,'-');
        c1.sub();
        break;
     case 3:
        cout<<"ENTER FIRST NUMBER"<<endl;
        
        cin>>x;
        cout<<"ENTER SECOND NUMBER"<<endl;
        cin>>y;
        c1.putdata(x,y,'*');
        c1.mul();
        break;
     case 4:
        cout<<"ENTER FIRST NUMBER"<<endl;
        double x,y;
        cin>>x;
        cout<<"ENTER SECOND NUMBER"<<endl;
        cin>>y;
        c1.putdata(x,y,'/');
        c1.div();
        break;
    case 5:
        cout<<"ENTER THE NUMBER : "<<endl;

        cin>>x;
        c1.putdata(x,'2');
        c1.square();
        break;
    default:
        cout<<"INVALID INPUT";
        break;
    }
    return 0;
}*/



//find_if_lambda
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numbers={1,3,5,8,10,13};

    //using find_if with a lambda to find the first even number 
    auto it=find_if(numbers.begin(),numbers.end(),[](int n){
        return n%2==0; //Predicate to find even numbers

    });
    if (it !=numbers.end()){
        cout<<"First even number found"<<*it<<endl;
    }
    return 0;
}
*/

//For each lambda
/*
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> numbers ={1,2,3,4,5};

    //using for each with a lambda to print each element 
    for_each(numbers.begin(),numbers.end(),[](int n){
        cout<<n<<" ";
    });
    cout<<endl;
    return 0;  
}
*/



#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int x=10;
    int y=20;
    auto add=[=](int a){
        return x+y+a;;
    };
cout<<"SUM : "<<add(5)<<endl;

auto addByRef=[&x,&y](int a){
    x=30;//modifying x
    return x+y+a;
};
cout<<"Sum reference : "<<addByRef(5)<<endl;
cout<<"x after modification : "<<x<<endl;

return 0;

}


