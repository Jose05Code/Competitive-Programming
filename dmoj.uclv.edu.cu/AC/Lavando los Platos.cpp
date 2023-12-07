#include <iostream>
#include <stack> //para usar pilas

using namespace std;


int main() {
    int num;
    cin >> num;
    
    stack<int> Sin_Lavar;
    stack<int> Lavados_Pero_No_Secados;
    stack<int> Lavados_Y_Secados;

    for (int i = num; i >= 1; i--) {
        Sin_Lavar.push(i);
    }
    int C,D;
    while (Lavados_Y_Secados.size() != num)
    {
        cin >> C >> D;
        if(C==1)
        for(int i=0; i<D; i++)
        {
            Lavados_Pero_No_Secados.push(Sin_Lavar.top());
            Sin_Lavar.pop();
        }
        else
        {
            for(int i=0; i<D; i++)
            {
                Lavados_Y_Secados.push(Lavados_Pero_No_Secados.top());
                Lavados_Pero_No_Secados.pop();
            }
        }
    }
    
    
        while (!Lavados_Y_Secados.empty()) {
            cout << Lavados_Y_Secados.top() << endl;
            Lavados_Y_Secados.pop();
        }

        return 0;
    }
