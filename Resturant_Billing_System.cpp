# Resturant-Billing-System-
/* 
   <------------------------------------------C++ PROJECT------------------------------------------------->
<-----------------------------------------Resturant BILLING SYSTEM------------------------------------------------>
*/
#include<iostream>
using namespace std;
int main()
{
  int returnTotalBill(void);
  int total_Bill_Amount= returnTotalBill();
  cout<<"Your Total bill amount is: "<<total_Bill_Amount<<" Rupees"<<endl;
  cout<<"Thank You For visiting"<<endl;
}
int returnTotalBill()
{
    char c;
    char item;
    char vegItem;
    int billAmount=0;
    char selectAgain;
    char NonvegItem;
    cout<<"-----------Welcome to food order----------------"<<endl;
    cout<<"----------Please follow below instructions----------"<<endl;
    cout<<"Step 1: Please press/enter 's' to start ordering your menu"<<endl;
    cout<<"Step 2: You can order both 'non-veg' and 'veg' items from the respective menu chart provided"<<endl;
    cout<<"Step 3: Please Press 'V' to select the veg item"<<endl;
    cout<<"Step 4: Please Press 'N' to select the veg item"<<endl;
    cout<<"Step 5: You will rceive your final bill after your order"<<endl;
    start:
    cin>>c;
    cout<<'\a';
    if(c=='s'|| c=='S')
    {
    items:
     cout<<"Please Select your Choice---->"<<endl;
     cout<<"(V)--->Veg and (N)--->Non-veg"<<endl;
     cin>>item;
     cout<<'\a';
     if(item=='v'|| item=='V')
     {  vegItemList:
        cout<<"Please select 1,2,3,4,5, as per yout choice"<<endl;
        cout<<"(1) Paneer Patties  :  Price  :  Rs-250"<<endl;
        cout<<"(2) Burger  :  Price  :  Rs-50"<<endl;
        cout<<"(3) Pizza  :  Price  :  Rs-100"<<endl;
        cout<<"(4) Chowmein  :  Price  :  Rs-150"<<endl;
        cout<<"(5) Veg-Rol  :  Price  :  Rs-100"<<endl;
        cin>>vegItem;
        cout<<'\a';
        if(vegItem=='1')
        {
            billAmount=billAmount+250;
        }
        else if(vegItem=='2')
        {
            billAmount=billAmount+50;
        }
        else if(vegItem=='3')
        {
            billAmount=billAmount+100;
        }
        else if(vegItem=='4')
        {
            billAmount=billAmount+150;
        }
        else if(vegItem=='5')
        {
            billAmount=billAmount+100;
        }
        else
        {
            cout<<"you have entered wrongs choice"<<endl;
            goto vegItemList;
            cout<<'\a';
        }
        cout<<"Do you want to add more items, y or n?"<<endl;
        cin>>selectAgain;
        cout<<'\a';
        if(selectAgain=='y'||selectAgain=='Y')
        {
            goto items;
            cout<<'\a';
        }
        else
        {
          return billAmount;  
        }
     }
     else if(item=='N' || item=='n')
     {
          NonvegItemList:
        cout<<"Please select 1,2,3,4,5, as per yout choice"<<endl;
        cout<<"(1) Chicken Patties  :  Price  :  Rs-350"<<endl;
        cout<<"(2) Chicken Burger  :  Price  :  Rs-250"<<endl;
        cout<<"(3) Tndori Chicken Pizza  :  Price  :  Rs-150"<<endl;
        cout<<"(4) Egg Chowmein  :  Price  :  Rs-250"<<endl;
        cout<<"(5) Swarma-Roll  :  Price  :  Rs-150"<<endl;
        cin>>NonvegItem;
        cout<<'\a';
        if(NonvegItem=='1')
        {
            billAmount=billAmount+350;
        }
        else if(NonvegItem=='2')
        {
            billAmount=billAmount+250;
        }
        else if(NonvegItem=='3')
        {
            billAmount=billAmount+150;
        }
        else if(NonvegItem=='4')
        {
            billAmount=billAmount+250;
        }
        else if(NonvegItem=='5')
        {
            billAmount=billAmount+150;
        }
        else
        {
            cout<<"you have entered wrongs choice"<<endl;
            goto NonvegItemList;
            cout<<'\a';
        }
        cout<<"Do you want to add more items, y or n?"<<endl;
        cin>>selectAgain;
        cout<<'\a';
        if(selectAgain=='y'||selectAgain=='Y')
        {
            goto items;
            cout<<'\a';
        }
        else
        {
          return billAmount;  
        }
     }
     else
     {
        cout<<"You have entered a wrong value , Please press 's'"<<endl;
        goto items;
        cout<<'\a';
     }
    }
    
    else
    {
        cout<<"OOps!!! please select correct option from the instructions given above"<<endl;
        goto start;
        cout<<'\a';
    }
    return billAmount;
    
}
