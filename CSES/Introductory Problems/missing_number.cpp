# include <bits/stdc++.h>
using namespace std;

int main(){
    int size;
    cin >> size;
    bool found = FALSE;
    vector <int> data(size);
    for (int i = 0; i < size; i++)
	{
		cin >> data[i];
	}
	
    sort(data.begin(), data.end());
	for (int i = 0; i < size-1; i++)
	{
		if(data[i]!=i+1){
			found = TRUE;
			cout << i;
			break;
		}
	}
	if(!found) cout<< size;
	return 0;
}

