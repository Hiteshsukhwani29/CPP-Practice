for(int i=0;i<r-1;i++){
            for(int j=i+1;j<r;j++){
                if(arr[i]>arr[j]){
                    int temp=arr[i];
                    arr[i]=arr[j];
                    arr[j]=temp;
                }
            }
        }
        for(int i=0;i<r;i++){
            std::cout<<arr[i]<<endl;
        }
