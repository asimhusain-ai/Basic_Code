#include<iostream>
#include<string>
using namespace std;
int main(){
    string food_item[30]={"Burger","Maggie","Chicken","Chicken Fry","Nan","Malai Kulfi","Ice-Cream","Momos","White Chicken","Matan","Korma","Paneer","Chhole Bhature",
    "Chhole Kulche","Gobhi","Lokhi","Bhindi Fry","Fried Rice","Samosa","Barfi","Peda","Pettha","Pakodi","Jalebi","Gulab Zamun","White Jamun","Pakode","Biyani","Banana", "Dates"};
    int food_price[30]={99,100,120,130,80,90,70,78,98,97,96,95,100,110,200,300,400,210,220,213,123,432,345,435,324,231,213,234,553,432};

    cout<<"----- FOOD ITEMS AVAILABLE IN OUR REATURANT -----"<<endl;
    cout<<"----------------------------------------------------------"<<endl;
    for(int i=0;i<30;i++){
        cout<<i+1<<"  "<<food_item[i]<<"      "<<"Rs. "<<food_price[i]<<endl;
    }
    int choice,quantity;
    float total_price,gst_amount;

    cout<<"      "<<endl;
    cout<<"Please Select Food Item As Per Your Wish In Given List :- ";
    cin>>choice;
    cout<<"Enter Quantity Of Food As Per Your Requirements ";
    cin>>quantity;

    total_price=quantity*food_price[choice-1];
    gst_amount=(total_price*0.18);

    cout<<"\nB I L L\n"<<endl;
    cout<<"------------------------------------------"<<endl;
    cout<<"Food Item :- "<<food_item[choice-1]<<endl;
    cout<<"Price/Item :- "<<food_price[choice-1]<<endl;
    cout<<"Food Quantity :- "<<quantity<<endl;
    cout<<"Total Food Price :- "<<food_price[choice-1]*quantity<<endl;
    cout<<"GST Amount :- "<<gst_amount<<endl;
    cout<<"Total Amount To Be Paid :- "<<total_price+gst_amount<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<"-------------------------------------------"<<endl;
    cout<<" P L E A S E  G I V E   R A T I N G  "<<endl;

    int feedback;
    cout<<"Give feedback Out of 10 :- ";
    cin>>feedback;
    
    if(feedback>5){
        cout<<"--Outstanding--"<<endl;
    }
    else{
        cout<<"--- NOT GOOD ---"<<endl;
    }
    return 0;
}