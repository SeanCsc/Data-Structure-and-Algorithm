/* 
1 递归结束条件是什么
l==r
2 如何merge
将两组数据merge，新建两个指针，搭建一个临时数组，不断地更新loc

*/
int size, length;
    int *data, *temp;
    void merge_sort(int l,int r){
     if(l == r){
         return;
     } 
        int mid = (l+r)/2;
        merge_sort(l,mid);
        merge_sort(mid+1,r);
        int x = l,y = mid+1, loc = l;
        while(x<= mid || y <= r){
            if(x<= mid &&(y>r || data[x] <= data[y]) ){
                temp[loc] = data[x];
                x++;
            }
            else{
                temp[loc] = data[y];
                y++;
            }
            loc++;
        }
        for(int i = l; i <= r; i++){
            data[i] =temp[i];
        }
    
    }