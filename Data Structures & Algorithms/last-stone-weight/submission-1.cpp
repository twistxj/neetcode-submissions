class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap;
        int tempTop = 0;
        int tempDiff = 0;
        for(int stone : stones){
            maxHeap.push(stone);
        }
        while(maxHeap.size()>1){
            tempTop = maxHeap.top();
            maxHeap.pop();//removes first
            if(tempTop!=maxHeap.top()){
                tempDiff = abs(tempTop-maxHeap.top());
                maxHeap.pop(); //removes second
                maxHeap.push(tempDiff); //adds difference.
            }
            else //(tempTop == maxHeap.top())
            {
                maxHeap.pop();
            }
        }
        if(maxHeap.empty()){
            return 0;
        }
        else{
return maxHeap.top();
        }
         
    }
};
