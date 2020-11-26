#include<iostream>
#include<cstdlib>
#include<fstream>

using namespace std;



int main()
{
	int roz = 2;
	int licz;
    ifstream liczby;
    liczby.open("liczby.txt");
	int koko=0;
	bool  a=false;
	int jd;
    
    while(liczby.good()){
        if (!liczby.eof()){
         		liczby >> licz;
         		a=true;
        		while(licz>1){
		         	while(licz%roz==0){
		         		cout << roz << " ";
		         		licz /= roz;
		         		
		         		if(roz%2==0 ){
		         			a = false;
						}
						if(!(roz%2==0) && jd!=roz){
							//cout<<"co";
							koko++;
						}
						jd=roz;
					}
					++roz;
				}
				if(koko==3 && a==true){
				cout <<"tak";	
				}
				else cout<<"nie";
				koko =0;
				cout<<endl;
				roz = 2;
			}
         }
     
    
    
    
    return 0;
}
