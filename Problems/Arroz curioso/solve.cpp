#include <iostream>
#include <vector>

struct Point {
    int x, y;
};

int crossProduct(const Point& p1, const Point& p2, const Point& p3) {
    return (p2.x - p1.x) * (p3.y - p1.y) - (p2.y - p1.y) * (p3.x - p1.x);
}

bool isConvexPolygon(const std::vector<Point>& points) {
    int n = points.size();
    int sign = 0;

    for (int i = 0; i < n; i++) {
        int cp = crossProduct(points[i], points[(i + 1) % n], points[(i + 2) % n]);
        if (cp != 0) {
            if (sign == 0) {
                sign = cp > 0 ? 1 : -1;
            } else if (cp > 0 && sign == -1) {
                return false;
            } else if (cp < 0 && sign == 1) {
                return false;
            }
        }
    }

    return true;
}

int main() {
    int T;
    std::cin >> T;

    for (int t = 0; t < T; t++) {
        int N;
        std::cin >> N;

        std::vector<Point> points(N);
        for (int i = 0; i < N; i++) {
            std::cin >> points[i].x >> points[i].y;
        }

        bool isConvex = isConvexPolygon(points);
        std::cout << (isConvex ? "Si" : "No") << std::endl;
    }

    return 0;
}