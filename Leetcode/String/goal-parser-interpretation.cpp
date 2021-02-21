class Solution {
public:
    string interpret(string command) {
        string result = "";
        for (int i = 0; i<command.size();){
            switch (command[i]){
                case 'G':
                    result+="G";
                    i+=1;
                break;
                case '(':
                    if(command[i+1]==')'){
                        result+="o";
                        i+=2;
                    }else{
                        result+="al";
                        i+=4;
                    }
                break;
            }
        }
        return result;
    }
};