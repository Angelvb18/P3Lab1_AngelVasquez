#include <iostream>
using std:: cout;
using std::cin;
using std::endl;
int cambionum(int n );
int main(){
    int n, sum = 0 , num1= 1 ,num2 =1 , contrl = 0 , contrl2= 4 , contrl3 =2;
    do{
    	cout << "entrada:";
    	cin >> n;
    	cout << "salida:" << endl;
	}while(n >= 100);
     do {
     	
        if (contrl % contrl3 == 0 ){
		   num1 = cambionum(num1 +1);
		  
		}
		else{
			num2 = cambionum(num2 +1);
		
		}
	    contrl++;
	    if(num1+num2 != contrl2 && num1 + num2 > contrl2){
		   num1 = 1;
		   num2= 1;
		   contrl3++;
		   if(contrl3 > 10){
		       contrl3 = 1;
		   }
		}
	    sum = num1 + num2 ;
     	if (sum % 2 == 0 && sum < n && sum == contrl2){
		   cout << num1 << "+" << num2 << "=" << sum << endl;
		   contrl2++;
		   contrl2++;
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



