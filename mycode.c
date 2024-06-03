// // 素数筛
int pri[200005];
int ispri(){
    int i = 2;
    int j = 0;
    while(i < 200005){
        pri[i] = 1;
        i = i + 1;
    }   
    i = 2;
    while(i < 200005){
        if(pri[i]==1){
            j = 2;
            while(i * j < 200005){
                pri[i * j] = 0;
                j = j + 1;
            }
        }
        i = i + 1;
    }
    return 1;
}
int main(){
    ispri();
    int y = 2, x = 3;
    while(x < 30){
        if(pri[x] == 1){
            print_int(x);
            print_char(32);
        }
        x = x + y;
    }
    return 0;
}


// 斐波那契数列
// int f[2005];
// int main()
// {
//     f[0]=1;
//     f[1]=1;
//     int i = 2;
//     while(i < 2005)
//     {
//         f[i] = f[i - 1] + f[i - 2];
//         i = i + 1;
//     }
//     int j = 0;
//     while(j < 10)
//     {
//         print_int(f[j]);
//         println();
//         j = j + 1;
//     }
//     return 0;
// }