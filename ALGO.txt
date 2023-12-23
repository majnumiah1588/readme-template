 /*
  // if n=6 then Divisors = { 1, 2, 3, 6 } ;   // O(sqrt (n));  set< ll > st;
     void countDivisors(int n) {
     for (ll i = 1; i <= sqrt(n); i++) {  if (n % i == 0) { st.insert(i); st.insert(n/i); }  }
  }
 */

 /*
 // Euclid Algorithm
  ll gcd(ll a, ll b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}


 // combination of string
    string s = "abc";
    sort(s.begin(), s.end());
    do {
        cout << s << "\n";
       } while (next_permutation((s).begin(), (s).end()));
 //         /

 // Binary Exponentiation           //  O(log(n)).
 // ans = pow (2,1000000000) can be counted by using this.
  ll power( ll base, ll pow, ll mod ){
  ll res = 1 ;  while(pow>0) {
   if(n%2==0) { res = (res * base) % mod ; pow--; }
    else { base = (base * base) % mod ;   n = n >> 1 ; }
   }
   return res ;
  }

 // Factorial number
 int fact(int n) {
   if (n == 0 | n == 1)
   return 1;
   else
   return n * fact(n - 1);
 }

 //
 ll Bigmod(ll N, ll P){      // Shafayet
	if(P==0) return 1;
	if(P%2==0){
    ll ret=Bigmod(N,P/2);   return ((ret%M)*(ret%M))%M; }
	else return ((N%M)*(Bigmod(N,P-1)%M))%M;
 }
 // Harmonic Series :
 * Time Complexity O(nln(n))  // divisor = floor(n/k) = 10/2 = 5 = {2,4,6,8,10};
    ll mx = 1e7 ;   ll cnt[mx] ;    vector<ll> divisors[mx] ;
    for ( int i = 1; i <= lim; i++ ) {
        for ( int j = i; j <= lim; j += i ) {
            cnt[j]++;
            // divisors[j].push_back(i); // divisors[4]={1,2,4};
            // SumOfDivisors[j] + = i ;
        }
    }

 */
ll gcd(ll a,ll b) {return __gcd(a,b); }
ll lcm(ll a,ll b) { return a*(b/gcd(a,b)); }
