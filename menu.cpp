#include<bits/stdc++.h>
#include<math.h>
using namespace std;


// FUNCTION TO CHECK SQUARE NUMBER
bool squarenumber(int n){
    for(int i=1;i<=n;i++){
        if(n==(i*i)){
            return true;
        }
    }
    return false;
}
// FUNCTION TO CHECK CUBE NUMBER
bool cubenumber(int n){
    for(int i=1;i<=n;i++){
        if(n==(i*i*i)){
            return true;
        }
    }
    return false;
}
// FUNCTION TO FIND FACTORIAl
int factorial(int n){
    int fact=1;
    if(n==0){
        return 1;
    }
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    return fact;
}

// FUNCTION TO CHECK PALINDROME
bool palindrome(int n){
    int num=n;
    int rev=0,rem;
    while(n!=0){
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    if(rev==num){
        return true;
    }
    return false;
}

// FUNCTION TO CHECK NEON NUMBER 
bool neon(int n){
    int sq,rem,sum=0;
    sq=n*n;
    while(sq!=0){
        rem=sq%10;
        sum=sum+rem;
        sq=sq/10;
    }
    if(sum==n){
        return true;
    }
    return false;
}

// FUNCTION TO PRINT FIBONACCI NUMBERS
void fibonacci(int n){
    int t1=0,t2=1,nextterm;
    for(int i=1;i<=n;i++){
        cout<<t1<<" ";
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }cout<<endl;
}

// FUNCTION TO CHECK ARMSTRONG  NUMBER
bool armstrong(int n){
    int last_digit,sum=0;
    int num=n;
    while(n>0){
        last_digit=n%10;
        sum+=pow(last_digit,3);
        n=n/10;
    }
    if(sum==num){
        return true;
    }
    return false;
}

// FUNCTION TO CHECK DISARIUM NUMBER
bool disarium(int n){
    int count_digits=0,num=n,x=num;
    while(n){
        n=n/10;
        count_digits++;
    }
    int sum=0,rem;
    while(num){
        rem=num%10;
        sum+=pow(rem,count_digits--);
        num=num/10;
    }
    if(sum==x){
        return true;
    }
    return false;
}

// FUNCTION TO CHECK HARSHAD NUMBER
bool harshad(int n){
    int sum=0,num=n,rem;
    while(n){
        rem=num%10;
        sum+=rem;
        n=n/10;
    }
    if(num%sum==0){
        return true;
    }
    return false;
}


int main(){
    int n,choice;
    bool repeat=true;
    while(repeat=true){
    cout<<"Enter the number: ";
    cin>>n;cout<<endl;
    cout<<"Choose the option from the menu:"<<endl;cout<<endl;
    cout<<"1.TO CHECK IF THE NUMBER IS PRIME OR NOT"<<endl;
    cout<<"2.TO FIND IF THE NUMBER IS SQUARE NUMBER"<<endl;
    cout<<"3.TO FIND IF THE NUMBER IS CUBE NUMBER"<<endl;
    cout<<"4.FIND THE FACTORIAL OF THE NUMBER"<<endl;
    cout<<"5.FIND IF THE NUMBER IS PALINDROME"<<endl;
    cout<<"6.FIND IF THE NUMBER IS NEON NUMBER"<<endl;
    cout<<"7.PRINT THE FIBONACCI SERIES TILL THAT NUMBER"<<endl;
    cout<<"8.FIND IF THE NUMBER IS ARMSTRONG NUMBER"<<endl;
    cout<<"9.FIND IF THE NUMBER IS DISARIUM NUMBER"<<endl;
    cout<<"10.FIND IF THE NUMBER IS HARSHAD NUMBER"<<endl;
    cout<<"-->>";
    cin>>choice;
    switch(choice){
        // TO CHECK IF THE NUMBER IS PRIME OR NOT
        case 1:
        cout<<"Find if Number is prime number"<<endl;
        int i;
        for(i=2;i<n;i++){
            if(n%i==0){
                cout<<"Non prime"<<endl;
                break;
            }
        }
        if(i==n){
            cout<<"Prime"<<endl;
        }
        break;
        
        // TO FIND IF THE NUMBER IS A SQUARE NUMBER
        case 2:
        if(squarenumber(n)){
            cout<<"Square number"<<endl;
        }
        else{
            cout<<"Not a square number"<<endl;
        }
        break;

        // FIND IF THE NUMBER IS CUBE NUMBER
        case 3:
        if(cubenumber(n)){
            cout<<"Cube number"<<endl;
        }
        else{
            cout<<"Not a cube number"<<endl;
        }
        break;

        // FIND THE FACTORIAL OF THE NUMBER
        case 4:
        cout<<"Factorial of the number is : "<<factorial(n)<<endl;
        break;

        // FIND IF THE NUMBER IS PALINDROME NUMBER
        case 5:
        if(palindrome(n)){
            cout<<"The number is Palindrome"<<endl;
        }
        else{
            cout<<"The number is not a Palindrome"<<endl;
        }
        break;

        // FIND IF THE NUMBER IS NEON NUMBER
        case 6:
        if(neon(n)){
            cout<<"Neon Number"<<endl;
        }
        else{
            cout<<"Not a neon number"<<endl;
        }
        break;

        // PRINT THE FIBONACCI NUMBERS TILL THAT NUMBER 
        case 7:
        fibonacci(n);
        break;

        // FIND IF THE NUMBER IS ARMSTRONG  NUMBER
        case 8:
        if(armstrong(n)){
            cout<<"Armstrong number"<<endl;
        }
        else{
            cout<<"Not a Armstrong number"<<endl;
        }
        break;

        // FIND IF THE NUMBER IS DISARIUM NUMBER
        case 9:
        if(disarium(n)){
            cout<<"Disarium number"<<endl;
        }
        else{
            cout<<"Not a Disarium number"<<endl;
        }
        break;

        // FIND IF THE NUMBER IS HARSHAD NUMBER
        case 10:
        if(harshad(n)){
            cout<<"Harshad number"<<endl;
        }
        else{
            cout<<"Not a Harshad number"<<endl;
        }
        break;

        
    }
    cout<<endl;
    }
        return 0;
}