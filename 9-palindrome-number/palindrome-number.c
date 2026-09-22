bool isPalindrome(int x) {
    long long rev=0,rem,temp=x;
    if(temp<0)
    {
        return false;
    }
    else{
    while(temp!=0)
    {
        rem=temp%10;
        rev = rev* 10 + rem;
        temp=temp/10;
    }
    return (x==rev);
    }
   
}