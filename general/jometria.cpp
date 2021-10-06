#include<bits/stdc++.h>

using namespace std;

typedef struct point Point2D;

struct point
{
    double x;
    double y;
    
    bool operator<(Point2D p)
    {
        return x < p.x || (x == p.x && y < p.y);
    }
};

double prod_vetorial(Point2D p, Point2D q, Point2D r)
{
    return (p.x - r.x) * (q.y - r.y)
           - (p.y - r.y) * (q.x - r.x);
}

vector<Point2D> andrews_convexhull(vector<Point2D> points)
{
    int n = points.size(), tam_upper,tam_lower;
  
    vector<Point2D> lower,upper;
  
    // Sort points lexicographically
    sort(points.begin(), points.end());
  
    // Build lower hull
    for (int i = 0; i < n; ++i) {
  
        tam_lower = lower.size();
        // If the point at K-1 position is not a part
        // of hull as vector from ans[k-2] to ans[k-1] 
        // and ans[k-2] to A[i] has a clockwise turn
        while (tam_lower >= 2 && prod_vetorial(lower[tam_lower - 2], 
                          lower[tam_lower - 1], points[i]) <= 0)
        {
            lower.pop_back();
            tam_lower = lower.size();
        }
        lower.push_back(points[i]);
    }
    
    reverse(points.begin(),points.end());
  
    // Build upper hull
    for (int i = 0; i < n; ++i) {
  
        tam_upper = upper.size();
        // If the point at K-1 position is not a part
        // of hull as vector from ans[k-2] to ans[k-1] 
        // and ans[k-2] to A[i] has a clockwise turn
        while (tam_upper >= 2 && prod_vetorial(upper[tam_upper - 2], 
                          upper[tam_upper - 1], points[i]) <= 0)
        {
            upper.pop_back();
            tam_upper = upper.size();
        }
        upper.push_back(points[i]);
    }
    
    upper.pop_back();
    lower.pop_back();
    lower.insert(lower.end(),upper.begin(),upper.end());
  
    return lower;
}

int main()
{
    vector<Point2D> point_cloud;
  
    // Add points
    point_cloud.push_back({0,3});
    point_cloud.push_back({2,2});
    point_cloud.push_back({ 1, 1 });
    point_cloud.push_back({ 2, 1 });
    point_cloud.push_back({ 3, 0 });
    point_cloud.push_back({ 0, 0 });
    point_cloud.push_back({ 3, 3 });
  
    // Find the convex hull
    vector<Point2D> ans = andrews_convexhull(point_cloud);
  
    // Print the convex hull
    for (int i = 0; i < ans.size(); i++)
        cout << "(" << ans[i].x << ", " 
             << ans[i].y << ")" << endl;
  
    return 0;
}
