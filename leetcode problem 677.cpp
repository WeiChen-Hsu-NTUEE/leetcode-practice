class MapSum {
 public:
  /** Initialize your data structure here. */
  vector<string> key_arr;
  vector<int> val_arr;
  MapSum() {}

  void insert(string key, int val) {
    bool if_duplicate = false;
    for (int i = 0; i < key_arr.size(); i++) {
      if (key_arr[i] == key) {
        cout << "duplicate!\n";
        val_arr[i] = val;
        if_duplicate = true;
      }
    }
    if (if_duplicate == false) {
      key_arr.push_back(key);
      val_arr.push_back(val);
    }
  }

  int sum(string prefix) {
    for (int i = 0; i < key_arr.size(); i++) {
      cout << key_arr[i] << " ";
    }
    cout << "\n";
    for (int i = 0; i < val_arr.size(); i++) {
      cout << val_arr[i] << " ";
    }
    cout << "\n";
    int sum = 0;
    for (int i = 0; i < key_arr.size(); i++) {
      for (int j = 0; j < prefix.size(); j++) {
        if (key_arr[i][j] != prefix[j]) {
          break;
        }
        if (key_arr[i][j] == prefix[j] && j < prefix.size() - 1) {
          continue;
        }
        if (key_arr[i][j] == prefix[j] && j == prefix.size() - 1) {
          sum += val_arr[i];
        }
      }
    }
    return sum;
  }
};

/**
 * Your MapSum object will be instantiated and called as such:
 * MapSum* obj = new MapSum();
 * obj->insert(key,val);
 * int param_2 = obj->sum(prefix);
 */
