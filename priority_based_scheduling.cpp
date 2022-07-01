 #include <iostream>
using namespace std;

void prioritybasedscheduling(int p[],int priority[], int btime[]){
    int n=5;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(priority[j]<priority[i]){
                swap(priority[j], priority[i]);
                swap(p[j], p[i]);
                swap(btime[j], btime[i]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<p[i]<<"--"<<endl;
    }
}

int main(int argc, const char * argv[]) {
    int p[]={1,2,3,4,5};
    int priority[]={3,2,5,4,1};
    int btime[]={10,20,30,40,50};
    prioritybasedscheduling(p,priority,btime);
    return 0;
}
