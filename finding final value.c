//int findFinalValue(int* nums, int numsSize, int original) {
  //  int multiple;
    //for(int i=0;i<numsSize;i++){
   // multiple=1;
     //   if(nums[i]==original){
     //       multiple=original*2;
       //     return multiple;
        //}
        //else{
          //  break;
        //}
    //}
    int findFinalValue(int* nums, int numsSize, int original) {
    int current = original;
    bool found;
    
    do {
        found = false;
        for(int i = 0; i < numsSize; i++) {
            if(nums[i] == current) {
                current *= 2;
                found = true;
                break; // restart the search with the new value
            }
        }
    } while(found);
    
    return current;
}
