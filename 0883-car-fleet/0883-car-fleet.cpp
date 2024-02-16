class Solution {
public:
    static bool comparePairs(const std::pair<int, int>& a,
                             const std::pair<int, int>& b) {
        return a.first > b.first;
    }

    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        if (position.size() == 1)
            return 1;

        vector<pair<int, int>> cars;
        for (int i = 0; i < position.size(); i++) {
            pair<int, int> element{position[i], speed[i]};
            cars.push_back(element);
        }
        sort(cars.begin(), cars.end(), comparePairs);

        int count = 1;
        double cross;
        for (int i = 1; i < cars.size(); i++) {
            double relative_speed = cars[i - 1].second - cars[i].second;
            double distance = cars[i].first - cars[i - 1].first;

            if (relative_speed != 0) cross = distance / relative_speed;
            else { count++; continue; }

            if (cross > 0 &&
                (cars[i].second * cross + cars[i].first) <= target) {
                cars[i].second = cars[i - 1].second;
                cars[i].first = cars[i - 1].first;
            }else count++;
        }

        return count;
    }
};