int main(){
    int n;
    cin>>n;
    int values[n];
    for(int i=0;i<n;i++){
        cin>>values[i];
    }for(int i=0;i<n;i++){
        cout<<values[i]<<" ";
    } 
    cout<<endl;
    int element;
    cin>>element;
    int start=0;
    int end=n;
    while(start<=end){
        int mid=(start+end)/2;
        if(element==values[mid]){
            cout<<mid<<endl;
            break;
        }else if(element>values[mid]){
            start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return 0;

}