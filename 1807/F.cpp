#include <bits/stdc++.h>

using namespace std;

int a_c(int i, int j, int n, int m){
    //map the contour of a matrix to a vector (functie crescatoare, descrescatoare)
    if(i == 0 || j == m-1){
        return i + j;
    }else if(i == n-1 || j == 0){
        return 2*(n-1+m-1)-(i+j);
    }
    printf("fucked up, hard\n");
    return -1;
} 
    
bool gonna_hit(){

}

bool simulate(int &i, int &j, int dr, int n, int m){
    int di,dj;
    if(dr == 0){
        di = i;
        dj = j;
        i -= min(di,dj);
        j -= min(di,dj);
        if(i == 0 && j == 0){
            dr = 2;
        }else if(i == 0){
            dr = 3;
        }else if(j == 0){
            dr = 1;
        }
    }else if(dr == 1){
        di = i;
        dj = m-1-j;
        i -= min(di, dj);
        j += min(di,dj);
        if(i == 0 && j == m-1){
            dr = 3;
        }else if(i == 0){
            dr = 2;
        }else if(j == m-1){
            dr = 0;
        }
    }else if(dr == 2){
        di = n-1-i;
        dj = m-1-j;
        i += min(di,dj);
        j += min(di,dj);
        if(i == n-1 && j == m-1){
            dr = 0;
        }else if(i == n-1){
            dr = 1;
        }else if(j == m-1){
            dr = 3;
        }
    }else if(dr == 3){
        di
    }
}

void solve(){
    int n,m,i1,j1,i2,j2;
    char d[2];
    cin >> n >> m >> i1 >> j1 >> i2 >> j2 >> d;
    vector<pair<int,int>> contur(2*(n+m)-4, {0,0});
    
    while(!gonna_hit(i1,j1,i2,j2)){
    }
}

int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
}

