void prime_sieve(int *p){
    //first marks all odd no is prime
    for(int i=3;i<=1000000;i+=2){
        p[i]=1;
    }
    //Sieve
    for(ll i=3;i<=1000000;i+=2){
        //if the current number not marked(it is prime)
        if(p[i]==1){
            //marks all the multiple of i as not prime
            for(ll j = i*i ; j <= 1000000; j = j + i){
                p[j]=0;
            }
        }
    }
    //special acses
    p[2]=1;
    p[1]=p[0]=0;
} 