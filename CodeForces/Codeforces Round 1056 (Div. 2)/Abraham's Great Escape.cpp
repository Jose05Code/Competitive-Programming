    #include <iostream>
    
    using namespace std;
     
    pair<string, char**> solve(int n, int k);
    void showResult(const pair<string, char**>& result, int n);
     
    int main(){
        int t; cin >> t;
        while(t--){
            int n, k;
            cin >> n >> k;
            pair<string, char**> result = solve(n, k);
            showResult(result, n);
     
            // free allocated grid if any
            if (result.second != nullptr) {
                for (int i = 0; i < n; ++i) delete[] result.second[i];
                delete[] result.second;
            }
        }
        return 0;
    }
     
    void showResult(const pair<string, char**>& result, int n){
        cout << result.first << "\n";
        if (result.second == nullptr) {
            // No grid to print
            return;
        }
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) cout << result.second[i][j];
            cout << '\n';
        }
    }
     
    pair<string, char**> solve(int n, int k) {
     
        char** grid = new char*[n];
        for (int i = 0; i < n; ++i) {
            grid[i] = new char[n];
            for (int j = 0; j < n; ++j) grid[i][j] = 'U';
        }
     
        int remaining = k;
     
        if (remaining == n*n) return make_pair(string("YES"), grid);
        if (remaining == n*n - 1) return make_pair(string("NO"), nullptr);
        if (n == 2 && k == 3) return make_pair(string("NO"), nullptr);
        if (n==2 && k==2) {
            char** specialGrid = new char*[2];
            specialGrid[0] = new char[2]{'D','U'};
            specialGrid[1] = new char[2]{'U','U'};
            return make_pair(string("YES"), specialGrid);
        }
        if (n==2 && k==1) {
            char** specialGrid = new char*[2];
            specialGrid[0] = new char[2]{'D','U'};
            specialGrid[1] = new char[2]{'U','L'};
            return make_pair(string("YES"), specialGrid);
        }
     
        int row = k/n;
        int col = k%n;

        if(row == n-1 && col < n-1){
            for(int j = 0; j < n-1-col; j++)
                grid[row][j] = 'R';
            grid[row][n-1-col] = 'L';
        }else{
        for (int j = 0; j < n-col; j++){
            grid[row][j] = 'D';
        }
        for (int i = row+1; i < n; i++){
            for (int j = 0; j < n; j++){
                if(j < n-1) grid[i][j] = 'R';
                else grid[i][j] = 'L';
            }
        }
    }
     
        return make_pair(string("YES"), grid);
     
    }