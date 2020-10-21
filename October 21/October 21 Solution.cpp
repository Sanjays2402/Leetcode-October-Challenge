class Solution {
public:
    
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> vec;
        for (int i = 0; i < asteroids.size(); i++) 
        {
            if(not vec.size() or vec[vec.size()-1] < 0 or asteroids[i] >= 0)
                vec.push_back(asteroids[i]);

            else if(abs(asteroids[i]) >= vec[vec.size()-1]) 
            {
                if(abs(asteroids[i]) != vec[vec.size()-1]) 
                    i--;
                vec.pop_back();
            }
        }
        return vec;
    }
};
