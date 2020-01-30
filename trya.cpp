int gcd(int a, int b) 
{ 
    if (a == 0){
        return b; 
    }
    return gcd(b%a, a); 
} 
  
int power(int x, unsigned int y) 
{ 
    if (y == 0){ 
        return 1;
    }
    int p = power(x, y/2, m) % m; 
    p = (p * p) % mod; 
    if (y%2==0){
        return p;
    }
    return (x*p)%mod;
} 

int modInverse(int a) 
{ 
    int gc = gcd(a, mod); 
    if (gc != 1){
        return -1
    }
    return power(a, mod-2, mod); 
     
}
