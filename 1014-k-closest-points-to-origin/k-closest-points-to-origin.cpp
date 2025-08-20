class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        int size = points.size();
        vector<vector<int>> closestPoints;
        priority_queue<double> dist;

        for(int i=0; i<k; i++) {
            double currDist = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            dist.push(currDist);
        }

        for(int i=k; i<size; i++) {
            double currDist = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            if(currDist < dist.top()) {
                dist.pop();
                dist.push(currDist);
            }
        }

        double minDist = dist.top();
        for(int i=0; i<size; i++) {
            double currDist = sqrt(pow(points[i][0], 2) + pow(points[i][1], 2));
            if(currDist <= minDist) {
                closestPoints.push_back({points[i][0], points[i][1]});
            }
        }
        return closestPoints;

    }
};