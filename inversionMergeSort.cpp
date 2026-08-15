class Solution {
  public:
    int count = 0;
    int inversionCount(vector<int> &nums) {
        int n = nums.size();
        mergeSort(nums,0,n-1);
        return this->count;
        
    }
    
    void mergeSort(vector<int> &nums,int l,int r){
        if(l<r){
            int mid = (r-l)/2 + l;
            mergeSort(nums,l,mid);
            mergeSort(nums,mid+1,r);
            merge(nums,l,mid,r);
        }
    }
    
    void merge(vector<int> &arr,int l, int mid, int r){
        int n1 = mid-l+1;
        int n2 = r - mid;
        
        int L[n1],R[n2];
        for(int i =0;i<n1;i++){
            L[i] = arr[l+i];
        }
        for(int i=0;i<n2;i++){
            R[i] = arr[mid+1+i];
        }
        
        int i=0,j=0,k=l;
        
        while(i<n1 && j<n2){
            if(L[i]<=R[j]){
                arr[k] = L[i];
                i++;
            }
            else{
                this->count+= n1-i;
                arr[k] = R[j];
                j++;
            }
            k++;
        }
        
        while(i<n1){
            arr[k] = L[i];
            i++;k++;
        }
        while(j<n2){
            arr[k] = R[j];
            k++;j++;
        }
    }
    
};
