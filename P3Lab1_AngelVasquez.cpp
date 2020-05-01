#include <iostream>
using std:: cout;
using std::cin;
using std::endl;
int cambionum(int n );
int main(){
    int n, sum = 0 , num1= 1 ,num2 =1 , contrl = 0 ;
    do{
    	cout << "entrada:";
    	cin >> n;
	}while(n >= 100);
     do {
     	
        if (contrl % 2 == 0 ){
		   num1 = cambionum(num1 +1);
		   cout << "1\n";
		}
		else{
			num2 = cambionum(num2 +1);
			cout << "2\n";
		}
	    contrl++;
	    sum = num1 + num2 ;
     	if (sum % 2 == 0 && sum < n){
		   cout << num1 << "+" << num2 << "=" << sum << endl;
		}
	} while (sum < n );
    
    
}
int cambionum(int num){
    int cont,contd;
    cont=1; 
    contd=0;//Contador de divisores 
    while(cont<=num)//Se sale hasta que el numero de contadores es igual a el numero
    {
        if(num%cont==0)
        {
            contd=contd+1;             
        }
        cont++;
    }//fin while
    if (contd==2)
    {
       return num;
        
    }
    else
    {
       
      return cambionum(num +1);
    }
    
}



