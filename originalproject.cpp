#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>
#include<windows.h>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<sstream>

using namespace std;
class mobile
{
	public:

		char name[10],email[20],mobileno[20];
		char name1[10],email1[20],mobileno1[20];
		char address2[100];
		char uname1[50];
         char pass1[20];
         char uname2[50];
         char pass2[20];
			int j,m_brand,b,y,x,model;
			bool valid;
		void login()
		{
	cout<<"************************************************"<<endl;
	cout<<"\tchoise the character"<<endl;
	cout<<" \n1.customer\n2.seller "<<endl;
	cout<<"************************************************"<<endl;
	cin>>x;
	if(x>2)
	{
		cout<<"your are not eligible for shoping"<<endl;
		cout<<"******THANK YOU FOR VISITING*******"<<endl;
		cout<<"************************************************"<<endl;
	}
	
	switch(x)
	{
	case 1:
	
		
	int c;
	cout<<"**********welcome to online mobile shoping************"<<endl;
	cout<<"\n\tchoise your choise"<<endl;
	cout<<"\n1.new customer\n2.alredy customer"<<endl;
	cout<<"************************************************"<<endl;
	cin>>c;
	if(c>2)
	{
		cout<<"you are not eligiblr for shoping"<<endl;
		cout<<"*****THANK YOU FOR VISITING*****"<<endl;
		cout<<"************************************************"<<endl;
	}


	switch(c)
	{
		case 1:
			   
			   cout<<"\tenter your detais"<<endl;;
			   cout<<"\n enter your name"<<endl;
			   cin>>name1;
			   cout<<"\nenter the email"<<endl;
			   cin>>email1;
			   cout<<"\nenter the mobile number"<<endl;
			   cin>>mobileno1;
			   cout<<"enter the address"<<endl;
     	       cin>>address2;
			   system("color B2");
			    cout<<"\n you are succsfully register"<<endl;
			   
			   {
			   cout<<"**********THANK YOU*************"<<endl;
			   cout<<"************************************************"<<endl;
		       }
			   break;
		case 2:
		    
     cout<<"\n Enter User Name  :  "<<endl;
     cin>>uname1;
     cout<<"\n Enter Password   :  "<<endl;
     cout<<"\npassward must have @ and digits 1-9 characters"<<endl;
     cin>>pass1;
     cout<<"enter the address"<<endl;
     	cin>>address2;
     
     try
     {
          
          if(strlen(pass1)<6)
          {
          	system("color B4");
               cout<<"\n Password must be at least 6 Characters Long..."<<endl;
               cout<<"\n\tyour passward is too week reset your passward after shoping"<<endl;
               throw 'c';
          }
          
          bool digit_yes=false;
          bool valid;
          int len = strlen(pass1);
          for (int count = 0; count < len; count++)
          if (isdigit(pass1[count]))      
               digit_yes=true;
          if (!digit_yes)
          {
               valid=false;
               cout <<"\n Password must have at least One Digit (0-9)"<< endl;
                 cout<<"\tyour passward is too week reset your passward after shoping"<<endl;
               throw 'c';
          }
          else
          {
          	
               valid=true;
               
               
                system("color 0A");
               cout<<"\n succsfully login\n\t continue your shoping";
               cout<<"************************************************"<<endl;
            
          }
     }
     catch(char c)
     {
          cout<<"\n Invalid Password Format!!!";
          cout<<"\n\tyour passward is too week reset your passward after shoping"<<endl;
     }
     catch(...)
     {
          cout<<"\n Default Exception";
     } 
	
	}
	
	break;
	

case 2:
		int y;
	cout<<"**********welcome to online mobile shoping************"<<endl;
	cout<<"\tchoise your choise"<<endl;
	cout<<"\n1.new seller\n2.alredy existing seller"<<endl;
	cout<<"************************************************"<<endl;
	cin>>y;
	if(y>2)
  {
  	cout<<"\tyou are not allow for shoping"<<endl;
  }
  
	switch(y)
	{
		case 1:
			   
			   cout<<"\tenter your detais"<<endl;
			   cout<<"\n enter your name"<<endl;
			   cin>>name;
			   cout<<"\nenter the email"<<endl;
			   cin>>email;
			   cout<<"\nenter the mobile number"<<endl;
			   cin>>mobileno;
			   system("color B2");
			    cout<<"\n you are succsfully register"<<endl;
			   
			   cout<<"**********THANK YOU*************"<<endl;
			   cout<<"************************************************"<<endl;
			   break;
		case 2:
		      	  
     cout<<"\n Enter User Name  :  "<<endl;
     cin>>uname2;
     cout<<"\n Enter Password   :  "<<endl;
     cout<<"\tpassward must have @ and digits 1-9 characters"<<endl;
     cin>>pass2;
     try
     {
          
          if(strlen(pass2)<6)
          {
          	system("color E4");
               cout<<"\n Password must be at least 6 Characters Long..."<<endl;
               cout<<"\tyour passward is too week reset your passward after shoping"<<endl;
               throw 'c';
          }
          
          bool digit_yes=false;
          
          int len = strlen(pass2);
          for (int count = 0; count < len; count++)
          if (isdigit(pass2[count]))      
               digit_yes=true;
          if (!digit_yes)
          {
               valid=false;
               system("color E4");
               cout <<"\n Password must have at least One Digit (0-9)"<< endl;
               cout<<"\tyour passward is too week reset your passward after shoping"<<endl;
               throw 'c';
          }
          else
          {
               valid=true;
               system("color 0A");
               cout<<"\n succsfully login\n continue your shoping";
               cout<<"************************************************"<<endl;
               
          }
     }
     catch(char c)
     {
          cout<<"\n Invalid Password Format!!!";
          cout<<"\tyour passward is too week reset your passward after shoping"<<endl;
     }
     catch(...)
     {
          cout<<"\n Default Exception";
     } 
     break;
	
    	}
    }
     }
 
