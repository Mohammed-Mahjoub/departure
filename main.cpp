#include <iostream>
#include <queue>

using namespace std;

void showq(queue<int> gq)
{
    queue<int> g = gq;
    while (!g.empty()) {
        cout << '\t' << g.front();
        g.pop();
    }
    cout << '\n';
}

int main()
{
    queue<int> departure;
    departure.push(1);
    departure.push(2);
    departure.push(3);
    departure.push(4);
    departure.push(5);
    bool busy = true;
    int delay = 4;
    int numCustomer = departure.size();;
    int maximum =5;
    while(maximum>=0){
        if(departure.size()==0){
            delay = 0;
            numCustomer = 0;
            departure.pop();
            maximum = 0;
            busy = false;
            cout<<"server is empty and it ideal work"<<endl;
            cout << "busy: " << busy<<endl;

            break;
        }
        else if(departure.size()>0){
            cout << "delay user "<< numCustomer <<": "<< delay<<endl;
            cout << "busy: " << busy<<endl;
            --delay ;
            --numCustomer;
            busy = true;
            departure.pop();
            --maximum;
        }
    }
    return 0;
}
