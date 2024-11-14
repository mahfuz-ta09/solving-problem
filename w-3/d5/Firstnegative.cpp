public:
    vector<int> FirstNegativeInteger(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>ans;
        queue<int>q;

        for(int i=0;i<k;i++){
            if(arr[i]<0){
                q.push(i);
            }
        }

        if(q.empty()){
            ans.push_back(0);
        }
        else{
            ans.push_back(arr[q.front()]);
        }


        for(int i=k;i<n;i++){
            if(!q.empty() && i-q.front()>=k){
                q.pop();
            }

            if(arr[i]<0){
                q.push(i);
            }
            if(q.empty()){
                ans.push_back(0);
            }
            else{
                ans.push_back(arr[q.front()]);
            }
        }

        return ans;
    }