     void total()
     {
     	
     	
     	cout<<"\tyou can pay this amount by using below upi id or bank a/c"<<endl;
     	
     	cout<<"\n upi id::venukurugonda@paytm.com"<<endl;
     	cout<<" bank no:3447722551082"<<endl;
     	cout<<" IDFC CODE:ABC1588"<<endl;
     	cout<<"********THANK YOU FOR SHOPING*********"<<endl;
     	cout<<"************************************************"<<endl;
	 }





	
public:	
int n,i,order,total1;
char address[50];
float gst,discount;
int newmobile()

  {
    
     char mobile[5][5];
     cout<<"how many mobiles you want to enter"<<endl;
     cin>>n;
        for(i=1;i<=n;i++)
        {
     	cout<<"enter the new "<<i<<" mobile"<<endl;
     	cin>>mobile[i];
        }
        for(i=1;i<=n;i++)
     	cout<<mobile[i]<<"\n"<<endl;
     	
	 
  }
	void seller()
	{
			
	 
  cout<< "\n\tchoise the character"<<endl;;
  cout<<"\n1.customer\n2.seller"<<endl;
  cout<<"************************************************"<<endl;
  cin>>j;
  
  if(j==1)
  {
  	cout<<"\n\tchoice the mobile brand"<<endl;
  	cout<<"\n1.vivo\n2.Redmi\n3.Realme\n4.OPPO\n5.one pluse\n6.i phone\n7.samsung"<<endl;
  	cout<<"************************************************"<<endl;
  	cin>>b;
  	
  	  if(b==1)
  	  {
  	  
  	
  	  	cout<<"your choise vivo mibile"<<endl;
  	  	cout<<"choise the  mobile model"<<endl;
  	  	cout<<"\n1.vivo y19\n2.vivo Y22\n3.vivo y16\n4.vivoY23\n5.vivo v25"<<endl;
  	  	cout<<"************************************************"<<endl;
  	    cin>>model;
  	    if(model==1)
  	    {
  	    		int price=25000;
  	    	cout<<"you choise vivo y19 model"<<endl;
  	    	cout<<"\nyou got 25% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*25)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==2)
  	    {
  	    		int price=23000;
  	    	cout<<"you choise vivo Y22 model"<<endl;
  	    	cout<<"\nyou got 15% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*15)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==3)
  	    {
  	    		int price=24000;
  	    	cout<<"you choise vivo y16 model"<<endl;
  	    	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*17)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==4)
  	    {
  	    		int price=15000;
  	    	cout<<"you choise vivo y23 model"<<endl;
  	    	cout<<"\nyou got 23% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*23)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==5)
  	    {
  	    		int price=25400;
  	    	cout<<"you choise vivo v25 model"<<endl;
  	    	cout<<"\nyou got 27% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*27)/100;
  	  	 total1=(price+gst-discount);
		  }
  	  	
  	  	cout<<"\n are you conform order(y/n)"<<endl;
  	  	cin>>order;
  	  	    if(order=='y'||'Y')
  	  	    {
  	  	    	cout<<"thank you for conforming"<<endl;
				}
  	  	cout<<"\nthe total price you have to pay"<<total1<<endl;
  	  	total();
  	  	
  	  	
  	  	}
		if(b==2)
  	  {
  	  	
  	  	
  	  	cout<<"\nyour choise MI(Redmi) mibile"<<endl;
  	  	cout<<"choise the  mobile model"<<endl;
  	  	cout<<"\n1.Redmi note 11T \n2.Redmi 11 prime\n3.Redmi note 10\n4.Redmi k50\n5.Redmi note 10 Lite"<<endl;
  	  	cout<<"************************************************"<<endl;
  	    cin>>model;
  	    if(model==1)
  	    {
  	    		int price=19000;
  	    	cout<<"you choise Redmi note 11T model"<<endl;
  	    	cout<<"\nyou got 25% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*25)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==2)
  	    {
  	    		int price=13499;
  	    	cout<<"you choise Redmi 11 prime model"<<endl;
  	    	cout<<"\nyou got 5% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*5)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==3)
  	    {
  	    		int price=15499;
  	    	cout<<"you choise Redmi note 10 model"<<endl;
  	    	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*17)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==4)
  	    {
  	    		int price=14999;
  	    	cout<<"you choise the Redmi k50 model"<<endl;
  	    	cout<<"\nyou got 27% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*27)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==5)
  	    {
  	    		int price=25000;
  	    	cout<<"you choise Redmi note 10 Lite model"<<endl;
  	    	cout<<"\nyou got 30% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*30)/100;
  	  	 total1=(price+gst-discount);
		  }
  	  	
  	  	cout<<"\n are you conform order(y/n)"<<endl;
  	  	cin>>order;
  	  	    if(order=='y'||'Y')
  	  	    {
  	  	    	cout<<"thank you for conforming"<<endl;
				}
  	  	cout<<"\nthe total price you have to pay"<<total1<<endl;
  	  	total();
		}
		if(b==3)
  	  {
  	  	
  	  	cout<<"\nyour choise Realme mibile"<<endl;
  	  	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	cout<<"choise the  mobile model"<<endl;
  	  	cout<<"\n1.Realme c35\n2.Realme 9\n3.Realme 8\n4.Realme 8i\n5.Realme GT2"<<endl;
  	  	cout<<"************************************************"<<endl;
  	    cin>>model;
  	    if(model==1)
  	    {
  	    		int price=14000;
  	    	cout<<"you choise Realme c35 model"<<endl;
  	    	cout<<"\nyou got 15% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*15)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==2)
  	    {
  	    		int price=16000;
  	    	cout<<"you choise Realme 9 model"<<endl;
  	    	cout<<"\nyou got 5% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*5)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==3)
  	    {
  	    		int price=14950;
  	    	cout<<"you choise Realme 8 model"<<endl;
  	    	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*17)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==4)
  	    {
  	    		int price=13690;
  	    	cout<<"you choise Realme 8i model"<<endl;
  	    	cout<<"\nyou got 20% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*20)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==5)
  	    {
  	    		int price=30994;
  	    	cout<<"you choise Realme GT2 model"<<endl;
  	    	cout<<"\nyou got 22% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*22)/100;
  	  	 total1=(price+gst-discount);
		  }
  	  	
  	  	cout<<"\n are you conform order(y/n)"<<endl;
  	  	cin>>order;
  	  	    if(order=='y'||'Y')
  	  	    {
  	  	    	cout<<"thank you for conforming"<<endl;
				}
  	  	cout<<"\nthe total price you have to pay"<<total1<<endl;
  	  	total();
		}
		if(b==4)
  	  {
  	  	
  	
  	  	cout<<"\nyour choise OPPO mibile"<<endl;
  	  	cout<<"choise the  mobile model"<<endl;
  	  	cout<<"\n1.OPPO reno 8 5G\n2.OPPO F 21 pro 5G\n3.OPPO A57\n4.OPPO A96\n5.OPPO A 16"<<endl;
  	  	cout<<"************************************************"<<endl;
  	    cin>>model;
  	    if(model==1)
  	    {
  	    		int price=25000;
  	    	cout<<"you choise OPPO reno 8 5G model"<<endl;
  	    	cout<<"\nyou got 25% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*25)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==2)
  	    {
  	    		int price=23000;
  	    	cout<<"you choise OPPO F 21 pro 5G model"<<endl;
  	    	cout<<"\nyou got 15% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*15)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==3)
  	    {
  	    		int price=24000;
  	    	cout<<"you choise OPPO A57 model"<<endl;
  	    	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*17)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==4)
  	    {
  	    		int price=15000;
  	    	cout<<"you choise OPPO A96 model"<<endl;
  	    	cout<<"\nyou got 23% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*23)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==5)
  	    {
  	    		int price=25400;
  	    	cout<<"you choise OPPO A 16 model"<<endl;
  	    	cout<<"\nyou got 27% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*27)/100;
  	  	 total1=(price+gst-discount);
		  }
  	  	
  	  	cout<<"\n are you conform order(y/n)"<<endl;
  	  	cin>>order;
  	  	    if(order=='y'||'Y')
  	  	    {
  	  	    	cout<<"thank you for conforming"<<endl;
				}
  	  	cout<<"\nthe total price you have to pay"<<total1<<endl;
  	  	total();
		}
		if(b==5)
  	  {
  	  	int price=55000;
  	
  	  	cout<<"\nyour choise ONEPLUS mibile"<<endl;
  	  	cout<<"choise the  mobile model"<<endl;
  	  	cout<<"\n1.ONE PLUS NORD CE2\n2.ONE PLUS 7T\n3.ONE PLUS NORD\n4.ONE PLUS 7\n5.ONE PLUS 9R"<<endl;
  	  	cout<<"************************************************"<<endl;
  	    cin>>model;
  	    if(model==1)
  	    {
  	    		int price=18900;
  	    	cout<<"you choise One plus nord ce2 model"<<endl;
  	    	cout<<"\nyou got 25% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*25)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==2)
  	    {
  	    		int price=16900;
  	    	cout<<"you choise One plus 7T model"<<endl;
  	    	cout<<"\nyou got 15% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*15)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==3)
  	    {
  	    		int price=24000;
  	    	cout<<"you choise One plus nord model"<<endl;
  	    	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*17)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==4)
  	    {
  	    		int price=17000;
  	    	cout<<"you choise One plus 7 model"<<endl;
  	    	cout<<"\nyou got 23% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*23)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==5)
  	    {
  	    		int price=32900;
  	    	cout<<"you choise One plus 9R model"<<endl;
  	    	cout<<"\nyou got 27% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*27)/100;
  	  	 total1=(price+gst-discount);
		  }
  	  	
  	  	cout<<"\n are you conform order(y/n)"<<endl;
  	  	cin>>order;
  	  	    if(order=='y'||'Y')
  	  	    {
  	  	    	cout<<"thank you for conforming"<<endl;
				}
  	  	cout<<"\nthe total price you have to pay"<<total1<<endl;
  	  	total();
		}
		if(b==6)
  	  {
  	  	int price=70000;
  	  	
  	  	cout<<"\nyour choise I PHONE mibile"<<endl;
  	  	cout<<"choise the  mobile model"<<endl;
  	  	cout<<"\n1.APPLE iphone 11\n2.APPLE iphone 13\n3.APPLE iphone 13 pro\n4.APPLE iphone 13 mini\n5.APPLE iphone 13 pro max"<<endl;
  	  	cout<<"************************************************"<<endl;
  	    cin>>model;
  	    if(model==1)
  	    {
  	    		int price=39999;
  	    	cout<<"you choise APPLE iphone 11 model"<<endl;
  	    	cout<<"\nyou got 25% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*25)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==2)
  	    {
  	    		int price=131900;
  	    	cout<<"you choise APPLE iphone13 model"<<endl;
  	    	cout<<"\nyou got 15% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*15)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==3)
  	    {
  	    		int price=129900;
  	    	cout<<"you choise APPLE iphone 13 pro model"<<endl;
  	    	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*17)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==4)
  	    {
  	    		int price=64900;
  	    	cout<<"you choise APPLE iphone 13 mini model"<<endl;
  	    	cout<<"\nyou got 23% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*23)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==5)
  	    {
  	    		int price=119900;
  	    	cout<<"you choise APPLE iphone 13 pro max model"<<endl;
  	    	cout<<"\nyou got 27% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*27)/100;
  	  	 total1=(price+gst-discount);
		  }
  	  	
  	  	cout<<"\n are you conform order(y/n)"<<endl;
  	  	cin>>order;
  	  	    if(order=='y'||'Y')
  	  	    {
  	  	    	cout<<"thank you for conforming"<<endl;
				}
  	  	cout<<"\nthe total price you have to pay"<<total1<<endl;
  	  	total();
		}
		if(b==7)
  	  {
  	
  	  	
  	  	cout<<"\nyour choise SAMSUNG mibile"<<endl;
  	  	cout<<"choise the  mobile model"<<endl;
  	  	cout<<"\n1.SAMSUNG Galaxy A23\n2.SAMSUNG Galaxy note 8\n3.SAMSUNG Galaxy s10\n4.SAMSUNG S20FE\n5.SAMSUNG Galaxy M53"<<endl;
  	  	cout<<"************************************************"<<endl;
  	    cin>>model;
  	    if(model==1)
  	    {
  	    		int price=25000;
  	    	cout<<"you choise SAMSUNG Galaxy A23  model"<<endl;
  	    	cout<<"\nyou got 25% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*25)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==2)
  	    {
  	    		int price=23000;
  	    	cout<<"you choise SAMSUNG Galaxy note 8 model"<<endl;
  	    	cout<<"\nyou got 15% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*15)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==3)
  	    {
  	    		int price=24000;
  	    	cout<<"you choise SAMSUNG Galaxy s10 model"<<endl;
  	    	cout<<"\nyou got 17% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*17)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==4)
  	    {
  	    		int price=15000;
  	    	cout<<"you choise SAMSUNG S20FE model"<<endl;
  	    	cout<<"\nyou got 23% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*23)/100;
  	  	 total1=(price+gst-discount);
		  }
		  if(model==5)
  	    {
  	    		int price=25400;
  	    	cout<<"you choise SAMSUNG Galaxy M53 model"<<endl;
  	    	cout<<"\nyou got 27% disount\n the tax is 5%"<<endl;
  	  	gst=(price*5)/100;
  	  	discount=(price*27)/100;
  	  	 total1=(price+gst-discount);
		  }
  	  	
  	  	cout<<"\n are you conform order(y/n)"<<endl;
  	  	cin>>order;
  	  	    if(order=='y'||'Y')
  	  	    {
  	  	    	cout<<"thank you for conforming"<<endl;
				}
  	  	cout<<"\nthe total price you have to pay"<<total1<<endl;
  	  	total();
		}
		
    
    
		
  	 
  
  
  
}
  
  if(j==2)
  {
  	
  	char ch,add[50],gst1[20];
  	system("color E4");
  	cout<<"\n\tyour are seller"<<endl;
  	cout<<"enter the shop address"<<endl;
  	cin>>add;
  	cout<<"enter the valid GST id for your shop"<<endl;
  	cin>>gst1;
  	
  	cout<<"do you want to enter the new mobiles for selling (y/n)"<<endl;
  	cin>>ch;
  	if(ch=='y')
  	{
  		
  			newmobile();
		    	
	  }
	  if(b==1 && model==1)
	  {
	  	cout<<"customer select vivo y19 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b==1 && model==2)
	  {
	  	cout<<"customer select vivo y22 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b==1 && model==3)
	  {
	  	cout<<"customer select vivo 16 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b==1 && model==4)
	  {
	  	cout<<"customer select vivo y23 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b==1 && model==5)
	  {
	  	cout<<"customer select vivo V25 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  char name2[20],email2[20],mobileno2[20],address2[50];
	  int b1,model1;
	  cout<<"the customer details are"<<endl;
	  ifstream inf("D:/c++/project1.txt");
	  inf>>name2;
	  inf>>email2;
	  inf>>mobileno2;
	  inf>>address2;
	  inf>>b1;
	  inf>>model1;
	  inf.close();
	  cout<<"name:"<<name2<<endl;
	  cout<<"email:"<<email2<<endl;
	  cout<<"mobileno:"<<mobileno2<<endl;
	  
	  if(b1==1 && model1==1)
	  {
	  	cout<<"customer select vivo y19 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==1 && model1==2)
	  {
	  	cout<<"customer select vivo y22 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==1 && model1==3)
	  {
	  	cout<<"customer select vivo 16 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==1 && model1==4)
	  {
	  	cout<<"customer select vivo y23 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==1 && model1==5)
	  {
	  	cout<<"customer select vivo V25 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  
	  if(b1==2 && model1==1)
	  {
	  	cout<<"customer select Redmi note 11T mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==2 && model1==2)
	  {
	  	cout<<"customer select Redmi 11 prime mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==2 && model1==3)
	  {
	  	cout<<"customer select Redmi note 10 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==2 && model1==4)
	  {
	  	cout<<"customer select Redmi k50 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==2 && model1==5)
	  {
	  	cout<<"customer select Redmi note 10 lite mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==3 && model1==1)
	  {
	  	cout<<"customer select Realme c35 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==3 && model1==2)
	  {
	  	cout<<"customer select Realme 9 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==3 && model1==3)
	  {
	  	cout<<"customer select Realme 8 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==3 && model1==4)
	  {
	  	cout<<"customer select Realme 8i mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  if(b1==3 && model1==5)
	  {
	  	cout<<"customer select Realme GT2 mobile"<<endl;
	  	cout<<"send this mobile"<<endl;
	  }
	  
	  cout<<"\tsend the mobile this address"<<endl;
	  cout<<"\taddress:"<<address2<<endl;
	  
	  
	  
  }
  
    }

};

int main()
{
	
     mobile s;
    s.login();

    s.seller();
    ofstream outf("D:/c++/project1.txt");
    outf<<s.name1<<"\n";
    outf<<s.email1<<"\n";
    outf<<s.mobileno1<<"\n";
    outf<<s.address2<<"\n";
    outf<<s.b<<"\n";
    outf<<s.model<<"\n";
    outf.close();
    ofstream log("D:/c++/login1.txt");
    log<<s.uname1<<"\n";
    log<<s.pass1<<"\n";
    log<<s.uname2<<"\n";
    log<<s.pass2<<"\n";
     return 0;
     
     
}


