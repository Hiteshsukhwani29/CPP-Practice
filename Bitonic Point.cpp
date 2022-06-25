class Solution{
public:
	
	int findMaximum(int arr[], int n) {
	    int m=INT_MIN;
	    for(int i=0;i<n;i++){
	        m=max(m,arr[i]);
	    }
	    return m;
	}
};
