void getMajorityElement(int array[], int size) {
    int majorityElement=-1, flag=1;
    int reqTimes = size/2;
    for(int i=0; i<size-1; i++){
        flag =1;
        for(int j=i+1; j<size; j++){
            if(array[i] == array[j]){
                flag++;
            }
        }

        if(flag > reqTimes){
           // cout<<"Flag at "<<i<<" index element is: "<<flag<<endl;
            majorityElement = array[i];
        }
                    
    }
    cout<<"Majority Element is: "<<majorityElement<<endl;

}
